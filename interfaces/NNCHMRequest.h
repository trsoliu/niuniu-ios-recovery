// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c29c0
@interface NNCHMRequest : NSObject

// property LAST_REFRESH_TOKEN_STAMP: Td,N,V_LAST_REFRESH_TOKEN_STAMP
// property appStartTs: Tq,N,V_appStartTs
// property responseManager: T@"AFHTTPSessionManager",&,N,V_responseManager
// property DEVICE_ID: T@"NSString",C,N,V_DEVICE_ID
// property TOKEN: T@"NSString",C,N,V_TOKEN
// property mfr: T@"NSString",C,N,V_mfr
// property model: T@"NSString",C,N,V_model
// property verifyUrl: T@"NSString",C,N,V_verifyUrl

// 0x100026950; encoding: @24@0:8d16
- (id)initWithTimeout:(double)arg1;
// 0x100026bb0; encoding: v36@0:8i16@?20@?28
- (void)nncgetHmEpisodeList:(int)arg1 success:(id /* block signature unavailable */)arg2 failure:(id /* block signature unavailable */)arg3;
// 0x100027040; encoding: v44@0:8i16i20i24@?28@?36
- (void)nncgetHmEpisodeUrl:(int)arg1 episodeId:(int)arg2 collection:(int)arg3 success:(id /* block signature unavailable */)arg4 failure:(id /* block signature unavailable */)arg5;
// 0x1000274dc; encoding: v32@0:8@?16@?24
- (void)getHeMaTokenWithSuccess:(id /* block signature unavailable */)arg1 failure:(id /* block signature unavailable */)arg2;
// 0x1000279dc; encoding: v24@0:8@?16
- (void)postHeMaAdWithFinished:(id /* block signature unavailable */)arg1;
// 0x100027d3c; encoding: @56@0:8@16@24@32@?40@?48
- (id)requestWithPOST:(id)arg1 headers:(id)arg2 parameters:(id)arg3 success:(id /* block signature unavailable */)arg4 failure:(id /* block signature unavailable */)arg5;
// 0x100027eec; encoding: v48@0:8@16@24@?32@?40
- (void)dealSuccessWithTask:(id)arg1 responseObject:(id)arg2 success:(id /* block signature unavailable */)arg3 failure:(id /* block signature unavailable */)arg4;
// 0x1000282bc; encoding: v48@0:8@16@24@?32@?40
- (void)dealDecryptedResponse:(id)arg1 responseObject:(id)arg2 success:(id /* block signature unavailable */)arg3 failure:(id /* block signature unavailable */)arg4;
// 0x100028540; encoding: @16@0:8
- (id)getHeaders;
// 0x100028aac; encoding: B16@0:8
- (BOOL)shouldRefreshToken;
// 0x100028b30; encoding: @16@0:8
- (id)getDeviceId;
// 0x100028d58; encoding: @16@0:8
- (id)getSourceToken;
// 0x100028e28; encoding: v24@0:8@16
- (void)setSourceToken:(id)arg1;
// 0x100028ebc; encoding: v16@0:8
- (void)cleanDeviceId;
// 0x100028f38; encoding: v20@0:8B16
- (void)cleanDeviceIdAndToken:(BOOL)arg1;
// 0x1000292dc; encoding: @16@0:8
- (id)mfr;
// 0x100029454; encoding: @16@0:8
- (id)model;
// 0x1000295cc; encoding: @16@0:8
- (id)responseManager;
// 0x1000295d4; encoding: v24@0:8@16
- (void)setResponseManager:(id)arg1;
// 0x1000295e0; encoding: @16@0:8
- (id)DEVICE_ID;
// 0x1000295e8; encoding: v24@0:8@16
- (void)setDEVICE_ID:(id)arg1;
// 0x1000295f0; encoding: @16@0:8
- (id)TOKEN;
// 0x1000295f8; encoding: v24@0:8@16
- (void)setTOKEN:(id)arg1;
// 0x100029600; encoding: v24@0:8@16
- (void)setMfr:(id)arg1;
// 0x100029608; encoding: v24@0:8@16
- (void)setModel:(id)arg1;
// 0x100029610; encoding: @16@0:8
- (id)verifyUrl;
// 0x100029618; encoding: v24@0:8@16
- (void)setVerifyUrl:(id)arg1;
// 0x100029620; encoding: d16@0:8
- (double)LAST_REFRESH_TOKEN_STAMP;
// 0x100029628; encoding: v24@0:8d16
- (void)setLAST_REFRESH_TOKEN_STAMP:(double)arg1;
// 0x100029630; encoding: q16@0:8
- (long long)appStartTs;
// 0x100029638; encoding: v24@0:8q16
- (void)setAppStartTs:(long long)arg1;
// 0x100029640; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000268bc; encoding: @16@0:8
+ (id)request;
// 0x100028870; encoding: @40@0:8@16@24@32
+ (id)AES128Decrypt:(id)arg1 key:(id)arg2 iv:(id)arg3;
// 0x1000290a4; encoding: @16@0:8
+ (id)getMfrList;
// 0x10002917c; encoding: @16@0:8
+ (id)getModelList;

@end
