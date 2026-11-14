// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c50d0
@interface NNCGGRootModel : NSObject <NSCoding>

// property adConfigMap: T@"NSMutableDictionary",&,N,V_adConfigMap
// property adAppId: T@"NSString",C,N,V_adAppId
// property adDataModelList: T@"NSMutableArray",&,N,V_adDataModelList

// 0x1000b9fa0; encoding: @16@0:8
- (id)adConfigMap;
// 0x1000ba128; encoding: @16@0:8
- (id)getSplashAdModel;
// 0x1000ba3a4; encoding: @24@0:8@16
- (id)getFeedAdWithAdPosition:(id)arg1;
// 0x1000ba5d8; encoding: @24@0:8@16
- (id)getRewardAdWithAdPosition:(id)arg1;
// 0x1000ba750; encoding: @16@0:8
- (id)getMainFullScreenAdModel;
// 0x1000ba8b0; encoding: @16@0:8
- (id)getBannerAdModelList;
// 0x1000baba4; encoding: @24@0:8@16
- (id)initWithCoder:(id)arg1;
// 0x1000bac6c; encoding: v24@0:8@16
- (void)encodeWithCoder:(id)arg1;
// 0x1000bad00; encoding: @16@0:8
- (id)adAppId;
// 0x1000bad08; encoding: v24@0:8@16
- (void)setAdAppId:(id)arg1;
// 0x1000bad10; encoding: @16@0:8
- (id)adDataModelList;
// 0x1000bad18; encoding: v24@0:8@16
- (void)setAdDataModelList:(id)arg1;
// 0x1000bad24; encoding: v24@0:8@16
- (void)setAdConfigMap:(id)arg1;
// 0x1000bad30; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000b9c8c; encoding: @24@0:8@16
+ (id)modelWithDict:(id)arg1;
// 0x1000ba328; encoding: d32@0:8@16d24
+ (double)getFeedAdHeight:(id)arg1 width:(double)arg2;
// 0x1000baaa4; encoding: B24@0:8@16
+ (BOOL)isFeedAdSource:(id)arg1;

@end
