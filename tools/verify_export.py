#!/usr/bin/env python3
"""Verify scoped recovery artifacts before publication; does not run the app."""
import hashlib
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
summary = json.loads((ROOT / 'metadata/recovery-summary.json').read_text())
classes = json.loads((ROOT / 'metadata/objc-classes.json').read_text())
resources = json.loads((ROOT / 'metadata/resource-manifest.json').read_text())
coverage = json.loads((ROOT / 'metadata/decompilation-coverage.json').read_text())
assembly = json.loads((ROOT / 'metadata/assembly-coverage.json').read_text())
selectors = json.loads((ROOT / 'metadata/objc-selector-stubs.json').read_text())
assert classes['main_image_sha256'] == coverage['main_image_sha256'] == summary['main_image_sha256']
assert classes['source_ipa_sha256'] == coverage['source_ipa_sha256'] == summary['source_ipa_sha256']
assert selectors['main_image_sha256'] == summary['main_image_sha256']
assert selectors['source_ipa_sha256'] == summary['source_ipa_sha256']
assert selectors['resolved_stub_addresses'] == len(selectors['stubs']) == selectors['referenced_stub_addresses']
assert selectors['unresolved_stub_addresses'] == 0
assert len({s['stub_address'] for s in selectors['stubs']}) == len(selectors['stubs'])
assert all(s['status'] == 'resolved' for s in selectors['stubs'])
assert {f['path'] for f in selectors['pseudocode_inputs']} == {str(p.relative_to(ROOT)) for p in (ROOT / 'pseudocode').glob('*.c.txt')}
for record in selectors['pseudocode_inputs']:
    path = (ROOT / record['path']).resolve()
    assert path.is_relative_to((ROOT / 'pseudocode').resolve())
    assert path.stat().st_size == record['bytes']
    assert hashlib.sha256(path.read_bytes()).hexdigest() == record['sha256'], record['path']
assert len(classes['classes']) == summary['application_classes']
assert len(list((ROOT / 'interfaces').glob('*.h'))) == summary['application_classes']
assert len(resources) == summary['packaged_resources']
assert assembly['main_image_sha256'] == summary['main_image_sha256']
assert assembly['source_ipa_sha256'] == summary['source_ipa_sha256']
assert assembly['selected_classes'] == summary['application_classes']
assert assembly['selected_method_records'] == assembly['covered_method_records'] == summary['runtime_method_records']
assert assembly['missing_method_records'] == 0
assert len(assembly['methods']) == summary['runtime_method_records']
expected_methods = {(c['name'], m['selector'], m['implementation_address'])
                    for c in classes['classes'] for m in c['methods']}
assert {(m['class'], m['selector'], m['implementation_address']) for m in assembly['methods']} == expected_methods
assert len({m['implementation_address'] for m in assembly['methods']}) == assembly['unique_method_entry_slices']
assert sum(m['instruction_count'] for m in assembly['methods']) == assembly['unique_instruction_count']
assert len(assembly['files']) == summary['application_classes']
assert sum(f['methods'] for f in assembly['files']) == summary['runtime_method_records']
assert sum(f['bytes'] for f in assembly['files']) == assembly['exported_file_bytes']
assert {f['path'] for f in assembly['files']} == {str(p.relative_to(ROOT)) for p in (ROOT / 'assembly').glob('*.arm64.asm')}
for record in assembly['files']:
    path = (ROOT / record['path']).resolve()
    assert path.is_relative_to((ROOT / 'assembly').resolve())
    assert path.stat().st_size == record['bytes']
    assert hashlib.sha256(path.read_bytes()).hexdigest() == record['sha256'], record['path']
for record in resources:
    path = (ROOT / record['path']).resolve()
    assert path.is_relative_to(ROOT.resolve())
    assert path.is_file() and not path.is_symlink()
    assert hashlib.sha256(path.read_bytes()).hexdigest() == record['sha256'], record['path']
    assert path.stat().st_size == record['bytes'], record['path']
methods = coverage['methods']
assert len(methods) == coverage['attempted'] == coverage['total_known_app_methods'] == summary['runtime_method_records']
assert len({m['address'] for m in methods}) == len(methods)
recovered = {m['address']: m for m in methods if m['status'] == 'recovered'}
assert len(recovered) == coverage['recovered'] and recovered
written = {}
for path in (ROOT / 'pseudocode').glob('*.c.txt'):
    text = path.read_text()
    for name, address, evidence_id in re.findall(r'/\* (.*?) \| (0x[0-9a-fA-F]+) \| (ev_[0-9a-f]+) \*/', text):
        assert address not in written, address
        assert address in recovered and recovered[address]['name'] == name, address
        assert recovered[address]['evidence_id'] == evidence_id, address
        written[address] = name
assert set(written) == set(recovered)
for path in ROOT.rglob('*'):
    if '.git' in path.parts or '__pycache__' in path.parts:
        continue
    assert not path.is_symlink(), str(path)
    if path.is_file():
        assert path.suffix not in {'.ipa', '.dylib', '.mobileprovision', '.p12', '.pfx', '.pem', '.key', '.cer', '.snapshot'}
        if path.suffix in {'.json', '.txt', '.h', '.md'}:
            text = path.read_text()
            assert not re.search(r'/(?:Users|home)/[A-Za-z0-9_.-]+/', text), str(path)
            userinfo = re.findall(r'https?://([^\s"\'<>/@]+)@', text)
            assert all(value == '[REDACTED_USERINFO]' for value in userinfo), str(path)
print(json.dumps({'verified': True, 'classes': summary['application_classes'], 'methods_attempted': len(methods), 'methods_recovered': len(recovered), 'resources': len(resources), 'buildable': coverage['buildable']}, indent=2))
