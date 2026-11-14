#!/usr/bin/env python3
"""Verify that cached analysis cannot silently relabel declarations or UI bytes.

Run on macOS with the original IPA and local REA analysis directory supplied:
  python3 tools/test_recovery_provenance.py ORIGINAL.ipa --analysis-dir ANALYSIS
No target application is executed and no network requests are made.
"""
import argparse
import copy
import importlib.util
import json
import subprocess
import sys
import tempfile
import unittest
import zipfile
from pathlib import Path

SPEC = importlib.util.spec_from_file_location(
    "recover_metadata", Path(__file__).with_name("recover_metadata.py"))
RECOVERY = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(RECOVERY)


class ProvenanceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.evidence = json.loads((ARGS.analysis_dir / "interface-builder-recovery.json").read_text())
        cls.archive = zipfile.ZipFile(ARGS.ipa)
        cls.main_sha = RECOVERY.digest(cls.archive.read("Payload/prince.app/prince"))

    @classmethod
    def tearDownClass(cls):
        cls.archive.close()

    def test_current_ui_evidence_matches_every_selected_archive(self):
        data = RECOVERY.validate_ib_evidence(self.evidence, self.main_sha, self.archive)
        self.assertGreater(len(data["documents"]), 0)

    def test_all_three_ui_image_identity_fields_are_checked(self):
        for field in ["subject", "normalized", "graph"]:
            with self.subTest(field=field):
                changed = copy.deepcopy(self.evidence)
                if field == "subject":
                    changed["subject"]["digest"]["sha256"] = "0" * 64
                elif field == "normalized":
                    changed["normalized_result"]["target_sha256"] = "0" * 64
                else:
                    changed["normalized_result"]["graph"]["target_sha256"] = "0" * 64
                with self.assertRaisesRegex(ValueError, "does not match"):
                    RECOVERY.validate_ib_evidence(changed, self.main_sha, self.archive)

    def test_ui_archive_digest_is_checked(self):
        changed = copy.deepcopy(self.evidence)
        changed["normalized_result"]["documents"][0]["archive_sha256"] = "0" * 64
        with self.assertRaisesRegex(ValueError, "archive digest mismatch"):
            RECOVERY.validate_ib_evidence(changed, self.main_sha, self.archive)

    def test_ui_archive_coverage_is_checked(self):
        changed = copy.deepcopy(self.evidence)
        changed["normalized_result"]["documents"].pop()
        with self.assertRaisesRegex(ValueError, "does not cover"):
            RECOVERY.validate_ib_evidence(changed, self.main_sha, self.archive)

    def test_ui_graph_archive_references_are_checked(self):
        changed = copy.deepcopy(self.evidence)
        node = next(n for n in changed["normalized_result"]["graph"]["nodes"]
                    if n.get("evidence") and n["evidence"][0].get("artifact_path"))
        node["evidence"][0]["artifact_sha256"] = "0" * 64
        with self.assertRaisesRegex(ValueError, "graph archive digest mismatch"):
            RECOVERY.validate_ib_evidence(changed, self.main_sha, self.archive)

    def test_unknown_ui_graph_archive_with_missing_digest_is_rejected(self):
        changed = copy.deepcopy(self.evidence)
        node = next(n for n in changed["normalized_result"]["graph"]["nodes"]
                    if n.get("evidence") and n["evidence"][0].get("artifact_path"))
        node["evidence"][0]["artifact_path"] = "NotInPackage.nib"
        node["evidence"][0].pop("artifact_sha256", None)
        with self.assertRaisesRegex(ValueError, "graph archive digest mismatch"):
            RECOVERY.validate_ib_evidence(changed, self.main_sha, self.archive)

    def test_cached_otool_is_ignored_and_methods_are_checked_before_export(self):
        with tempfile.TemporaryDirectory(prefix="niuniu-provenance-test-") as temp:
            root = Path(temp)
            analysis = root / "analysis"
            analysis.mkdir()
            # This malicious cache must have no effect: fresh otool is authoritative.
            (analysis / "objc.txt").write_text("Not an otool dump; cached declarations are untrusted.\n")
            methods = json.loads((ARGS.analysis_dir / "methods.json").read_text())
            (analysis / "methods.json").write_text(json.dumps(methods))
            (analysis / "interface-builder-recovery.json").write_text(json.dumps(self.evidence))
            output = root / "valid-output"
            command = [sys.executable, str(Path(__file__).with_name("recover_metadata.py")),
                       str(ARGS.ipa), "--analysis-dir", str(analysis), "--output", str(output)]
            result = subprocess.run(command, capture_output=True, text=True, check=True)
            summary = json.loads(result.stdout)
            self.assertEqual(summary["application_classes"], 139)
            self.assertEqual(summary["runtime_method_records"], 3453)
            data = json.loads((output / "metadata/objc-classes.json").read_text())
            self.assertIn("Fresh otool", data["metadata_binding"])
            cls = next(c for c in data["classes"] if c["name"] == "NNCVersionCheck")
            method = next(m for m in cls["methods"] if m["selector"] == "initWithCoder:")
            self.assertEqual(method["type_encoding"], "@24@0:8@16")
            address = next(a for a, name in methods.items() if name.startswith("NNC"))
            methods[address] = "NNCInvalidCachedClass.fakeMethod"
            (analysis / "methods.json").write_text(json.dumps(methods))
            bad_output = root / "bad-output"
            command[-1] = str(bad_output)
            result = subprocess.run(command, capture_output=True, text=True)
            self.assertNotEqual(result.returncode, 0)
            self.assertIn("differs from the prior source inventory", result.stderr)
            self.assertFalse((bad_output / "metadata/objc-classes.json").exists())
            self.assertFalse(list((bad_output / "interfaces").glob("*.h")))


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("ipa", type=Path)
    parser.add_argument("--analysis-dir", required=True, type=Path)
    ARGS = parser.parse_args()
    unittest.main(argv=[sys.argv[0]])
