// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c5080
@interface NNCM3U8DownloadTask : NNCBaseDownloadTask

// property m3u8: T@"M3U8",&,N,V_m3u8
// property saveName: T@"NSString",C,N,V_saveName
// property saveDir: T@"NSString",C,N,V_saveDir
// property tsList: T@"NSArray",&,N,V_tsList
// property curTs: Ti,N,V_curTs
// property currentCachedSize: Tq,N,V_currentCachedSize
// property downloadTask: T@"NSURLSessionDownloadTask",&,N,V_downloadTask
// property lastInvokeTime: Td,N,V_lastInvokeTime
// property isCancel: TB,N,V_isCancel

// 0x1000b72a0; encoding: @40@0:8@16@24@32
- (id)initWithTaskItem:(id)arg1 m3u8:(id)arg2 headers:(id)arg3;
// 0x1000b74f4; encoding: B16@0:8
- (BOOL)initM3U8Ts;
// 0x1000b76ec; encoding: v16@0:8
- (void)startDownload;
// 0x1000b7984; encoding: v16@0:8
- (void)downloadTsAtCurrentIndex;
// 0x1000b8268; encoding: @16@0:8
- (id)getTsRealUrl;
// 0x1000b83c8; encoding: v28@0:8i16@20
- (void)dealProgressAndResultWithIndex:(int)arg1 error:(id)arg2;
// 0x1000b882c; encoding: v16@0:8
- (void)pauseDownload;
// 0x1000b8a18; encoding: @16@0:8
- (id)m3u8;
// 0x1000b8a28; encoding: v24@0:8@16
- (void)setM3u8:(id)arg1;
// 0x1000b8a3c; encoding: @16@0:8
- (id)saveName;
// 0x1000b8a4c; encoding: v24@0:8@16
- (void)setSaveName:(id)arg1;
// 0x1000b8a58; encoding: @16@0:8
- (id)saveDir;
// 0x1000b8a68; encoding: v24@0:8@16
- (void)setSaveDir:(id)arg1;
// 0x1000b8a74; encoding: @16@0:8
- (id)tsList;
// 0x1000b8a84; encoding: v24@0:8@16
- (void)setTsList:(id)arg1;
// 0x1000b8a98; encoding: i16@0:8
- (int)curTs;
// 0x1000b8aa8; encoding: v20@0:8i16
- (void)setCurTs:(int)arg1;
// 0x1000b8ab8; encoding: q16@0:8
- (long long)currentCachedSize;
// 0x1000b8ac8; encoding: v24@0:8q16
- (void)setCurrentCachedSize:(long long)arg1;
// 0x1000b8ad8; encoding: @16@0:8
- (id)downloadTask;
// 0x1000b8ae8; encoding: v24@0:8@16
- (void)setDownloadTask:(id)arg1;
// 0x1000b8afc; encoding: d16@0:8
- (double)lastInvokeTime;
// 0x1000b8b0c; encoding: v24@0:8d16
- (void)setLastInvokeTime:(double)arg1;
// 0x1000b8b1c; encoding: B16@0:8
- (BOOL)isCancel;
// 0x1000b8b2c; encoding: v20@0:8B16
- (void)setIsCancel:(BOOL)arg1;
// 0x1000b8b3c; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
