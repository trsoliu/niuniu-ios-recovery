// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c3370
@interface NNCBaseDownloadTask : NSObject

// property listener: T@"<IDownloadTaskListener>",W,N,V_listener
// property headers: T@"NSDictionary",&,N,V_headers
// property mBackgroundTask: TQ,N,V_mBackgroundTask
// property item: T@"NNCFileTaskItem",&,N,V_item

// 0x1000517dc; encoding: @16@0:8
- (id)init;
// 0x10005190c; encoding: v16@0:8
- (void)dealloc;
// 0x100051974; encoding: v24@0:8@16
- (void)applicationDidEnterBackground:(id)arg1;
// 0x100051978; encoding: v24@0:8@16
- (void)applicationWillEnterForeground:(id)arg1;
// 0x10005197c; encoding: v16@0:8
- (void)_nncBeginBackgroundTaskIfNeeded;
// 0x1000519d4; encoding: v16@0:8
- (void)_beginBackgroundTaskInner;
// 0x100051c10; encoding: v16@0:8
- (void)_nncEndBackgroundTaskIfNeeded;
// 0x100051cec; encoding: v16@0:8
- (void)startDownload;
// 0x100051cf0; encoding: v16@0:8
- (void)pauseDownload;
// 0x100051cf4; encoding: @16@0:8
- (id)listener;
// 0x100051d0c; encoding: v24@0:8@16
- (void)setListener:(id)arg1;
// 0x100051d18; encoding: @16@0:8
- (id)headers;
// 0x100051d20; encoding: v24@0:8@16
- (void)setHeaders:(id)arg1;
// 0x100051d2c; encoding: Q16@0:8
- (unsigned long long)mBackgroundTask;
// 0x100051d34; encoding: v24@0:8Q16
- (void)setMBackgroundTask:(unsigned long long)arg1;
// 0x100051d3c; encoding: @16@0:8
- (id)item;
// 0x100051d44; encoding: v24@0:8@16
- (void)setItem:(id)arg1;
// 0x100051d50; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
