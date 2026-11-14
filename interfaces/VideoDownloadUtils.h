// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c62a0
@interface VideoDownloadUtils : NSObject

// property afDownloadManager: T@"AFURLSessionManager",&,N,V_afDownloadManager

// 0x1000e2268; encoding: @16@0:8
- (id)init;
// 0x1000e2590; encoding: @16@0:8
- (id)afDownloadManager;
// 0x1000e2598; encoding: v24@0:8@16
- (void)setAfDownloadManager:(id)arg1;
// 0x1000e25a4; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000e21c8; encoding: @16@0:8
+ (id)sharedInstance;
// 0x1000e2314; encoding: @24@0:8@16
+ (id)getSuffixName:(id)arg1;
// 0x1000e2390; encoding: @16@0:8
+ (id)getDownloadRootDir;
// 0x1000e2428; encoding: @24@0:8@16
+ (id)getItemDirName:(id)arg1;
// 0x1000e2474; encoding: @24@0:8@16
+ (id)getAbsoulteDir:(id)arg1;
// 0x1000e2524; encoding: @24@0:8@16
+ (id)getAbsoulteDirNotCreate:(id)arg1;

@end
