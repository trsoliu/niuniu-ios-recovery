// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2ce0
@interface NNCNormalDownloadTask : NNCBaseDownloadTask

// property saveName: T@"NSString",C,N,V_saveName
// property saveDir: T@"NSString",C,N,V_saveDir
// property downloadTask: T@"NSURLSessionDownloadTask",&,N,V_downloadTask
// property lastInvokeTime: Td,N,V_lastInvokeTime
// property lastDownloadSize: Tq,N,V_lastDownloadSize
// property isCancel: TB,N,V_isCancel
// property finalUrl: T@"NSString",C,N,V_finalUrl

// 0x1000359f8; encoding: @32@0:8@16@24
- (id)initWithTaskItem:(id)arg1 headers:(id)arg2;
// 0x100035bc4; encoding: @16@0:8
- (id)getAbsolutePath;
// 0x100035c70; encoding: v16@0:8
- (void)startDownload;
// 0x1000363cc; encoding: v24@0:8@16
- (void)dealProgress:(id)arg1;
// 0x100036600; encoding: v24@0:8@16
- (void)dealCompletion:(id)arg1;
// 0x100036828; encoding: v16@0:8
- (void)pauseDownload;
// 0x100036bac; encoding: @16@0:8
- (id)finalUrl;
// 0x100036bbc; encoding: v24@0:8@16
- (void)setFinalUrl:(id)arg1;
// 0x100036bc8; encoding: @16@0:8
- (id)saveName;
// 0x100036bd8; encoding: v24@0:8@16
- (void)setSaveName:(id)arg1;
// 0x100036be4; encoding: @16@0:8
- (id)saveDir;
// 0x100036bf4; encoding: v24@0:8@16
- (void)setSaveDir:(id)arg1;
// 0x100036c00; encoding: @16@0:8
- (id)downloadTask;
// 0x100036c10; encoding: v24@0:8@16
- (void)setDownloadTask:(id)arg1;
// 0x100036c24; encoding: d16@0:8
- (double)lastInvokeTime;
// 0x100036c34; encoding: v24@0:8d16
- (void)setLastInvokeTime:(double)arg1;
// 0x100036c44; encoding: q16@0:8
- (long long)lastDownloadSize;
// 0x100036c54; encoding: v24@0:8q16
- (void)setLastDownloadSize:(long long)arg1;
// 0x100036c64; encoding: B16@0:8
- (BOOL)isCancel;
// 0x100036c74; encoding: v20@0:8B16
- (void)setIsCancel:(BOOL)arg1;
// 0x100036c84; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
