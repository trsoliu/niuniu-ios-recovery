#!/usr/bin/env node
// Offline regressions for the actual recovery CLI. Fixtures contain no app data.
// The synthetic MCP client cannot start a child process or make network calls.
import test from 'node:test';
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { spawnSync } from 'node:child_process';
import { mkdtemp, mkdir, writeFile, readFile, readdir, rm, access } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { dirname, join, relative, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const SCRIPT = join(dirname(fileURLToPath(import.meta.url)), 'decompile_rea.mjs');
const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');
const USERNAME_URL = 'https://' + 'fixture-user' + '@example.invalid/resource';
const PASSWORD_URL = 'https://' + 'fixture-user:fixture-password' + '@example.invalid/resource';
const PLAIN_URL = 'https://example.invalid/public-resource';
const BUILD_PATH = ['', 'Users', 'fixture', 'build', 'source.m'].join('/');

async function exists(path) {
  try { await access(path); return true; } catch { return false; }
}

async function fileHashes(root, path = root) {
  const result = new Map();
  for (const entry of await readdir(path, { withFileTypes: true })) {
    const child = join(path, entry.name);
    assert(!entry.isSymbolicLink(), 'Synthetic fixture unexpectedly contains a symlink');
    if (entry.isDirectory()) {
      for (const [name, hash] of await fileHashes(root, child)) result.set(name, hash);
    } else result.set(relative(root, child), sha256(await readFile(child)));
  }
  return result;
}

async function fixture(t) {
  const root = await mkdtemp(join(tmpdir(), 'niuniu-decompile-guards-'));
  t.after(() => rm(root, { recursive: true, force: true }));
  const f = {
    root, out: join(root, 'export'), log: join(root, 'local-logs'),
    rea: join(root, 'rea'), target: join(root, 'target.bin'),
    methods: join(root, 'methods.json'), marker: join(root, 'mcp-started.marker'),
  };
  const bytes = Buffer.from('synthetic non-executable recovery target\n');
  f.summary = {
    source_ipa_sha256: sha256('synthetic IPA fixture'),
    main_image_sha256: sha256(bytes), runtime_method_records: 1,
  };
  await mkdir(join(f.out, 'metadata'), { recursive: true });
  await writeFile(f.target, bytes);
  await writeFile(f.methods, JSON.stringify({ '0x1000': 'NNCFixture.example' }));
  await writeFile(join(f.out, 'metadata/recovery-summary.json'), JSON.stringify(f.summary));
  await writeFile(join(f.out, 'metadata/objc-classes.json'), JSON.stringify({
    classes: [{ name: 'NNCFixture', methods: [{
      implementation_address: '0x1000', selector: 'example',
    }] }],
  }));
  await writeFile(join(root, 'unrelated-sentinel.txt'), 'must remain unchanged\n');
  const sdk = join(f.rea, 'node_modules/@modelcontextprotocol/client/dist');
  await mkdir(sdk, { recursive: true });
  // Import-compatible stand-ins, not a server: connect only writes a local marker.
  await writeFile(join(sdk, 'stdio.mjs'), `
    export class StdioClientTransport {
      constructor() { this.stderr = null; }
    }
  `);
  await writeFile(join(sdk, 'index.mjs'), `
    import { writeFile } from 'node:fs/promises';
    export class Client {
      async connect() {
        await writeFile(process.env.RECOVERY_TEST_MARKER, 'synthetic connect only');
      }
      async callTool(request) {
        if (request.name === 'open_binary') return { structuredContent: { fixture: true } };
        if (request.name !== 'procedure_pseudo_code') throw new Error('Unexpected tool');
        return { structuredContent: {
          evidence_id: 'synthetic-evidence',
          normalized_result: process.env.RECOVERY_TEST_CODE,
          limitations: [process.env.RECOVERY_TEST_LIMITATION],
        } };
      }
      async close() {}
    }
  `);
  return f;
}

async function invoke(f, overrides = {}) {
  const options = {
    'rea-root': f.rea, target: f.target, methods: f.methods,
    out: f.out, 'local-log': f.log, ...overrides,
  };
  const args = [SCRIPT];
  for (const [key, value] of Object.entries(options)) {
    if (value !== undefined) args.push(`--${key}`, value);
  }
  const before = await fileHashes(f.root);
  const result = spawnSync(process.execPath, args, {
    encoding: 'utf8', timeout: 10_000, maxBuffer: 1024 * 1024,
    env: {
      ...process.env, RECOVERY_TEST_MARKER: f.marker,
      RECOVERY_TEST_CODE: `void recovered(void) { /* ${USERNAME_URL} ${PASSWORD_URL} ${PLAIN_URL} ${BUILD_PATH} */ }`,
      RECOVERY_TEST_LIMITATION: `Synthetic limitation ${USERNAME_URL} ${PASSWORD_URL} ${BUILD_PATH}`,
    },
  });
  assert.ifError(result.error);
  assert.equal(result.signal, null, 'CLI must finish without timeout or signal');
  const after = await fileHashes(f.root);
  for (const [name, hash] of before) {
    assert.equal(after.get(name), hash, `Existing fixture file changed: ${name}`);
  }
  for (const name of after.keys()) {
    if (before.has(name)) continue;
    assert(
      name.startsWith('export/pseudocode/') ||
      name === 'export/metadata/decompilation-coverage.json' ||
      name.startsWith('local-logs/') || name === 'mcp-started.marker',
      `Unexpected filesystem write: ${name}`,
    );
  }
  return result;
}

async function rejectsBeforeMcp(f, message, overrides = {}) {
  const result = await invoke(f, overrides);
  assert.notEqual(result.status, 0, 'Invalid input must fail');
  assert.match(result.stderr, message);
  assert.equal(await exists(f.marker), false, 'Invalid input reached MCP connect');
  assert.equal(await exists(join(f.out, 'metadata/decompilation-coverage.json')), false);
  if (await exists(join(f.out, 'pseudocode'))) {
    assert.equal((await readdir(join(f.out, 'pseudocode'))).length, 0);
  }
}

test('required arguments fail before metadata or MCP processing', async t => {
  const f = await fixture(t);
  await rejectsBeforeMcp(f, /Missing --target/, { target: undefined });
});

test('mismatched target bytes are rejected before MCP launch', async t => {
  const f = await fixture(t);
  await writeFile(f.target, 'different synthetic bytes');
  await rejectsBeforeMcp(f, /Target does not match the recorded original main image/);
});

test('log root equal to output is rejected without writing diagnostics', async t => {
  const f = await fixture(t);
  await rejectsBeforeMcp(f, /Local logs and snapshots must be outside --out/, { 'local-log': f.out });
});

test('nested log directory in output is rejected before it is created', async t => {
  const f = await fixture(t), log = join(f.out, 'nested/raw-logs');
  await rejectsBeforeMcp(f, /Local logs and snapshots must be outside --out/, { 'local-log': log });
  assert.equal(await exists(log), false);
});

test('snapshot inside output is rejected without creating a snapshot', async t => {
  const f = await fixture(t), snapshot = join(f.out, 'session.snapshot');
  await rejectsBeforeMcp(f, /Local logs and snapshots must be outside --out/, { snapshot });
  assert.equal(await exists(snapshot), false);
});

test('nonempty pseudocode output is preserved and rejected for a fresh run', async t => {
  const f = await fixture(t), pseudocode = join(f.out, 'pseudocode');
  await mkdir(pseudocode);
  await writeFile(join(pseudocode, 'previous.c.txt'), 'previous recovery is preserved\n');
  const result = await invoke(f);
  assert.notEqual(result.status, 0);
  assert.match(result.stderr, /Use an empty pseudocode directory for a fresh run/);
  assert.equal(await exists(f.marker), false);
  assert.equal(await exists(join(f.out, 'metadata/decompilation-coverage.json')), false);
});

test('invalid class-derived file names are rejected before MCP launch', async t => {
  const f = await fixture(t);
  await writeFile(f.methods, JSON.stringify({ '0x1000': 'NNCInvalid/nested.example' }));
  await rejectsBeforeMcp(f, /Invalid recovered method address or class name/);
});

test('noncanonical address syntax is rejected before MCP launch', async t => {
  const f = await fixture(t);
  await writeFile(f.methods, JSON.stringify({ '4096': 'NNCFixture.example' }));
  await rejectsBeforeMcp(f, /Invalid recovered method address or class name/);
});

test('method names absent from authenticated metadata are rejected', async t => {
  const f = await fixture(t);
  await writeFile(f.methods, JSON.stringify({ '0x1000': 'NNCFixture.unrecorded' }));
  await rejectsBeforeMcp(f, /Method is absent from authenticated runtime inventory/);
});

test('incomplete method inventory is rejected before MCP launch', async t => {
  const f = await fixture(t);
  f.summary.runtime_method_records = 2;
  await writeFile(join(f.out, 'metadata/recovery-summary.json'), JSON.stringify(f.summary));
  await rejectsBeforeMcp(f, /Selected method count differs from authenticated metadata/);
});

test('real CLI scrubs username and password URLs in code and limitations', async t => {
  const f = await fixture(t);
  const result = await invoke(f);
  assert.equal(result.status, 0, result.stderr);
  assert.equal(await exists(f.marker), true, 'Synthetic client should be used for the valid case');
  const code = await readFile(join(f.out, 'pseudocode/NNCFixture.c.txt'), 'utf8');
  const coverage = JSON.parse(await readFile(join(f.out, 'metadata/decompilation-coverage.json'), 'utf8'));
  const limitation = coverage.methods[0].limitations[0];
  for (const text of [code, limitation]) {
    assert(!text.includes(USERNAME_URL), 'Username-only URL was not redacted');
    assert(!text.includes(PASSWORD_URL), 'Password URL was not redacted');
    assert(!text.includes(BUILD_PATH), 'Developer path was not redacted');
    assert(text.includes('[REDACTED_USERINFO]'));
    assert(text.includes('[REDACTED_BUILD_PATH]'));
  }
  assert(code.includes(PLAIN_URL), 'Ordinary public URL must remain intact');
  assert.equal(coverage.main_image_sha256, f.summary.main_image_sha256);
  assert.equal(coverage.source_ipa_sha256, f.summary.source_ipa_sha256);
  assert.equal(coverage.attempted, 1);
  assert.equal(coverage.recovered, 1);
  assert.equal(coverage.buildable, false);
  assert.equal(coverage.redactions.userinfo, 4);
  assert.equal(coverage.redactions.paths, 2);
});
