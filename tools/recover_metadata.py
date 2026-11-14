#!/usr/bin/env python3
"""Recover declarations and packaged resources, never invent source method bodies.

This exporter accepts only the exact user-supplied IPA identified below. Apple
`otool -ov` always reads the main image freshly extracted from that verified IPA.
Optional cached method inventory is a cross-check only. Cached REA Interface
Builder evidence must match the main image and every selected UI archive digest.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import re
import subprocess
import tempfile
import zipfile
from pathlib import Path

SOURCE_IPA_SHA256 = "62c86b2f935b252e611ca176de631ca10e3c727c20cbc8705867a66987b70893"
ROOT = Path(__file__).resolve().parents[1]
SELECTED_EXTRA_CLASSES = frozenset({
    "AppDelegate", "PublicFunction", "DetailHeaderView", "RecommendView",
    "DownloadModel", "FSViewController", "CarouselView", "FSTabBar",
    "VideoItemView", "Notice", "VideoPlayErrorView",
    "BannerItemView", "TableViewPullRefresh", "CommonRequest", "VideoPrepareView",
    "VerifyView", "BaseViewController", "FSTabBarController", "NetURLSchemeHandler",
    "NetWebView", "M3U8", "VideoLoadErrorView", "ColorManager", "InsetLabel",
    "HeaderModel", "BaseNavCV", "VideoDownloadUtils", "Share", "M3U8Seg",
})
SCALARS = {
    "v": "void", "B": "BOOL", "c": "signed char", "C": "unsigned char",
    "s": "short", "S": "unsigned short", "i": "int", "I": "unsigned int",
    "l": "long", "L": "unsigned long", "q": "long long",
    "Q": "unsigned long long", "f": "float", "d": "double",
    "D": "long double", "#": "Class", ":": "SEL", "*": "char *",
}
KNOWN_STRUCTS = {"CGRect", "CGPoint", "CGSize", "_NSRange", "NSRange",
                 "CGAffineTransform", "UIEdgeInsets", "CATransform3D"}


def digest(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def write_json(path: Path, data: object) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(data, ensure_ascii=False, indent=2) + "\n")


def parse_type(text: str, at: int = 0) -> tuple[str | None, int]:
    """Decode enough Objective-C ABI types for declarations, preserving unknowns."""
    while at < len(text) and text[at] in "rnNoORV":
        at += 1
    if at >= len(text):
        raise ValueError("Truncated Objective-C encoding")
    ch = text[at]
    at += 1
    if ch in SCALARS:
        return SCALARS[ch], at
    if ch == "@":
        if at < len(text) and text[at] == "?":
            return "id /* block signature unavailable */", at + 1
        if at < len(text) and text[at] == '"':
            end = text.index('"', at + 1)
            name = text[at + 1:end]
            if name.startswith("<"):
                return "id" + name, end + 1
            return name + " *", end + 1
        return "id", at
    if ch == "^":
        item, end = parse_type(text, at)
        return (item + " *" if item else None), end
    if ch in "{([":
        opening, closing = ch, {"{": "}", "(": ")", "[": "]"}[ch]
        depth = 1
        begin = at
        while at < len(text) and depth:
            if text[at] == opening:
                depth += 1
            elif text[at] == closing:
                depth -= 1
            at += 1
        if depth:
            raise ValueError("Unterminated aggregate encoding")
        raw = text[begin:at - 1]
        name = raw.split("=", 1)[0]
        if ch == "{" and name in KNOWN_STRUCTS:
            return "NSRange" if name == "_NSRange" else name, at
        return None, at
    if ch == "b":
        while at < len(text) and text[at].isdigit():
            at += 1
        return None, at
    return None, at


def type_sequence(encoding: str) -> list[str | None]:
    at = 0
    result = []
    while at < len(encoding):
        while at < len(encoding) and (encoding[at].isdigit() or encoding[at] in "+-"):
            at += 1
        if at < len(encoding):
            item, at = parse_type(encoding, at)
            result.append(item)
    return result


def parse_otool(text: str) -> list[dict]:
    """Use indentation to separate implementations from protocol requirements."""
    records = []
    current = None
    kind = "instance"
    section = ""
    member = None
    active = False
    for line in text.splitlines():
        if line.startswith("Contents of "):
            active = "__objc_classlist)" in line
            if not active:
                current = None
            continue
        if not active:
            continue
        root = re.match(r"^([0-9a-f]{16}) (0x[0-9a-f]+)$", line)
        if root:
            current = {"name": None, "class_address": root[2],
                       "classlist_address": "0x" + root[1], "superclass": None,
                       "superclass_address": None, "methods": [], "properties": [],
                       "ivars": [], "protocols": []}
            records.append(current)
            kind, section, member = "instance", "", None
            continue
        if current is None:
            continue
        if line == "Meta Class":
            kind, section, member = "class", "", None
            continue
        match = re.match(r"^    superclass\s+(0x[0-9a-f]+)(?:\s+_OBJC_(?:META)?CLASS_\$_(.+))?$", line)
        if match and kind == "instance":
            current["superclass_address"], current["superclass"] = match[1], match[2]
        match = re.match(r"^        name\s+0x[0-9a-f]+\s+(.+)$", line)
        if match:
            current["name"] = match[1]
        match = re.match(r"^        (baseMethods|baseProperties|ivars|baseProtocols|weakIvarLayout)\s", line)
        if match:
            section, member = match[1], None
            continue
        if section == "baseMethods":
            match = re.match(r"^            name\s+0x[0-9a-f]+\s+(.+)$", line)
            if match:
                member = {"kind": kind, "selector": match[1]}
                current["methods"].append(member)
            match = re.match(r"^            (types|imp)\s+(0x[0-9a-f]+)(?:\s+(.+))?$", line)
            if match and member is not None:
                if match[1] == "types":
                    member["type_encoding"] = match[3]
                else:
                    member["implementation_address"] = match[2]
        elif section == "baseProperties" and kind == "instance":
            match = re.match(r"^            name\s+0x[0-9a-f]+\s+(.+)$", line)
            if match:
                member = {"name": match[1]}
                current["properties"].append(member)
            match = re.match(r"^            attributes\s+0x[0-9a-f]+\s+(.+)$", line)
            if match and member is not None:
                member["attributes"] = match[1]
        elif section == "ivars" and kind == "instance":
            match = re.match(r"^            offset\s+(0x[0-9a-f]+)\s+(\d+)$", line)
            if match:
                member = {"offset_address": match[1], "offset": int(match[2])}
                current["ivars"].append(member)
            match = re.match(r"^            (name|type)\s+0x[0-9a-f]+\s+(.+)$", line)
            if match and member is not None:
                member["type_encoding" if match[1] == "type" else "name"] = match[2]
            match = re.match(r"^            (alignment|size)\s+(\d+)$", line)
            if match and member is not None:
                member[match[1]] = int(match[2])
        elif section == "baseProtocols" and kind == "instance":
            match = re.match(r"^                name\s+0x[0-9a-f]+\s+(.+)$", line)
            if match and match[1] not in current["protocols"]:
                current["protocols"].append(match[1])
    names = {item["class_address"]: item["name"] for item in records}
    for item in records:
        if item["superclass"] is None:
            item["superclass"] = names.get(item["superclass_address"])
    return [item for item in records if (item["name"] or "").startswith("NNC")
            or item["name"] in SELECTED_EXTRA_CLASSES]


def method_declaration(method: dict) -> str | None:
    selector = method["selector"]
    if not re.fullmatch(r"[A-Za-z_$][A-Za-z0-9_$]*(?::[A-Za-z0-9_$]*)*", selector):
        return None
    types = type_sequence(method["type_encoding"])
    if len(types) < 3 or any(item is None for item in types):
        return None
    args = types[3:]
    if selector.count(":") != len(args):
        return None
    prefix = "+" if method["kind"] == "class" else "-"
    if not args:
        return f"{prefix} ({types[0]}){selector};"
    chunks = selector.split(":")[:-1]
    return f"{prefix} ({types[0]})" + " ".join(
        f"{label}:({arg})arg{idx + 1}" for idx, (label, arg) in enumerate(zip(chunks, args))
    ) + ";"


def header(item: dict) -> tuple[str, int]:
    lines = ["// Recovered from Objective-C runtime metadata; not original source.",
             "// Types preserve ABI encodings. Argument names are generated placeholders.",
             "// Method implementations and source-level typedefs are unavailable here.",
             "#import <UIKit/UIKit.h>", "", f"// class address: {item['class_address']}"]
    parent = item["superclass"]
    if parent is None:
        lines.append("// Superclass could not be resolved; declaration omitted.")
        return "\n".join(lines) + "\n", 0
    protocols = " <" + ", ".join(item["protocols"]) + ">" if item["protocols"] else ""
    lines += [f"@interface {item['name']} : {parent}{protocols}", ""]
    for prop in item["properties"]:
        lines.append(f"// property {prop['name']}: {prop.get('attributes', '<unavailable>')}")
    if item["properties"]:
        lines.append("")
    emitted = 0
    for method in item["methods"]:
        lines.append(f"// {method.get('implementation_address', 'unknown')}; encoding: {method.get('type_encoding', 'unavailable')}")
        decl = method_declaration(method) if method.get("type_encoding") else None
        if decl:
            lines.append(decl)
            emitted += 1
        else:
            lines.append(f"// Unrendered runtime method: {method['kind']} {method['selector']}")
    lines += ["", "@end", ""]
    return "\n".join(lines), emitted


def safe_resource(name: str) -> bool:
    parts = Path(name).parts
    if not parts or name.startswith("/") or ".." in parts:
        return False
    if len(parts) > 1 and not parts[0].endswith(".lproj"):
        return False
    return Path(name).suffix.lower() in {
        ".png", ".jpg", ".jpeg", ".gif", ".webp", ".car", ".nib",
        ".strings", ".ttf", ".otf", ".plist",
    } and name != "Info.plist"


def validate_ib_evidence(evidence: dict, main_sha: str, archive: zipfile.ZipFile) -> dict:
    """Bind a cached UI observation to this image and its actual packaged bytes."""
    data = evidence["normalized_result"]
    identities = [evidence.get("subject", {}).get("digest", {}).get("sha256"),
                  data.get("target_sha256"), data.get("graph", {}).get("target_sha256")]
    if evidence.get("operation") != "decode_interface_builder" or any(
            identity != main_sha for identity in identities):
        raise ValueError("Interface Builder evidence does not match the verified main image")
    expected_ui = {name.removeprefix("Payload/prince.app/")
                   for name in archive.namelist()
                   if name.startswith("Payload/prince.app/") and not name.endswith("/")
                   and safe_resource(name.removeprefix("Payload/prince.app/"))
                   and Path(name).suffix.lower() == ".nib"}
    documents = data["documents"]
    paths = [doc["relative_path"] for doc in documents]
    if len(paths) != len(set(paths)) or set(paths) != expected_ui:
        raise ValueError("Interface Builder evidence does not cover the selected UI archives")
    digests = {}
    for doc in documents:
        name = doc["relative_path"]
        actual = digest(archive.read("Payload/prince.app/" + name))
        if doc.get("archive_sha256") != actual:
            raise ValueError("Interface Builder archive digest mismatch: " + name)
        digests[name] = actual
    for record in data["graph"]["nodes"] + data["graph"]["edges"]:
        for observation in record.get("evidence", []):
            name = observation.get("artifact_path")
            if name is not None and (name not in digests or
                                     observation.get("artifact_sha256") != digests[name]):
                raise ValueError("Interface Builder graph archive digest mismatch")
    return data


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("ipa", type=Path)
    parser.add_argument("--analysis-dir", type=Path)
    parser.add_argument("--output", type=Path, default=ROOT)
    args = parser.parse_args()
    ipa = args.ipa.read_bytes()
    if digest(ipa) != SOURCE_IPA_SHA256:
        raise SystemExit("Input IPA differs from the reviewed source artifact")
    output = args.output.resolve()
    for part in ["metadata", "interfaces", "resources"]:
        (output / part).mkdir(parents=True, exist_ok=True)
    ib_evidence = None
    ib_data = None
    with zipfile.ZipFile(args.ipa) as archive:
        raw = archive.read("Payload/prince.app/prince")
        main_sha = digest(raw)
        if args.analysis_dir:
            ib = args.analysis_dir / "interface-builder-recovery.json"
            if ib.exists():
                ib_evidence = json.loads(ib.read_text())
                ib_data = validate_ib_evidence(ib_evidence, main_sha, archive)
        with tempfile.TemporaryDirectory(prefix="niuniu-metadata-") as temp:
            image = Path(temp) / "prince"
            image.write_bytes(raw)
            dump = subprocess.check_output(["xcrun", "otool", "-ov", str(image)], text=True)
        classes = parse_otool(dump)
        if not classes or len({c["name"] for c in classes}) != len(classes):
            raise ValueError("Class inventory is empty or has duplicate names")
        if not all(re.fullmatch(r"[A-Za-z_$][A-Za-z0-9_$]*", c["name"]) for c in classes):
            raise ValueError("Class inventory includes an invalid Objective-C identifier")
        if args.analysis_dir and (args.analysis_dir / "methods.json").exists():
            known = json.loads((args.analysis_dir / "methods.json").read_text())
            expected = {(address, name) for address, name in known.items()
                        if name.startswith("NNC") or name.split(".", 1)[0] in SELECTED_EXTRA_CLASSES}
            observed = {(method["implementation_address"], cls["name"] + "." + method["selector"])
                        for cls in classes for method in cls["methods"]}
            if observed != expected:
                raise ValueError("Recovered method inventory differs from the prior source inventory")
        all_methods = [method for cls in classes for method in cls["methods"]]
        emitted = 0
        for item in classes:
            content, count = header(item)
            (output / "interfaces" / (item["name"] + ".h")).write_text(content)
            emitted += count
        write_json(output / "metadata" / "objc-classes.json", {
            "source_ipa_sha256": SOURCE_IPA_SHA256, "main_image_sha256": main_sha,
            "source_member": "Payload/prince.app/prince", "class_selection": {
                "prefix": "NNC", "additional_classes": sorted(SELECTED_EXTRA_CLASSES)},
            "provider": "Apple otool -ov", "classes": classes,
            "metadata_binding": "Fresh otool -ov of the verified IPA main image; cached objc.txt is never used",
            "limitations": ["Not original source", "No method bodies in runtime metadata",
                            "ABI types lose source typedefs and parameter names",
                            "Additional classes are app/runtime UI candidates, not proof of original authorship",
                            "Third-party SDK and classes outside the explicit selection are excluded"],
        })
        resource_manifest = []
        for member in sorted(archive.namelist()):
            if not member.startswith("Payload/prince.app/") or member.endswith("/"):
                continue
            name = member.removeprefix("Payload/prince.app/")
            if not safe_resource(name):
                continue
            data = archive.read(member)
            dest = output / "resources" / name
            dest.parent.mkdir(parents=True, exist_ok=True)
            dest.write_bytes(data)
            resource_manifest.append({"path": "resources/" + name, "source_member": member,
                                      "sha256": digest(data), "bytes": len(data)})
    ib_summary = None
    if ib_evidence is not None and ib_data is not None:
        # Export only relative packaged-resource observations, not tool paths or environment.
        write_json(output / "metadata" / "interface-builder.json", {
            "source_ipa_sha256": SOURCE_IPA_SHA256, "main_image_sha256": main_sha,
            "evidence_id": ib_evidence["evidence_id"], "provider": ib_evidence["provider"],
            "documents": ib_data["documents"], "graph": ib_data["graph"],
            "limitations": ib_data["limitations"],
            "evidence_binding": "Subject/normalized/graph image digests and every UI archive digest verified against the IPA",
        })
        ib_summary = {"documents": len(ib_data["documents"]),
                      "nodes": len(ib_data["graph"]["nodes"]),
                      "edges": len(ib_data["graph"]["edges"]),
                      "graph_truncated": ib_data["graph"]["truncated"],
                      "source_digests_verified": True}
    summary = {
        "source_ipa_sha256": SOURCE_IPA_SHA256, "main_image_sha256": main_sha,
        "class_selection": {"prefix": "NNC", "additional_classes": sorted(SELECTED_EXTRA_CLASSES)},
        "application_classes": len(classes), "runtime_method_records": len(all_methods),
        "rendered_method_declarations": emitted,
        "unrendered_runtime_methods": len(all_methods) - emitted,
        "properties": sum(len(c["properties"]) for c in classes),
        "ivars": sum(len(c["ivars"]) for c in classes),
        "packaged_resources": len(resource_manifest),
        "resource_bytes": sum(x["bytes"] for x in resource_manifest),
        "interface_builder": ib_summary,
        "source_project_recovered": False,
        "method_implementations_recovered_by_this_export": False,
        "resource_selection": "Loose main-app resources and localized UI; nested SDK bundles excluded",
    }
    write_json(output / "metadata" / "resource-manifest.json", resource_manifest)
    write_json(output / "metadata" / "recovery-summary.json", summary)
    print(json.dumps(summary, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
