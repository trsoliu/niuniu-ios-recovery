// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c6228
@interface NNCMUUtils : NSObject

// 0x1000df370; encoding: v44@0:8@16@24i32@?36
+ (void)parseRemoteMUInfo:(id)arg1 headers:(id)arg2 retryCount:(int)arg3 result:(id /* block signature unavailable */)arg4;
// 0x1000dfe74; encoding: @24@0:8@16
+ (id)parseLocalMUData:(id)arg1;
// 0x1000e05cc; encoding: @32@0:8@16@24
+ (id)parseStringAttr:(id)arg1 pattern:(id)arg2;
// 0x1000e06d8; encoding: @32@0:8@16@24
+ (id)parseOptionalStringAttr:(id)arg1 pattern:(id)arg2;
// 0x1000e07e4; encoding: @40@0:8@16@24@32
+ (id)newLocalMU:(id)arg1 saveName:(id)arg2 m3u8:(id)arg3;
// 0x1000e0e28; encoding: B48@0:8@16@24@32@40
+ (BOOL)newRemoteMU:(id)arg1 m3u8:(id)arg2 headers:(id)arg3 taskItem:(id)arg4;
// 0x1000e158c; encoding: @32@0:8@16@24
+ (id)getM3U8AbsoluteUrl:(id)arg1 line:(id)arg2;
// 0x1000e17f4; encoding: @24@0:8@16
+ (id)getSchema:(id)arg1;
// 0x1000e1874; encoding: @24@0:8@16
+ (id)getBaseUrl:(id)arg1;
// 0x1000e1900; encoding: @24@0:8@16
+ (id)getHostUrl:(id)arg1;
// 0x1000e1a20; encoding: @24@0:8@16
+ (id)getPathStr:(id)arg1;
// 0x1000e1ac4; encoding: @32@0:8@16@24
+ (id)getLongestCommonPrefixStr:(id)arg1 str2:(id)arg2;

@end
