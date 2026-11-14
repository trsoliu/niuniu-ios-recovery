// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c3000
@interface NNCENRequest : NSObject

// property jsonResponseManager: T@"AFHTTPSessionManager",&,N,V_jsonResponseManager
// property firstJsonResponseManager: T@"AFHTTPSessionManager",&,N,V_firstJsonResponseManager

// 0x10003debc; encoding: @24@0:8d16
- (id)initWithTimeout:(double)arg1;
// 0x10003e114; encoding: @48@0:8@16@24@?32@?40
- (id)requestWithGET:(id)arg1 parameters:(id)arg2 success:(id /* block signature unavailable */)arg3 failure:(id /* block signature unavailable */)arg4;
// 0x10003e478; encoding: @16@0:8
- (id)jsonResponseManager;
// 0x10003e480; encoding: v24@0:8@16
- (void)setJsonResponseManager:(id)arg1;
// 0x10003e48c; encoding: @16@0:8
- (id)firstJsonResponseManager;
// 0x10003e494; encoding: v24@0:8@16
- (void)setFirstJsonResponseManager:(id)arg1;
// 0x10003e4a0; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x10003de70; encoding: @16@0:8
+ (id)request;

@end
