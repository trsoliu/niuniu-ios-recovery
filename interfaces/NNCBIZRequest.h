// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c4c70
@interface NNCBIZRequest : NSObject

// property decryptKey: T@"NSString",C,N,V_decryptKey
// property serializeResponse: TB,N,V_serializeResponse
// property ctData: T@"CTCellularData",&,N,V_ctData
// property noPermissionTime: Td,N,V_noPermissionTime
// property jsonResponseManager: T@"AFHTTPSessionManager",&,N,V_jsonResponseManager
// property firstJsonResponseManager: T@"AFHTTPSessionManager",&,N,V_firstJsonResponseManager

// 0x1000abe30; encoding: @36@0:8d16@24B32
- (id)initWithTimeout:(double)arg1 decryptKey:(id)arg2 serialize:(BOOL)arg3;
// 0x1000ac7c8; encoding: @48@0:8@16@24@?32@?40
- (id)requestWithGET:(id)arg1 parameters:(id)arg2 success:(id /* block signature unavailable */)arg3 failure:(id /* block signature unavailable */)arg4;
// 0x1000acfac; encoding: @48@0:8@16@24@?32@?40
- (id)requestWithPOST:(id)arg1 parameters:(id)arg2 success:(id /* block signature unavailable */)arg3 failure:(id /* block signature unavailable */)arg4;
// 0x1000ad220; encoding: @48@0:8@16@24@?32@?40
- (id)requestWithPUT:(id)arg1 parameters:(id)arg2 success:(id /* block signature unavailable */)arg3 failure:(id /* block signature unavailable */)arg4;
// 0x1000ad490; encoding: @48@0:8@16@24@?32@?40
- (id)requestWithDELETE:(id)arg1 parameters:(id)arg2 success:(id /* block signature unavailable */)arg3 failure:(id /* block signature unavailable */)arg4;
// 0x1000ad700; encoding: v32@0:8@16@24
- (void)setHeader:(id)arg1 urlString:(id)arg2;
// 0x1000ad7f0; encoding: v48@0:8@16@24@?32@?40
- (void)dealSuccessWithTask:(id)arg1 responseObject:(id)arg2 success:(id /* block signature unavailable */)arg3 failure:(id /* block signature unavailable */)arg4;
// 0x1000adc90; encoding: v48@0:8@16@24@?32@?40
- (void)dealDecryptedResponse:(id)arg1 responseObject:(id)arg2 success:(id /* block signature unavailable */)arg3 failure:(id /* block signature unavailable */)arg4;
// 0x1000adfb4; encoding: v48@0:8@16@24@?32@?40
- (void)dealErrorWithTask:(id)arg1 error:(id)arg2 success:(id /* block signature unavailable */)arg3 failure:(id /* block signature unavailable */)arg4;
// 0x1000ae218; encoding: @16@0:8
- (id)jsonResponseManager;
// 0x1000ae220; encoding: v24@0:8@16
- (void)setJsonResponseManager:(id)arg1;
// 0x1000ae22c; encoding: @16@0:8
- (id)firstJsonResponseManager;
// 0x1000ae234; encoding: v24@0:8@16
- (void)setFirstJsonResponseManager:(id)arg1;
// 0x1000ae240; encoding: @16@0:8
- (id)decryptKey;
// 0x1000ae248; encoding: v24@0:8@16
- (void)setDecryptKey:(id)arg1;
// 0x1000ae250; encoding: B16@0:8
- (BOOL)serializeResponse;
// 0x1000ae258; encoding: v20@0:8B16
- (void)setSerializeResponse:(BOOL)arg1;
// 0x1000ae260; encoding: @16@0:8
- (id)ctData;
// 0x1000ae268; encoding: v24@0:8@16
- (void)setCtData:(id)arg1;
// 0x1000ae274; encoding: d16@0:8
- (double)noPermissionTime;
// 0x1000ae27c; encoding: v24@0:8d16
- (void)setNoPermissionTime:(double)arg1;
// 0x1000ae284; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000abd40; encoding: @16@0:8
+ (id)getShortVersion;
// 0x1000abdb4; encoding: @16@0:8
+ (id)request;
// 0x1000adfc8; encoding: @24@0:8@16
+ (id)getDicFromData:(id)arg1;
// 0x1000adfdc; encoding: @32@0:8@16@24
+ (id)AES128Decrypt:(id)arg1 key:(id)arg2;

@end
