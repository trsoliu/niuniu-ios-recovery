// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2bf0
@interface CommonRequest : NSObject

// property LAST_REFRESH_TOKEN_STAMP: Td,N,V_LAST_REFRESH_TOKEN_STAMP
// property appStartTs: Tq,N,V_appStartTs
// property jsonResponseManager: T@"AFHTTPSessionManager",&,N,V_jsonResponseManager
// property dataResponseManager: T@"AFHTTPSessionManager",&,N,V_dataResponseManager
// property allJsonManager: T@"AFHTTPSessionManager",&,N,V_allJsonManager

// 0x100034348; encoding: @24@0:8d16
- (id)initWithTimeout:(double)arg1;
// 0x1000349c0; encoding: @52@0:8@16@24B32@?36@?44
- (id)requestWithGET:(id)arg1 headers:(id)arg2 isRespJson:(BOOL)arg3 success:(id /* block signature unavailable */)arg4 failure:(id /* block signature unavailable */)arg5;
// 0x100034b54; encoding: @60@0:8@16@24@32B40@?44@?52
- (id)requestWithPOST:(id)arg1 headers:(id)arg2 parameters:(id)arg3 isRespJson:(BOOL)arg4 success:(id /* block signature unavailable */)arg5 failure:(id /* block signature unavailable */)arg6;
// 0x100034cf4; encoding: @16@0:8
- (id)allJsonManager;
// 0x100034cfc; encoding: v24@0:8@16
- (void)setAllJsonManager:(id)arg1;
// 0x100034d08; encoding: d16@0:8
- (double)LAST_REFRESH_TOKEN_STAMP;
// 0x100034d10; encoding: v24@0:8d16
- (void)setLAST_REFRESH_TOKEN_STAMP:(double)arg1;
// 0x100034d18; encoding: q16@0:8
- (long long)appStartTs;
// 0x100034d20; encoding: v24@0:8q16
- (void)setAppStartTs:(long long)arg1;
// 0x100034d28; encoding: @16@0:8
- (id)jsonResponseManager;
// 0x100034d30; encoding: v24@0:8@16
- (void)setJsonResponseManager:(id)arg1;
// 0x100034d3c; encoding: @16@0:8
- (id)dataResponseManager;
// 0x100034d44; encoding: v24@0:8@16
- (void)setDataResponseManager:(id)arg1;
// 0x100034d50; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000342b4; encoding: @16@0:8
+ (id)request;

@end
