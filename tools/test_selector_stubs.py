#!/usr/bin/env python3
"""Verify selector-stub mappings against original bytes; no target execution.

Usage: python3 tools/test_selector_stubs.py ORIGINAL.ipa
"""
import argparse
import importlib.util
import json
import re
import struct
import unittest
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location(
    "recover_selector_stubs", Path(__file__).with_name("recover_selector_stubs.py"))
RECOVERY = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(RECOVERY)


class SelectorStubTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report = json.loads((ROOT / "metadata/objc-selector-stubs.json").read_text())
        with zipfile.ZipFile(ARGS.ipa) as archive:
            cls.image = archive.read("Payload/prince.app/prince")
        cls.macho = RECOVERY.MachO(cls.image)

    def test_input_and_pseudocode_identities(self):
        self.assertEqual(RECOVERY.sha(ARGS.ipa.read_bytes()), RECOVERY.SOURCE_IPA_SHA256)
        self.assertEqual(RECOVERY.sha(self.image), self.report["main_image_sha256"])
        for item in self.report["pseudocode_inputs"]:
            data = (ROOT / item["path"]).read_bytes()
            self.assertEqual(len(data), item["bytes"])
            self.assertEqual(RECOVERY.sha(data), item["sha256"])

    def test_known_profile_user_selector_names(self):
        self.assertEqual(RECOVERY.resolve(self.macho, 0x1015E32E8)["selector"], "sid")
        self.assertEqual(RECOVERY.resolve(self.macho, 0x1015750A8)["selector"], "length")

    def test_every_reported_word_pointer_string_and_symbol_is_file_bound(self):
        for record in self.report["stubs"]:
            self.assertEqual(record["status"], "resolved")
            offset = record["stub_file_offset"]
            raw = self.image[offset:offset + 20]
            self.assertEqual(raw.hex(), record["instruction_bytes_hex"])
            self.assertEqual(RECOVERY.sha(raw), record["stub_prefix_bytes_sha256"])
            self.assertEqual([f"0x{word:08x}" for word in struct.unpack("<5I", raw)],
                             record["instruction_words"])
            pointer_offset = record["selector_ref_file_offset"]
            pointer = self.image[pointer_offset:pointer_offset + 8]
            self.assertEqual(pointer.hex(), record["selector_ref_pointer_bytes_hex"])
            self.assertEqual(struct.unpack("<Q", pointer)[0], int(record["selector_cstring_address"], 16))
            string_offset = record["selector_cstring_file_offset"]
            literal = record["selector"].encode() + b"\0"
            self.assertEqual(self.image[string_offset:string_offset + len(literal)], literal)
            self.assertEqual(RECOVERY.sha(literal), record["selector_cstring_bytes_sha256"])
            symbol_offset = record["dispatch_binding"]["string_table_file_offset"]
            self.assertEqual(self.image[symbol_offset:symbol_offset + len(b"_objc_msgSend\0")], b"_objc_msgSend\0")
            self.assertEqual(RECOVERY.resolve(self.macho, int(record["stub_address"], 16))["selector"],
                             record["selector"])

    def test_scope_contains_only_referenced_objc_stub_addresses(self):
        section = self.macho.section("__objc_stubs")
        expected = set()
        for item in self.report["pseudocode_inputs"]:
            text = (ROOT / item["path"]).read_text()
            for found in re.finditer(r"\bFUN_([0-9a-fA-F]{8,16})\b", text):
                address = int(found[1], 16)
                if section["address"] <= address < section["address"] + section["size"]:
                    expected.add(address)
        actual = {int(record["stub_address"], 16) for record in self.report["stubs"]}
        self.assertEqual(expected, actual)
        self.assertEqual(len(actual), self.report["resolved_stub_addresses"])
        self.assertEqual(self.report["unresolved_stub_addresses"], 0)

    def test_unsupported_load_register_and_branch_forms_are_rejected(self):
        address = 0x1015E32E8
        offset = self.macho.offset(address, 20)
        for instruction, changed in [(1, 0xF9421C20), (4, 0xD61F0220)]:
            with self.subTest(instruction=instruction):
                image = bytearray(self.image)
                struct.pack_into("<I", image, offset + instruction * 4, changed)
                with self.assertRaises(ValueError):
                    RECOVERY.resolve(RECOVERY.MachO(bytes(image)), address)

    def test_selector_pointer_outside_method_name_section_is_rejected(self):
        record = RECOVERY.resolve(self.macho, 0x1015E32E8)
        image = bytearray(self.image)
        struct.pack_into("<Q", image, record["selector_ref_file_offset"], 0x100004000)
        with self.assertRaisesRegex(ValueError, "outside __objc_methname"):
            RECOVERY.resolve(RECOVERY.MachO(bytes(image)), 0x1015E32E8)


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("ipa", type=Path)
    ARGS = parser.parse_args()
    unittest.main(argv=[__file__])
