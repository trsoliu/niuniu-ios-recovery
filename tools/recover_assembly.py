#!/usr/bin/env python3
"""Export bounded ARM64 instruction slices from the original, verified IPA.

The output is raw disassembly with addresses, not recovered source or assembler
input. Function intervals are bounded by the union of LC_FUNCTION_STARTS,
fresh Objective-C method addresses and fresh __TEXT,__text symbol addresses.
Apple otool is run anew; pre-existing assembly dumps are never trusted.
"""
from __future__ import annotations

import argparse
import bisect
import collections
import hashlib
import json
import re
import struct
import subprocess
import tempfile
import zipfile
from pathlib import Path

SOURCE_IPA_SHA256 = "62c86b2f935b252e611ca176de631ca10e3c727c20cbc8705867a66987b70893"
ROOT = Path(__file__).resolve().parents[1]
EXTRA_CLASSES = frozenset({
    "AppDelegate", "BannerItemView", "BaseNavCV", "BaseViewController",
    "CarouselView", "ColorManager", "CommonRequest", "DetailHeaderView",
    "DownloadModel", "FSTabBar", "FSTabBarController", "FSViewController",
    "HeaderModel", "InsetLabel", "M3U8", "M3U8Seg", "NetURLSchemeHandler",
    "NetWebView", "Notice", "PublicFunction", "RecommendView", "Share",
    "TableViewPullRefresh", "VerifyView", "VideoDownloadUtils", "VideoItemView",
    "VideoLoadErrorView", "VideoPlayErrorView", "VideoPrepareView",
})


def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def write_json(path: Path, data: object) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(data, ensure_ascii=False, indent=2) + "\n")


def macho_bounds(image: bytes) -> tuple[dict, set[int]]:
    """Read the thin arm64 executable's actual text interval/function-start table."""
    if image[:4] != bytes.fromhex("cffaedfe"):
        raise ValueError("Expected the verified thin 64-bit little-endian Mach-O")
    cpu = struct.unpack_from("<I", image, 4)[0]
    if cpu != 0x0100000C:
        raise ValueError("Expected arm64 Mach-O")
    count = struct.unpack_from("<I", image, 16)[0]
    at = 32
    text = None
    text_base = None
    starts_data = None
    for _ in range(count):
        cmd, size = struct.unpack_from("<II", image, at)
        if size < 8 or at + size > len(image):
            raise ValueError("Invalid Mach-O load command bounds")
        if cmd == 0x19:
            segment = image[at + 8:at + 24].split(b"\0")[0]
            if segment == b"__TEXT":
                text_base = struct.unpack_from("<Q", image, at + 24)[0]
                sections = struct.unpack_from("<I", image, at + 64)[0]
                for index in range(sections):
                    pos = at + 72 + index * 80
                    if pos + 80 > at + size:
                        raise ValueError("Invalid Mach-O section bounds")
                    if image[pos:pos + 16].split(b"\0")[0] == b"__text":
                        address, length, offset = struct.unpack_from("<QQI", image, pos + 32)
                        if offset + length > len(image):
                            raise ValueError("Text section exceeds source file bounds")
                        text = {"start": address, "end": address + length, "file_offset": offset}
        elif cmd == 0x26:
            offset, length = struct.unpack_from("<II", image, at + 8)
            if offset + length > len(image):
                raise ValueError("Function-start table exceeds source file bounds")
            starts_data = image[offset:offset + length]
        at += size
    if text is None or text_base is None or starts_data is None:
        raise ValueError("Required text/function-start metadata is absent")
    position, address = 0, text_base
    starts = set()
    while position < len(starts_data):
        value, shift = 0, 0
        while True:
            if position >= len(starts_data) or shift >= 64:
                raise ValueError("Malformed ULEB128 function-start value")
            byte = starts_data[position]
            position += 1
            value |= (byte & 0x7F) << shift
            if not byte & 0x80:
                break
            shift += 7
        if value == 0:
            break
        address += value
        if text["start"] <= address < text["end"]:
            starts.add(address)
    return text, starts


