#!/usr/bin/env python3
"""Resolve Objective-C selector stubs referenced by exported Ghidra pseudocode.

Only the verified original Mach-O bytes establish selector mappings. This tool
decodes ADRP x1 / LDR x1 selector loading and ADRP x16 / LDR x16 / BR x16,
checks the selector slot and method-name C string against actual section/VM/file
mappings, and resolves the dispatch GOT slot through the indirect symbol table.
No function prototype, receiver type, or implementation is inferred.
"""
from __future__ import annotations

import argparse
import collections
import hashlib
import json
import re
import struct
import zipfile
from pathlib import Path

SOURCE_IPA_SHA256 = "62c86b2f935b252e611ca176de631ca10e3c727c20cbc8705867a66987b70893"
ROOT = Path(__file__).resolve().parents[1]


def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


class MachO:
    def __init__(self, image: bytes):
        if image[:4] != bytes.fromhex("cffaedfe") or struct.unpack_from("<I", image, 4)[0] != 0x0100000C:
            raise ValueError("Expected verified thin arm64 Mach-O")
        self.image = image
        self.segments = []
        self.sections = []
        self.symtab = None
        self.indirect = None
        at = 32
        for _ in range(struct.unpack_from("<I", image, 16)[0]):
            cmd, size = struct.unpack_from("<II", image, at)
            if size < 8 or at + size > len(image):
                raise ValueError("Malformed Mach-O command bounds")
            if cmd == 0x19:
                segname = image[at + 8:at + 24].split(b"\0")[0].decode("ascii")
                vm, vm_size, file_offset, file_size = struct.unpack_from("<QQQQ", image, at + 24)
                if file_offset + file_size > len(image):
                    raise ValueError("Segment exceeds file bounds")
                self.segments.append({"name": segname, "address": vm, "vm_size": vm_size,
                                      "file_offset": file_offset, "file_size": file_size})
                for index in range(struct.unpack_from("<I", image, at + 64)[0]):
                    pos = at + 72 + index * 80
                    if pos + 80 > at + size:
                        raise ValueError("Section exceeds segment command")
                    name = image[pos:pos + 16].split(b"\0")[0].decode("ascii")
                    address, length, offset = struct.unpack_from("<QQI", image, pos + 32)
                    flags, reserved1 = struct.unpack_from("<II", image, pos + 64)
                    self.sections.append({"segment": segname, "name": name, "address": address,
                                          "size": length, "file_offset": offset,
                                          "flags": flags, "reserved1": reserved1})
            elif cmd == 0x2:
                symoff, count, stroff, strsize = struct.unpack_from("<IIII", image, at + 8)
                if symoff + count * 16 > len(image) or stroff + strsize > len(image):
                    raise ValueError("Symbol table exceeds file bounds")
                self.symtab = (symoff, count, stroff, strsize)
            elif cmd == 0xB:
                offset, count = struct.unpack_from("<II", image, at + 56)
                if offset + count * 4 > len(image):
                    raise ValueError("Indirect symbol table exceeds file bounds")
                self.indirect = (offset, count)
            at += size

    def section(self, name: str) -> dict:
        matches = [item for item in self.sections if item["name"] == name]
        if len(matches) != 1:
            raise ValueError("Section absent or ambiguous: " + name)
        return matches[0]

    def offset(self, address: int, size: int) -> int:
        matches = [segment["file_offset"] + address - segment["address"]
                   for segment in self.segments
                   if segment["address"] <= address and address + size <= segment["address"] + segment["file_size"]]
        if len(matches) != 1:
            raise ValueError("VM address is not uniquely file-backed")
        return matches[0]

    def read(self, address: int, size: int) -> bytes:
        offset = self.offset(address, size)
        return self.image[offset:offset + size]

    def uint64(self, address: int) -> int:
        return struct.unpack("<Q", self.read(address, 8))[0]

    def cstring(self, address: int, section_name: str) -> tuple[str, bytes]:
        section = self.section(section_name)
        if not section["address"] <= address < section["address"] + section["size"]:
            raise ValueError("String pointer is outside " + section_name)
        limit = min(4096, section["address"] + section["size"] - address)
        data = self.read(address, limit)
        end = data.find(b"\0")
        if end < 0:
            raise ValueError("Selector string has no bounded NUL terminator")
        raw = data[:end + 1]
        value = raw[:-1].decode("utf-8")
        if not value or re.search(r"[\s\x00-\x1f/\\]", value) or "://" in value:
            raise ValueError("Unexpected selector string shape")
        return value, raw

    def indirect_symbol(self, address: int) -> dict:
        if self.symtab is None or self.indirect is None:
            raise ValueError("Required symbol-table metadata is absent")
        candidates = [s for s in self.sections if s["flags"] & 0xFF in (6, 7)
                      and s["address"] <= address and address + 8 <= s["address"] + s["size"]]
        if len(candidates) != 1:
            raise ValueError("Dispatch slot is not a unique pointer-table entry")
        section = candidates[0]
        delta = address - section["address"]
        if delta % 8:
            raise ValueError("Dispatch slot is not pointer-aligned")
        index = section["reserved1"] + delta // 8
        indirect_offset, indirect_count = self.indirect
        if not 0 <= index < indirect_count:
            raise ValueError("Indirect symbol index is out of bounds")
        symbol_index = struct.unpack_from("<I", self.image, indirect_offset + index * 4)[0]
        symoff, symbol_count, stroff, string_size = self.symtab
        if symbol_index & 0xC0000000 or symbol_index >= symbol_count:
            raise ValueError("Dispatch symbol is local/absolute or unresolved")
        symbol_offset = symoff + symbol_index * 16
        string_index = struct.unpack_from("<I", self.image, symbol_offset)[0]
        if string_index >= string_size:
            raise ValueError("Symbol string index is out of bounds")
        begin = stroff + string_index
        end = self.image.find(b"\0", begin, stroff + string_size)
        if end < 0:
            raise ValueError("Dispatch symbol name is not NUL-terminated")
        return {"name": self.image[begin:end].decode("ascii"), "indirect_index": index,
                "indirect_table_file_offset": indirect_offset + index * 4,
                "symbol_index": symbol_index, "symbol_table_file_offset": symbol_offset,
                "string_table_file_offset": begin}


