#!/usr/bin/env node
// Recover pseudocode locally through REA's persistent MCP session.
// Output is analysis text, not original or directly buildable Objective-C.
import { parseArgs } from 'node:util';
import { pathToFileURL } from 'node:url';
import { join, resolve, relative, isAbsolute } from 'node:path';
import { mkdir, readFile, writeFile, appendFile, access, readdir } from 'node:fs/promises';
import { createHash } from 'node:crypto';
const { values } = parseArgs({ options: {
  'rea-root': { type:'string' }, target:{type:'string'}, methods:{type:'string'}, out:{type:'string'},
  'local-log':{type:'string'}, 'snapshot':{type:'string'}, limit:{type:'string'}
}});
for(const k of ['rea-root','target','methods','out','local-log']) if(!values[k]) throw new Error(`Missing --${k}`);
const root=resolve(values['rea-root']), out=resolve(values.out), log=resolve(values['local-log']);
const isInside=(p)=>{const r=relative(out,resolve(p));return r===''||(!r.startsWith('..')&&!isAbsolute(r));};
if(isInside(log)||(values.snapshot&&isInside(values.snapshot)))throw new Error('Local logs and snapshots must be outside --out');
const summary=JSON.parse(await readFile(join(out,'metadata/recovery-summary.json'),'utf8'));
const actualHash=createHash('sha256').update(await readFile(values.target)).digest('hex');
if(actualHash!==summary.main_image_sha256)throw new Error('Target does not match the recorded original main image');
try{if((await readdir(join(out,'pseudocode'))).length)throw new Error('Use an empty pseudocode directory for a fresh run');}catch(e){if(e.code!=='ENOENT')throw e;}
await mkdir(join(out,'pseudocode'),{recursive:true}); await mkdir(join(out,'metadata'),{recursive:true}); await mkdir(log,{recursive:true});
const {Client}=await import(pathToFileURL(join(root,'node_modules/@modelcontextprotocol/client/dist/index.mjs')));
const {StdioClientTransport}=await import(pathToFileURL(join(root,'node_modules/@modelcontextprotocol/client/dist/stdio.mjs')));
const additionalClasses=new Set(['AppDelegate','PublicFunction','DetailHeaderView','RecommendView','DownloadModel','FSViewController','CarouselView','FSTabBar','VideoItemView','Notice','VideoPlayErrorView','BannerItemView','TableViewPullRefresh','CommonRequest','VideoPrepareView','VerifyView','BaseViewController','FSTabBarController','NetURLSchemeHandler','NetWebView','M3U8','VideoLoadErrorView','ColorManager','InsetLabel','HeaderModel','BaseNavCV','VideoDownloadUtils','Share','M3U8Seg']);
const methods=Object.entries(JSON.parse(await readFile(values.methods,'utf8'))).filter(([,n])=>n.startsWith('NNC')||additionalClasses.has(n.split('.')[0])).sort(([a],[b])=>BigInt(a)<BigInt(b)?-1:1);
const selected=values.limit?methods.slice(0,Number(values.limit)):methods;
for(const [a,n]of methods)if(!/^0x[0-9a-f]+$/i.test(a)||!/^[_A-Za-z][_A-Za-z0-9]*$/.test(n.split('.')[0]))throw new Error('Invalid recovered method address or class name');
const meta=JSON.parse(await readFile(join(out,'metadata/objc-classes.json'),'utf8'));
const expected=new Set(meta.classes.flatMap(c=>c.methods.map(m=>`${m.implementation_address.toLowerCase()}:${c.name}.${m.selector}`)));
for(const [a,n]of methods){const canonicalName=n.replace('..cxx_destruct','..cxx_destruct');if(!expected.has(`${a.toLowerCase()}:${canonicalName}`))throw new Error(`Method is absent from authenticated runtime inventory: ${a}`);}
if(methods.length!==summary.runtime_method_records)throw new Error('Selected method count differs from authenticated metadata');
const localRedactions={paths:0,userinfo:0,credentialStrings:0};
function scrub(s){
 return s.replace(/\/(?:Users|home)\/[^\s"'<>;,)]+/g,()=>{localRedactions.paths++;return '[REDACTED_BUILD_PATH]';})
 .replace(/(https?:\/\/)[^\s"'<>/@]+@/gi,(_m,p)=>{localRedactions.userinfo++;return p+'[REDACTED_USERINFO]@';})
 .replace(/\b(?:gh[pousr]_[A-Za-z0-9]{25,}|github_pat_[A-Za-z0-9_]{30,}|AKIA[0-9A-Z]{16}|sk-(?:proj-)?[A-Za-z0-9_-]{24,})\b/g,()=>{localRedactions.credentialStrings++;return '[REDACTED_CREDENTIAL]';});
}
function unwrap(r){
 if(r.isError)throw new Error(JSON.stringify(r.content));
 let v=r.structuredContent;
 if(!v){const t=r.content?.find(x=>x.type==='text');if(!t)throw new Error('No structured result');v=JSON.parse(t.text);}
 if(v.evidence_id || v.normalized_result!==undefined)return v;
 if(v.result)return v.result;
 return v;
}
const client=new Client({name:'personal-ipa-recovery',version:'1.0.0'});
const transport=new StdioClientTransport({command:process.execPath,args:[join(root,'node_modules/rea-agents/scripts/rea.mjs'),'--mcp'],env:{...process.env},stderr:'pipe',maxBufferSize:100*1024*1024});
transport.stderr?.on('data',d=>appendFile(join(log,'rea-server.log'),d));
const results=[]; let success=0;
try{
 await client.connect(transport);
 await writeFile(join(log,'progress.json'),JSON.stringify({phase:'analyzing',total:selected.length,completed:0}));
 let existingSnapshot=false;
 if(values.snapshot)try{await access(resolve(values.snapshot));existingSnapshot=true;}catch{}
 const opened=await client.callTool({name:'open_binary',arguments:{path:resolve(values.target),provider_id:'ghidra',...(existingSnapshot?{snapshot_path:resolve(values.snapshot)}:{})}},{timeout:1200000});
 await writeFile(join(log,'open-result.json'),JSON.stringify(opened,null,2));
 if(opened.isError)throw new Error('REA could not open target; see local open-result.json');
 console.log('REA Ghidra target analysis ready.');
 const outputs=new Map(), initialized=new Set();
 for(const [address,name] of selected){
  const c=name.split('.')[0], file=join(out,'pseudocode',c+'.c.txt');
  let result;
  try{
   const raw=await client.callTool({name:'procedure_pseudo_code',arguments:{procedure:address}},{timeout:1200000});
   const e=unwrap(raw); const code=typeof e.normalized_result==='string'?e.normalized_result:null;
   result={address,name,status:code?'recovered':'unavailable',evidence_id:e.evidence_id??null,limitations:(e.limitations??[]).map(x=>scrub(String(x)))};
   if(code){
    const text=`\n/* ${name} | ${address} | ${e.evidence_id??'no evidence id'} */\n${scrub(code)}\n`;
    if(!initialized.has(file)){
     await writeFile(file,'/* REA/Ghidra recovered pseudocode. Not original source; not a build target. */\n');
     initialized.add(file);
    }
    outputs.set(file,(outputs.get(file)??'')+text); success++;
   } else result.reason='Provider returned no pseudocode.';
  }catch(e){result={address,name,status:'failed',reason:scrub(String(e.message)).slice(0,1200)};}
  results.push(result);
  if(results.length%25===0||results.length===selected.length){
   for(const [f,s]of outputs)await appendFile(f,s);outputs.clear();
   await writeFile(join(log,'progress.json'),JSON.stringify({phase:'decompiling',total:selected.length,completed:results.length,recovered:success}));
   console.log(`${results.length}/${selected.length}, ${success} recovered`);
  }
 }
 await writeFile(join(out,'metadata','decompilation-coverage.json'),JSON.stringify({provider:'REA 6.5.0 / Ghidra 12.1.4',disabled_analyzers:process.env.REA_GHIDRA_DISABLED_ANALYZERS??'',limitations:['Global automatic switch analysis may be disabled; this can limit discovery of unselected callback functions. Individual selected-method decompilation is still requested.'],source_ipa_sha256:summary.source_ipa_sha256,main_image_sha256:actualHash,scope:'NNC-prefixed methods and explicitly selected app/UI candidate classes; see tool source',total_known_app_methods:methods.length,attempted:selected.length,recovered:success,redactions:localRedactions,buildable:false,methods:results},null,2)+'\n');
 if(values.snapshot){const close=await client.callTool({name:'close_binary',arguments:{snapshot_path:resolve(values.snapshot),overwrite:true}},{timeout:120000});await writeFile(join(log,'close-result.json'),JSON.stringify(close,null,2));}
 await writeFile(join(log,'progress.json'),JSON.stringify({phase:'complete',total:selected.length,completed:results.length,recovered:success}));
}finally{await client.close();}