def fresh_methods(dump: str) -> tuple[list[dict], set[int], set[str]]:
    """Recover only implementation methods, keeping all IMPs as interval boundaries."""
    selected = []
    all_addresses = set()
    class_names = set()
    active = False
    current_class = None
    kind, section, member = "instance", "", None
    for line in dump.splitlines():
        if line.startswith("Contents of "):
            active = "__objc_classlist)" in line
            current_class, member = None, None
            continue
        # All positive method IMPs from all metadata sections inform boundaries.
        match = re.match(r"^\s+imp\s+(0x[0-9a-f]+)(?:\s|$)", line)
        if match and int(match[1], 16):
            all_addresses.add(int(match[1], 16))
        if not active:
            continue
        if re.match(r"^[0-9a-f]{16} 0x[0-9a-f]+$", line):
            current_class, kind, section, member = None, "instance", "", None
            continue
        if line == "Meta Class":
            kind, section, member = "class", "", None
            continue
        match = re.match(r"^        name\s+0x[0-9a-f]+\s+(.+)$", line)
        if match:
            current_class = match[1]
        match = re.match(r"^        (baseMethods|baseProperties|ivars|baseProtocols|weakIvarLayout)\s", line)
        if match:
            section, member = match[1], None
            continue
        if not current_class or not (current_class.startswith("NNC") or current_class in EXTRA_CLASSES):
            continue
        class_names.add(current_class)
        if section != "baseMethods":
            continue
        match = re.match(r"^            name\s+0x[0-9a-f]+\s+(.+)$", line)
        if match:
            member = {"class": current_class, "kind": kind, "selector": match[1]}
        match = re.match(r"^            types\s+0x[0-9a-f]+\s+(.+)$", line)
        if match and member is not None:
            member["type_encoding"] = match[1]
        match = re.match(r"^            imp\s+(0x[0-9a-f]+)(?:\s|$)", line)
        if match and member is not None:
            selected.append({**member, "implementation_address": match[1]})
            member = None
    if any(not re.fullmatch(r"[A-Za-z_$][A-Za-z0-9_$]*", name) for name in class_names):
        raise ValueError("Invalid class identifier")
    return selected, all_addresses, class_names


def check_published_inventory(methods: list[dict], metadata: Path, main_sha: str) -> None:
    if not metadata.exists():
        return
    known = json.loads(metadata.read_text())
    if known.get("source_ipa_sha256") != SOURCE_IPA_SHA256 or known.get("main_image_sha256") != main_sha:
        raise ValueError("Published declaration metadata has a different source identity")
    if known.get("class_selection") != {"prefix": "NNC", "additional_classes": sorted(EXTRA_CLASSES)}:
        raise ValueError("Assembly selection differs from published declaration scope")
    fields = ("class", "kind", "selector", "type_encoding", "implementation_address")
    def key(item):
        return tuple(item[field] for field in fields)
    expected = [key({"class": c["name"], **m}) for c in known["classes"] for m in c["methods"]]
    if sorted(expected) != sorted(key(m) for m in methods):
        raise ValueError("Fresh method metadata differs from published declarations")