def adrp(word: int, pc: int, register: int) -> int:
    if word & 0x9F00001F != 0x90000000 | register:
        raise ValueError("Unsupported ADRP register/opcode form")
    immediate = ((word >> 5 & 0x7FFFF) << 2) | (word >> 29 & 0x3)
    if immediate & (1 << 20):
        immediate -= 1 << 21
    return (pc & ~0xFFF) + immediate * 4096


def ldr_slot(word: int, page: int, base_register: int, target_register: int) -> int:
    expected = 0xF9400000 | base_register << 5 | target_register
    if word & 0xFFC003FF != expected:
        raise ValueError("Unsupported 64-bit unsigned-offset LDR form")
    return page + ((word >> 10) & 0xFFF) * 8


def resolve(macho: MachO, address: int) -> dict:
    stubs = macho.section("__objc_stubs")
    if not stubs["address"] <= address or address + 20 > stubs["address"] + stubs["size"]:
        raise ValueError("Address is outside a complete Objective-C stub instruction prefix")
    if (address - stubs["address"]) % 32:
        raise ValueError("Address is not aligned to this image's 32-byte Objective-C stubs")
    raw = macho.read(address, 20)
    words = struct.unpack("<5I", raw)
    selector_page = adrp(words[0], address, 1)
    selector_slot = ldr_slot(words[1], selector_page, 1, 1)
    selrefs = macho.section("__objc_selrefs")
    if not selrefs["address"] <= selector_slot or selector_slot + 8 > selrefs["address"] + selrefs["size"]:
        raise ValueError("Selector load does not address __objc_selrefs")
    if (selector_slot - selrefs["address"]) % 8:
        raise ValueError("Selector reference is not pointer-aligned")
    selector_address = macho.uint64(selector_slot)
    selector, selector_bytes = macho.cstring(selector_address, "__objc_methname")
    dispatch_page = adrp(words[2], address + 8, 16)
    dispatch_slot = ldr_slot(words[3], dispatch_page, 16, 16)
    if words[4] != 0xD61F0200:
        raise ValueError("Stub does not terminate with BR x16")
    dispatch = macho.indirect_symbol(dispatch_slot)
    if dispatch["name"] != "_objc_msgSend":
        raise ValueError("Dispatch pointer does not bind to _objc_msgSend")
    return {"status": "resolved", "stub_address": hex(address), "selector": selector,
            "stub_file_offset": macho.offset(address, 20),
            "stub_prefix_bytes_sha256": sha(raw),
            "instruction_words": [f"0x{word:08x}" for word in words],
            "instruction_bytes_hex": raw.hex(),
            "instruction_file_offsets": [macho.offset(address + index * 4, 4) for index in range(5)],
            "selector_ref_address": hex(selector_slot),
            "selector_ref_file_offset": macho.offset(selector_slot, 8),
            "selector_ref_pointer_bytes_hex": macho.read(selector_slot, 8).hex(),
            "selector_cstring_address": hex(selector_address),
            "selector_cstring_file_offset": macho.offset(selector_address, len(selector_bytes)),
            "selector_cstring_bytes_sha256": sha(selector_bytes),
            "dispatch_pointer_address": hex(dispatch_slot),
            "dispatch_pointer_file_offset": macho.offset(dispatch_slot, 8),
            "dispatch_binding": dispatch}


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("ipa", type=Path)
    parser.add_argument("--output", type=Path, default=ROOT)
    parser.add_argument("--cross-check-map", type=Path,
                        help="Optional historical selector map; never used to derive mappings")
    args = parser.parse_args()
    if sha(args.ipa.read_bytes()) != SOURCE_IPA_SHA256:
        raise SystemExit("Input IPA differs from the reviewed source artifact")
    with zipfile.ZipFile(args.ipa) as archive:
        image = archive.read("Payload/prince.app/prince")
    macho = MachO(image)
    stubs = macho.section("__objc_stubs")
    references = collections.defaultdict(lambda: {"aliases": set(), "files": collections.Counter()})
    inputs = []
    outside_stub_targets = set()
    for path in sorted((args.output / "pseudocode").glob("*.c.txt")):
        data = path.read_bytes()
        text = data.decode("utf-8")
        relative = "pseudocode/" + path.name
        inputs.append({"path": relative, "sha256": sha(data), "bytes": len(data)})
        for match in re.finditer(r"\b(FUN_([0-9a-fA-F]{8,16}))\b", text):
            address = int(match[2], 16)
            if not stubs["address"] <= address < stubs["address"] + stubs["size"]:
                outside_stub_targets.add(address)
                continue
            references[address]["aliases"].add(match[1])
            references[address]["files"][relative] += 1
    if not inputs or not references:
        raise SystemExit("No exported pseudocode selector-stub references were found")
    records = []
    selector_aliases = collections.defaultdict(list)
    cross_check = collections.Counter()
    old = json.loads(args.cross_check_map.read_text()) if args.cross_check_map else None
    for address, reference in sorted(references.items()):
        try:
            record = resolve(macho, address)
            selector_aliases[record["selector"]].extend(sorted(reference["aliases"]))
            if old is not None:
                previous = old.get(hex(address))
                cross_check["absent" if previous is None else "matched" if previous == record["selector"] else "mismatched"] += 1
        except (ValueError, UnicodeDecodeError, struct.error) as error:
            record = {"status": "unresolved", "stub_address": hex(address), "reason": str(error)}
        records.append({**record, "ghidra_aliases": sorted(reference["aliases"]),
                        "reference_count": sum(reference["files"].values()),
                        "referenced_in": [{"path": name, "count": count}
                                          for name, count in sorted(reference["files"].items())]})
    for item in inputs:
        if sha((args.output / item["path"]).read_bytes()) != item["sha256"]:
            raise SystemExit("Pseudocode changed during selector export; rerun after analysis settles")
    resolved = sum(record["status"] == "resolved" for record in records)
    report = {"source_ipa_sha256": SOURCE_IPA_SHA256, "main_image_sha256": sha(image),
              "source_member": "Payload/prince.app/prince", "architecture": "arm64",
              "provider": "Deterministic Mach-O mappings, instruction decoding and indirect-symbol verification",
              "objc_stubs_section": {key: hex(stubs[key]) if key in ("address", "size") else stubs[key]
                                     for key in ("segment", "name", "address", "size", "file_offset")},
              "pseudocode_inputs": inputs, "referenced_stub_addresses": len(records),
              "resolved_stub_addresses": resolved, "unresolved_stub_addresses": len(records) - resolved,
              "unique_resolved_selectors": len(selector_aliases),
              "non_stub_FUN_targets_not_exported": len(outside_stub_targets),
              "historical_map_cross_check_only": dict(cross_check) if old is not None else None,
              "selector_aliases": {name: sorted(set(aliases)) for name, aliases in sorted(selector_aliases.items())},
              "limitations": ["A selector name does not establish receiver type or called implementation",
                              "No function prototypes or Objective-C source method bodies are inferred",
                              "Only FUN aliases present in the hashed pseudocode files and inside __objc_stubs are selected",
                              "Unsupported instruction, pointer, or symbol-table forms remain unresolved"],
              "stubs": records}
    target = args.output / "metadata/objc-selector-stubs.json"
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_text(json.dumps(report, ensure_ascii=False, indent=2) + "\n")
    print(json.dumps({key: report[key] for key in ["referenced_stub_addresses", "resolved_stub_addresses",
                     "unresolved_stub_addresses", "unique_resolved_selectors",
                     "historical_map_cross_check_only"]}, indent=2))


if __name__ == "__main__":
    main()
