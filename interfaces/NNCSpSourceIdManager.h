// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c49c8
@interface NNCSpSourceIdManager : NSObject

// property xcMap: T@"NSMutableDictionary",&,N,V_xcMap
// property hmMap: T@"NSMutableDictionary",&,N,V_hmMap

// 0x1000a5ce8; encoding: v16@0:8
- (void)removeCache;
// 0x1000a5d3c; encoding: v56@0:8@16@24@?32@?40@?48
- (void)nncgetXcRealUrlWithPlayerId:(id)arg1 originUrl:(id)arg2 success:(id /* block signature unavailable */)arg3 needVerify:(id /* block signature unavailable */)arg4 failure:(id /* block signature unavailable */)arg5;
// 0x1000a62f4; encoding: v48@0:8@16@24@?32@?40
- (void)dealXcSourceData:(id)arg1 oriDataString:(id)arg2 success:(id /* block signature unavailable */)arg3 failure:(id /* block signature unavailable */)arg4;
// 0x1000a64cc; encoding: v48@0:8@16@24@?32@?40
- (void)nncgetHmRealUrlWithPlayerId:(id)arg1 originUrl:(id)arg2 success:(id /* block signature unavailable */)arg3 failure:(id /* block signature unavailable */)arg4;
// 0x1000a69e8; encoding: v56@0:8@16@24@32@?40@?48
- (void)dealHmSourceData:(id)arg1 oriDataString:(id)arg2 vodId:(id)arg3 success:(id /* block signature unavailable */)arg4 failure:(id /* block signature unavailable */)arg5;
// 0x1000a6bec; encoding: @16@0:8
- (id)xcMap;
// 0x1000a6bf4; encoding: v24@0:8@16
- (void)setXcMap:(id)arg1;
// 0x1000a6c00; encoding: @16@0:8
- (id)hmMap;
// 0x1000a6c08; encoding: v24@0:8@16
- (void)setHmMap:(id)arg1;
// 0x1000a6c14; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000a5bec; encoding: @16@0:8
+ (id)sharedInstance;

@end
