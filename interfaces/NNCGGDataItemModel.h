// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c5300
@interface NNCGGDataItemModel : NSObject <NSCoding>

// property type: T@"NSString",C,N,V_type
// property cover: T@"NSString",C,N,V_cover
// property name: T@"NSString",C,N,V_name
// property clz: T@"NSString",C,N,V_clz
// property videoId: T@"NSString",C,N,V_videoId
// property jumpType: T@"NSString",C,N,V_jumpType
// property nativeUrl: T@"NSString",C,N,V_nativeUrl
// property sdkAdId: T@"NSString",C,N,V_sdkAdId
// property sdkAdType: T@"NSString",C,N,V_sdkAdType

// 0x1000bf138; encoding: B16@0:8
- (BOOL)isSdkAd;
// 0x1000bf180; encoding: @24@0:8@16
- (id)initWithCoder:(id)arg1;
// 0x1000bf398; encoding: v24@0:8@16
- (void)encodeWithCoder:(id)arg1;
// 0x1000bf57c; encoding: @16@0:8
- (id)type;
// 0x1000bf584; encoding: v24@0:8@16
- (void)setType:(id)arg1;
// 0x1000bf58c; encoding: @16@0:8
- (id)cover;
// 0x1000bf594; encoding: v24@0:8@16
- (void)setCover:(id)arg1;
// 0x1000bf59c; encoding: @16@0:8
- (id)name;
// 0x1000bf5a4; encoding: v24@0:8@16
- (void)setName:(id)arg1;
// 0x1000bf5ac; encoding: @16@0:8
- (id)clz;
// 0x1000bf5b4; encoding: v24@0:8@16
- (void)setClz:(id)arg1;
// 0x1000bf5bc; encoding: @16@0:8
- (id)videoId;
// 0x1000bf5c4; encoding: v24@0:8@16
- (void)setVideoId:(id)arg1;
// 0x1000bf5cc; encoding: @16@0:8
- (id)jumpType;
// 0x1000bf5d4; encoding: v24@0:8@16
- (void)setJumpType:(id)arg1;
// 0x1000bf5dc; encoding: @16@0:8
- (id)nativeUrl;
// 0x1000bf5e4; encoding: v24@0:8@16
- (void)setNativeUrl:(id)arg1;
// 0x1000bf5ec; encoding: @16@0:8
- (id)sdkAdId;
// 0x1000bf5f4; encoding: v24@0:8@16
- (void)setSdkAdId:(id)arg1;
// 0x1000bf5fc; encoding: @16@0:8
- (id)sdkAdType;
// 0x1000bf604; encoding: v24@0:8@16
- (void)setSdkAdType:(id)arg1;
// 0x1000bf60c; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000bed88; encoding: @24@0:8@16
+ (id)modelWithDict:(id)arg1;
// 0x1000bef84; encoding: @24@0:8@16
+ (id)modelWithModel:(id)arg1;

@end
