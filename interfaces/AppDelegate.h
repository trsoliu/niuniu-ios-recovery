// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2f38
@interface AppDelegate : UIResponder <WindMillSplashAdDelegate, UIApplicationDelegate>

// property launchView: T@"UIView",&,N,V_launchView
// property nativeAdItemModel: T@"NNCGGDataItemModel",&,N,V_nativeAdItemModel
// property isDelayRemoveAd: TB,N,V_isDelayRemoveAd
// property mainPageLoad: TB,N,V_mainPageLoad
// property splashAd: T@"WindMillSplashAd",&,N,V_splashAd
// property didAfterConfigRequest: TB,N,V_didAfterConfigRequest
// property window: T@"UIWindow",&,N,V_window
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x10003a36c; encoding: v24@0:8@16
- (void)applicationWillTerminate:(id)arg1;
// 0x10003a3a4; encoding: B32@0:8@16@24
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
// 0x10003a77c; encoding: v24@0:8@16
- (void)handleNotification:(id)arg1;
// 0x10003a904; encoding: v16@0:8
- (void)getNNCConfig;
// 0x10003ab2c; encoding: Q32@0:8@16@24
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
// 0x10003ab3c; encoding: v24@0:8@16
- (void)applicationDidBecomeActive:(id)arg1;
// 0x10003ab80; encoding: v16@0:8
- (void)nncinitAd;
// 0x10003ad00; encoding: v20@0:8B16
- (void)nncshowSplashAd:(BOOL)arg1;
// 0x10003b3b8; encoding: v24@0:8@16
- (void)nncnativeSplashTapped:(id)arg1;
// 0x10003b92c; encoding: v16@0:8
- (void)nncskipNativeAdSelector;
// 0x10003b934; encoding: v20@0:8B16
- (void)nncskipNativeAdWithForce:(BOOL)arg1;
// 0x10003bc34; encoding: v16@0:8
- (void)nnconGetDomainSuccess;
// 0x10003bc6c; encoding: v24@0:8@16
- (void)nncstartSplash_new:(id)arg1;
// 0x10003bda8; encoding: v24@0:8@16
- (void)onSplashAdDidLoad:(id)arg1;
// 0x10003bdac; encoding: v32@0:8@16@24
- (void)onSplashAdLoadFail:(id)arg1 error:(id)arg2;
// 0x10003bdb0; encoding: v24@0:8@16
- (void)onSplashAdSuccessPresentScreen:(id)arg1;
// 0x10003bdf0; encoding: v32@0:8@16@24
- (void)onSplashAdFailToPresent:(id)arg1 withError:(id)arg2;
// 0x10003be28; encoding: v24@0:8@16
- (void)onSplashAdClicked:(id)arg1;
// 0x10003be2c; encoding: v24@0:8@16
- (void)onSplashAdSkiped:(id)arg1;
// 0x10003be30; encoding: v24@0:8@16
- (void)onSplashAdWillClosed:(id)arg1;
// 0x10003be34; encoding: v24@0:8@16
- (void)onSplashAdClosed:(id)arg1;
// 0x10003be38; encoding: v24@0:8@16
- (void)onSplashZoomOutViewAdDidClick:(id)arg1;
// 0x10003be3c; encoding: v24@0:8@16
- (void)onSplashZoomOutViewAdDidClose:(id)arg1;
// 0x10003be40; encoding: v16@0:8
- (void)closeSplashView;
// 0x10003bf2c; encoding: v16@0:8
- (void)nncsetupSignin;
// 0x10003bfcc; encoding: v16@0:8
- (void)nncrequestConfig;
// 0x10003bfd0; encoding: v16@0:8
- (void)requestToken;
// 0x10003c09c; encoding: v16@0:8
- (void)nncrequestAppConfig;
// 0x10003cc38; encoding: v16@0:8
- (void)judgeUpdateConfig;
// 0x10003cf14; encoding: v16@0:8
- (void)nncrequestMainPageConfig;
// 0x10003d0e0; encoding: @16@0:8
- (id)window;
// 0x10003d0f0; encoding: v24@0:8@16
- (void)setWindow:(id)arg1;
// 0x10003d104; encoding: @16@0:8
- (id)launchView;
// 0x10003d114; encoding: v24@0:8@16
- (void)setLaunchView:(id)arg1;
// 0x10003d128; encoding: @16@0:8
- (id)nativeAdItemModel;
// 0x10003d138; encoding: v24@0:8@16
- (void)setNativeAdItemModel:(id)arg1;
// 0x10003d14c; encoding: B16@0:8
- (BOOL)isDelayRemoveAd;
// 0x10003d15c; encoding: v20@0:8B16
- (void)setIsDelayRemoveAd:(BOOL)arg1;
// 0x10003d16c; encoding: B16@0:8
- (BOOL)mainPageLoad;
// 0x10003d17c; encoding: v20@0:8B16
- (void)setMainPageLoad:(BOOL)arg1;
// 0x10003d18c; encoding: @16@0:8
- (id)splashAd;
// 0x10003d19c; encoding: v24@0:8@16
- (void)setSplashAd:(id)arg1;
// 0x10003d1b0; encoding: B16@0:8
- (BOOL)didAfterConfigRequest;
// 0x10003d1c0; encoding: v20@0:8B16
- (void)setDidAfterConfigRequest:(BOOL)arg1;
// 0x10003d1d0; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x10003b6d4; encoding: v32@0:8@16@24
+ (void)nncclickedNativeAd:(id)arg1 navi:(id)arg2;

@end
