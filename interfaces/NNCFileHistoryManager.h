// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c4e00
@interface NNCFileHistoryManager : NSObject

// property historyArrayList: T@"NSMutableArray",&,N,V_historyArrayList
// property callbackArrayList: T@"NSMutableArray",&,N,V_callbackArrayList

// 0x1000b0214; encoding: @16@0:8
- (id)init;
// 0x1000b02b0; encoding: v24@0:8@16
- (void)addListener:(id)arg1;
// 0x1000b032c; encoding: @16@0:8
- (id)getHistoryArrayList;
// 0x1000b0330; encoding: v16@0:8
- (void)notifyUpdate;
// 0x1000b0460; encoding: v24@0:8@16
- (void)updateHistory:(id)arg1;
// 0x1000b04cc; encoding: @20@0:8i16
- (id)getSingleHistory:(int)arg1;
// 0x1000b05ec; encoding: v24@0:8@16
- (void)deleteHistory:(id)arg1;
// 0x1000b0718; encoding: v16@0:8
- (void)getNewestHistoryList;
// 0x1000b07c0; encoding: @16@0:8
- (id)historyArrayList;
// 0x1000b07c8; encoding: v24@0:8@16
- (void)setHistoryArrayList:(id)arg1;
// 0x1000b07d4; encoding: @16@0:8
- (id)callbackArrayList;
// 0x1000b07dc; encoding: v24@0:8@16
- (void)setCallbackArrayList:(id)arg1;
// 0x1000b07e8; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000b0164; encoding: @16@0:8
+ (id)sharedInstance;

@end
