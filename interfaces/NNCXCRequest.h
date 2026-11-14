// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2600
@interface NNCXCRequest : NSObject

// property LAST_REFRESH_TOKEN_STAMP: Td,N,V_LAST_REFRESH_TOKEN_STAMP
// property getTokenSuccessArray: T@"NSMutableArray",&,N,V_getTokenSuccessArray
// property getTokenFailedArray: T@"NSMutableArray",&,N,V_getTokenFailedArray
// property isRequestingToken: TB,N,V_isRequestingToken
// property isCopy: TB,N,V_isCopy
// property mfr: T@"NSString",C,N,V_mfr
// property model: T@"NSString",C,N,V_model
// property responseManager: T@"AFHTTPSessionManager",&,N,V_responseManager
// property DEVICE_ID: T@"NSString",C,N,V_DEVICE_ID
// property TOKEN: T@"NSString",C,N,V_TOKEN
// property sceneId: T@"NSString",C,N,V_sceneId
// property certifyId: T@"NSString",C,N,V_certifyId
// property deviceToken: T@"NSString",C,N,V_deviceToken
// property storeDeviceIdKey: T@"NSString",C,N,V_storeDeviceIdKey
// property storeTimeStampKey: T@"NSString",C,N,V_storeTimeStampKey
// property storeTokenKey: T@"NSString",C,N,V_storeTokenKey
// property storeMfrKey: T@"NSString",C,N,V_storeMfrKey
// property storeModelKey: T@"NSString",C,N,V_storeModelKey