def strip_annotation(instruction: str) -> tuple[str, bool]:
    """Never export otool's decoded literals, source paths or arbitrary comments."""
    body, separator, _ = instruction.partition(";")
    body = " ".join(body.split())
    if any(marker in body for marker in ['"', "'", "/Users/", "/home/", "://"]):
        # No literal is needed to preserve provenance: callers retain the opcode.
        return "<operand annotation omitted; refer to opcode>", True
    return body, bool(separator)


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("ipa", type=Path)
    parser.add_argument("--output", type=Path, default=ROOT)
    args = parser.parse_args()
    if sha(args.ipa.read_bytes()) != SOURCE_IPA_SHA256:
        raise SystemExit("Input IPA differs from the reviewed source artifact")
    with zipfile.ZipFile(args.ipa) as archive:
        image = archive.read("Payload/prince.app/prince")
    main_sha = sha(image)
    text, starts = macho_bounds(image)
    sources = collections.defaultdict(set)
    for address in starts:
        sources[address].add("LC_FUNCTION_STARTS")
    with tempfile.TemporaryDirectory(prefix="niuniu-assembly-") as temp:
        binary = Path(temp) / "prince"
        binary.write_bytes(image)
        dump = subprocess.check_output(["xcrun", "otool", "-arch", "arm64", "-ov", str(binary)], text=True)
        methods, imps, classes = fresh_methods(dump)
        if len(classes) != 139 or len(methods) != 3453:
            raise ValueError("Unexpected selected method inventory")
        check_published_inventory(methods, args.output / "metadata/objc-classes.json", main_sha)
        for address in imps:
            if text["start"] <= address < text["end"]:
                sources[address].add("fresh_objc_method_metadata")
        symbols = subprocess.check_output(["xcrun", "nm", "-arch", "arm64", "-nm", str(binary)], text=True)
        for line in symbols.splitlines():
            match = re.match(r"^([0-9a-fA-F]{16}) \(__TEXT,__text\)\s", line)
            if match:
                address = int(match[1], 16)
                if text["start"] <= address < text["end"]:
                    sources[address].add("fresh_text_symbol")
        sources[text["end"]].add("text_section_end")
        boundaries = sorted(sources)
        selected_starts = sorted({int(m["implementation_address"], 16) for m in methods})
        slices = {}
        for start in selected_starts:
            index = bisect.bisect_right(boundaries, start)
            if start < text["start"] or index >= len(boundaries):
                raise ValueError("Selected method falls outside the original text section")
            end = boundaries[index]
            slices[start] = {"end": end, "instructions": [], "comments_removed": 0}
        process = subprocess.Popen(["xcrun", "otool", "-arch", "arm64", "-tvV", str(binary)],
                                   stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
        assert process.stdout is not None
        selected_index = 0
        total_parsed = 0
        for line in process.stdout:
            match = re.match(r"^([0-9a-fA-F]{16})\s+(.+)$", line)
            if not match:
                continue
            address = int(match[1], 16)
            total_parsed += 1
            while selected_index + 1 < len(selected_starts) and selected_starts[selected_index + 1] <= address:
                selected_index += 1
            start = selected_starts[selected_index]
            selected = slices[start]
            if not start <= address < selected["end"]:
                continue
            instruction, removed = strip_annotation(match[2])
            offset = text["file_offset"] + address - text["start"]
            opcode = image[offset:offset + 4].hex()
            selected["instructions"].append({"address": address, "instruction": instruction, "opcode": opcode})
            selected["comments_removed"] += int(removed)
        stderr = process.stderr.read() if process.stderr is not None else ""
        if process.wait() != 0:
            raise RuntimeError("Apple otool disassembly failed: " + stderr[:500])
    for start, selected in slices.items():
        expected = list(range(start, selected["end"], 4))
        actual = [instruction["address"] for instruction in selected["instructions"]]
        if actual != expected:
            raise ValueError(f"Non-contiguous instruction slice at {start:#x}")
    output = args.output / "assembly"
    output.mkdir(parents=True, exist_ok=True)
    by_class = collections.defaultdict(list)
    for method in methods:
        by_class[method["class"]].append(method)
    coverage = []
    files = []
    for name, items in sorted(by_class.items()):
        lines = ["; Raw ARM64 disassembly, not original source or assembler input.",
                 "; Decoded literals and all otool comments are omitted.",
                 "; Only contiguous method-entry slices are exported; this is not CFG/body completeness.",
                 "; source main-image SHA-256: " + main_sha, ""]
        for method in sorted(items, key=lambda m: (int(m["implementation_address"], 16), m["kind"], m["selector"])):
            start = int(method["implementation_address"], 16)
            selected = slices[start]
            prefix = "+" if method["kind"] == "class" else "-"
            lines += [f"; {prefix}[{name} {method['selector']}]",
                      f"; entry {start:#x}; next boundary {selected['end']:#x} (exclusive)",
                      "; Objective-C encoding: " + method["type_encoding"]]
            for instruction in selected["instructions"]:
                lines.append(f"{instruction['address']:016x}  {instruction['opcode']}  {instruction['instruction']}")
            lines.append("")
            offset = text["file_offset"] + start - text["start"]
            length = selected["end"] - start
            coverage.append({**method, "end_exclusive": hex(selected["end"]),
                             "boundary_sources": sorted(sources[selected["end"]]),
                             "source_file_offset": offset, "source_bytes": length,
                             "source_bytes_sha256": sha(image[offset:offset + length]),
                             "instruction_count": len(selected["instructions"]),
                             "annotation_lines_omitted": selected["comments_removed"],
                             "contiguous_slice_complete": True})
        path = output / (name + ".arm64.asm")
        path.write_text("\n".join(lines))
        files.append({"path": "assembly/" + path.name, "bytes": path.stat().st_size,
                      "sha256": sha(path.read_bytes()), "methods": len(items)})
    report = {"source_ipa_sha256": SOURCE_IPA_SHA256, "main_image_sha256": main_sha,
              "source_member": "Payload/prince.app/prince", "architecture": "arm64",
              "provider": "Apple otool -arch arm64 -tvV (fresh verified image)",
              "boundary_sources": ["LC_FUNCTION_STARTS", "fresh_objc_method_metadata", "fresh_text_symbol"],
              "selected_classes": len(classes), "selected_method_records": len(methods),
              "covered_method_records": len(coverage), "missing_method_records": 0,
              "unique_method_entry_slices": len(slices),
              "unique_instruction_count": sum(len(v["instructions"]) for v in slices.values()),
              "total_text_instructions_read": total_parsed,
              "exported_file_bytes": sum(f["bytes"] for f in files),
              "source_project_recovered": False,
              "limitations": ["Raw disassembly is not source code or directly assemblable input",
                              "Contiguous entry slices do not establish whole-function CFG completeness",
                              "Out-of-line blocks/helpers and external dependencies are not expanded",
                              "All decoded literals and otool comments are omitted to avoid credential/string dumps"],
              "files": files, "methods": coverage}
    write_json(args.output / "metadata/assembly-coverage.json", report)
    print(json.dumps({key: report[key] for key in ["selected_classes", "selected_method_records",
                     "covered_method_records", "missing_method_records", "unique_method_entry_slices",
                     "unique_instruction_count", "exported_file_bytes"]}, indent=2))


if __name__ == "__main__":
    main()
