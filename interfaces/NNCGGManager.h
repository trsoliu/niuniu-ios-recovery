// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c5968
@interface NNCGGManager : NSObject <WindMillNativeAdViewDelegate, WindMillNativeAdsManagerDelegate>

// property controller: T@"UIViewController",W,N,V_controller
// property containerView: T@"UIView",W,N,V_containerView
// property containerWidth: Td,N,V_containerWidth
// property containerHeight: Td,N,V_containerHeight
// property adModel: T@"NNCGGDataItemModel",&,N,V_adModel
// property nativeAdManager: T@"WindMillNativeAdsManager",&,N,V_nativeAdManager
// property adView: T@"WindMillNativeAdView",&,N,V_adView
// property delegate: T@"<AdManagerDelegate>",W,N,V_delegate
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000c9860; encoding: v40@0:8@16@24@32
- (void)showFeedAd:(id)arg1 container:(id)arg2 controller:(id)arg3;
// 0x1000c990c; encoding: v48@0:8@16@24@32d40
- (void)showFeedAd:(id)arg1 container:(id)arg2 controller:(id)arg3 adContainerWidth:(double)arg4;
// 0x1000c9f44; encoding: v16@0:8
- (void)nativeAdTapped;
// 0x1000c9fc8; encoding: v24@0:8@16
- (void)nativeAdsManagerSuccessToLoad:(id)arg1;
// 0x1000ca188; encoding: v32@0:8@16@24
- (void)nativeAdView:(id)arg1 dislikeWithReason:(id)arg2;
// 0x1000ca270; encoding: @16@0:8
- (id)delegate;
// 0x1000ca288; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x1000ca294; encoding: @16@0:8
- (id)controller;
// 0x1000ca2ac; encoding: v24@0:8@16
- (void)setController:(id)arg1;
// 0x1000ca2b8; encoding: @16@0:8
- (id)containerView;
// 0x1000ca2d0; encoding: v24@0:8@16
- (void)setContainerView:(id)arg1;
// 0x1000ca2dc; encoding: d16@0:8
- (double)containerWidth;
// 0x1000ca2e4; encoding: v24@0:8d16
- (void)setContainerWidth:(double)arg1;
// 0x1000ca2ec; encoding: d16@0:8
- (double)containerHeight;
// 0x1000ca2f4; encoding: v24@0:8d16
- (void)setContainerHeight:(double)arg1;
// 0x1000ca2fc; encoding: @16@0:8
- (id)adModel;
// 0x1000ca304; encoding: v24@0:8@16
- (void)setAdModel:(id)arg1;
// 0x1000ca310; encoding: @16@0:8
- (id)nativeAdManager;
// 0x1000ca318; encoding: v24@0:8@16
- (void)setNativeAdManager:(id)arg1;
// 0x1000ca324; encoding: @16@0:8
- (id)adView;
// 0x1000ca32c; encoding: v24@0:8@16
- (void)setAdView:(id)arg1;
// 0x1000ca338; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000c97c8; encoding: B24@0:8@16
+ (BOOL)nncnnchasPostionAd:(id)arg1;

@end
