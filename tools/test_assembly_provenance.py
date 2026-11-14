#!/usr/bin/env python3
"""Verify exported instruction words and intervals against the original IPA.

Usage: python3 tools/test_assembly_provenance.py ORIGINAL.ipa
The original application is never executed. No network access is used.
"""
import argparse
import bisect
import hashlib
import importlib.util
import json
import re
import unittest
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location("recover_assembly", Path(__file__).with_name("recover_assembly.py"))
RECOVERY = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(RECOVERY)


class AssemblyProvenanceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report = json.loads((ROOT / "metadata/assembly-coverage.json").read_text())
        cls.metadata = json.loads((ROOT / "metadata/objc-classes.json").read_text())
        with zipfile.ZipFile(ARGS.ipa) as archive:
            cls.image = archive.read("Payload/prince.app/prince")
        cls.text, starts = RECOVERY.macho_bounds(cls.image)
        cls.starts = sorted(starts | {cls.text["end"]})
        cls.starts_set = starts
        cls.parsed = {}
        for item in cls.report["files"]:
            path = ROOT / item["path"]
            cls.parsed[item["path"]] = [
                (int(m[1], 16), m[2], m[3])
                for line in path.read_text().splitlines()
                if (m := re.fullmatch(r"([0-9a-f]{16})  ([0-9a-f]{8})  (.*)", line))
            ]

    def test_source_and_selected_scope_match_declarations(self):
        self.assertEqual(hashlib.sha256(ARGS.ipa.read_bytes()).hexdigest(), RECOVERY.SOURCE_IPA_SHA256)
        self.assertEqual(RECOVERY.sha(self.image), self.report["main_image_sha256"])
        self.assertEqual(self.metadata["main_image_sha256"], self.report["main_image_sha256"])
        expected = {(c["name"], m["kind"], m["selector"], m["implementation_address"])
                    for c in self.metadata["classes"] for m in c["methods"]}
        actual = {(m["class"], m["kind"], m["selector"], m["implementation_address"])
                  for m in self.report["methods"]}
        self.assertEqual(expected, actual)
        self.assertEqual(len(expected), 3453)
        self.assertEqual(self.report["missing_method_records"], 0)

    def test_each_interval_stops_at_the_next_compiler_function_start(self):
        for method in self.report["methods"]:
            start = int(method["implementation_address"], 16)
            end = int(method["end_exclusive"], 16)
            self.assertIn(start, self.starts_set)
            self.assertEqual(end, self.starts[bisect.bisect_right(self.starts, start)])
            offset = self.text["file_offset"] + start - self.text["start"]
            self.assertEqual(offset, method["source_file_offset"])
            self.assertEqual(end - start, method["source_bytes"])
            self.assertEqual(RECOVERY.sha(self.image[offset:offset + end - start]),
                             method["source_bytes_sha256"])
            self.assertEqual(method["instruction_count"], (end - start) // 4)

    def test_all_exported_instruction_words_match_original_bytes(self):
        count = 0
        for instructions in self.parsed.values():
            for address, opcode, instruction in instructions:
                offset = self.text["file_offset"] + address - self.text["start"]
                self.assertEqual(self.image[offset:offset + 4].hex(), opcode)
                self.assertNotIn(";", instruction)
                self.assertNotIn("/Users/", instruction)
                self.assertNotIn("/home/", instruction)
                self.assertNotIn("://", instruction)
                self.assertNotIn('"', instruction)
                count += 1
        self.assertEqual(count, self.report["unique_instruction_count"])

    def test_files_and_each_method_slice_match_coverage(self):
        for item in self.report["files"]:
            path = ROOT / item["path"]
            self.assertEqual(path.stat().st_size, item["bytes"])
            self.assertEqual(RECOVERY.sha(path.read_bytes()), item["sha256"])
            instructions = self.parsed[item["path"]]
            addresses = [row[0] for row in instructions]
            methods = [m for m in self.report["methods"] if m["class"] + ".arm64.asm" == path.name]
            expected = []
            for method in sorted(methods, key=lambda m: int(m["implementation_address"], 16)):
                expected.extend(range(int(method["implementation_address"], 16),
                                      int(method["end_exclusive"], 16), 4))
            self.assertEqual(addresses, expected)

    def test_literal_and_path_annotations_are_removed(self):
        self.assertEqual(RECOVERY.strip_annotation('add x0, x0, #0x20 ; Objc cfstring ref: @"private-literal"'),
                         ("add x0, x0, #0x20", True))
        self.assertEqual(RECOVERY.strip_annotation('bl 0x1000 ; compiled /Users/example/project'),
                         ("bl 0x1000", True))
        self.assertIn("omitted", RECOVERY.strip_annotation('literal "private-literal"')[0])


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("ipa", type=Path)
    ARGS = parser.parse_args()
    unittest.main(argv=[__file__])