// 0x10001d780; encoding: @16@0:8
- (id)getSrc;
// 0x10001d7e8; encoding: @24@0:8d16
- (id)initWithTimeout:(double)arg1;
// 0x10001da50; encoding: v36@0:8i16@?20@?28
- (void)nncgetXcEpisodeList:(int)arg1 success:(id /* block signature unavailable */)arg2 failure:(id /* block signature unavailable */)arg3;
// 0x10001e230; encoding: v56@0:8i16i20@24q32@?40@?48
- (void)NNCgetXCEpisodeUrl:(int)arg1 episodeId:(int)arg2 vodToken:(id)arg3 curTime:(long long)arg4 success:(id /* block signature unavailable */)arg5 failure:(id /* block signature unavailable */)arg6;
// 0x10001e9dc; encoding: v32@0:8@?16@?24
- (void)getXm3u8TokenWithSuccess:(id /* block signature unavailable */)arg1 failure:(id /* block signature unavailable */)arg2;
// 0x10001f0ac; encoding: v32@0:8@?16@?24
- (void)postXm3u8AdWithSuccess:(id /* block signature unavailable */)arg1 failure:(id /* block signature unavailable */)arg2;
// 0x10001f404; encoding: @56@0:8@16@24@32@?40@?48
- (id)requestWithGET:(id)arg1 headers:(id)arg2 parameters:(id)arg3 success:(id /* block signature unavailable */)arg4 failure:(id /* block signature unavailable */)arg5;
// 0x10001f5b4; encoding: @56@0:8@16@24@32@?40@?48
- (id)requestWithPOST:(id)arg1 headers:(id)arg2 parameters:(id)arg3 success:(id /* block signature unavailable */)arg4 failure:(id /* block signature unavailable */)arg5;
// 0x10001f764; encoding: v48@0:8@16@24@?32@?40
- (void)dealSuccessWithTask:(id)arg1 responseObject:(id)arg2 success:(id /* block signature unavailable */)arg3 failure:(id /* block signature unavailable */)arg4;
// 0x10001fac0; encoding: v48@0:8@16@24@?32@?40
- (void)dealDecryptedResponse:(id)arg1 responseObject:(id)arg2 success:(id /* block signature unavailable */)arg3 failure:(id /* block signature unavailable */)arg4;
// 0x10001fd44; encoding: @24@0:8q16
- (id)getHeaders:(long long)arg1;
// 0x1000203b8; encoding: B16@0:8
- (BOOL)shouldRefreshToken;
// 0x10002043c; encoding: @16@0:8
- (id)getDeviceId;
// 0x1000206b4; encoding: @16@0:8
- (id)getSourceToken;
// 0x1000207a0; encoding: v24@0:8@16
- (void)setSourceToken:(id)arg1;
// 0x10002084c; encoding: v16@0:8
- (void)cleanDeviceIdAndToken;
// 0x100020a28; encoding: @16@0:8
- (id)mfr;
// 0x100020bd4; encoding: @16@0:8
- (id)model;
// 0x100020d80; encoding: @16@0:8
- (id)responseManager;
// 0x100020d88; encoding: v24@0:8@16
- (void)setResponseManager:(id)arg1;
// 0x100020d94; encoding: @16@0:8
- (id)DEVICE_ID;
// 0x100020d9c; encoding: v24@0:8@16
- (void)setDEVICE_ID:(id)arg1;
// 0x100020da4; encoding: @16@0:8
- (id)TOKEN;
// 0x100020dac; encoding: v24@0:8@16
- (void)setTOKEN:(id)arg1;
// 0x100020db4; encoding: @16@0:8
- (id)sceneId;
// 0x100020dbc; encoding: v24@0:8@16
- (void)setSceneId:(id)arg1;
// 0x100020dc4; encoding: @16@0:8
- (id)certifyId;
// 0x100020dcc; encoding: v24@0:8@16
- (void)setCertifyId:(id)arg1;
// 0x100020dd4; encoding: @16@0:8
- (id)deviceToken;
// 0x100020ddc; encoding: v24@0:8@16
- (void)setDeviceToken:(id)arg1;
// 0x100020de4; encoding: @16@0:8
- (id)storeDeviceIdKey;
// 0x100020dec; encoding: v24@0:8@16
- (void)setStoreDeviceIdKey:(id)arg1;
// 0x100020df4; encoding: @16@0:8
- (id)storeTimeStampKey;
// 0x100020dfc; encoding: v24@0:8@16
- (void)setStoreTimeStampKey:(id)arg1;
// 0x100020e04; encoding: @16@0:8
- (id)storeTokenKey;
// 0x100020e0c; encoding: v24@0:8@16
- (void)setStoreTokenKey:(id)arg1;
// 0x100020e14; encoding: @16@0:8
- (id)storeMfrKey;
// 0x100020e1c; encoding: v24@0:8@16
- (void)setStoreMfrKey:(id)arg1;
// 0x100020e24; encoding: @16@0:8
- (id)storeModelKey;
// 0x100020e2c; encoding: v24@0:8@16
- (void)setStoreModelKey:(id)arg1;
// 0x100020e34; encoding: d16@0:8
- (double)LAST_REFRESH_TOKEN_STAMP;
// 0x100020e3c; encoding: v24@0:8d16
- (void)setLAST_REFRESH_TOKEN_STAMP:(double)arg1;
// 0x100020e44; encoding: @16@0:8
- (id)getTokenSuccessArray;
// 0x100020e4c; encoding: v24@0:8@16
- (void)setGetTokenSuccessArray:(id)arg1;
// 0x100020e58; encoding: @16@0:8
- (id)getTokenFailedArray;
// 0x100020e60; encoding: v24@0:8@16
- (void)setGetTokenFailedArray:(id)arg1;
// 0x100020e6c; encoding: B16@0:8
- (BOOL)isRequestingToken;
// 0x100020e74; encoding: v20@0:8B16
- (void)setIsRequestingToken:(BOOL)arg1;
// 0x100020e7c; encoding: B16@0:8
- (BOOL)isCopy;
// 0x100020e84; encoding: v20@0:8B16
- (void)setIsCopy:(BOOL)arg1;
// 0x100020e8c; encoding: v24@0:8@16
- (void)setMfr:(id)arg1;
// 0x100020e94; encoding: v24@0:8@16
- (void)setModel:(id)arg1;
// 0x100020e9c; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x10001d58c; encoding: @20@0:8B16
+ (id)request:(BOOL)arg1;
// 0x1000201b0; encoding: @40@0:8@16@24@32
+ (id)AES128Decrypt:(id)arg1 key:(id)arg2 iv:(id)arg3;

@end
