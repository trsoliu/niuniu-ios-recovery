// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c55a8
@interface NNCNorRequest : NSObject

// property manager: T@"AFHTTPSessionManager",&,N,V_manager

// 0x1000c3cf8; encoding: @16@0:8
- (id)manager;
// 0x1000c3f50; encoding: @48@0:8@16@24@?32@?40
- (id)requestWithGET:(id)arg1 headers:(id)arg2 success:(id /* block signature unavailable */)arg3 failure:(id /* block signature unavailable */)arg4;
// 0x1000c40c4; encoding: @32@0:8@16@24
- (id)syncRequestWithGET:(id)arg1 headers:(id)arg2;
// 0x1000c42ac; encoding: v24@0:8@16
- (void)setManager:(id)arg1;
// 0x1000c42b8; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000c3eb0; encoding: @16@0:8
+ (id)sharedInstance;

@end
