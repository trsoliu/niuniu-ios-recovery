// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2510
@interface NNCZoneViewController : BaseViewController <NNCFileHistoryUpdateCallback, UICollectionViewDataSource, UICollectionViewDelegate, AdManagerDelegate>

// property iconView: T@"UIImageView",&,N,V_iconView
// property loginLabel: T@"UILabel",&,N,V_loginLabel
// property nameLabel: T@"UILabel",&,N,V_nameLabel
// property phoneLabel: T@"UILabel",&,N,V_phoneLabel
// property topButton: T@"UIButton",&,N,V_topButton
// property settingButton: T@"UIButton",&,N,V_settingButton
// property historyCollectionView: T@"UICollectionView",W,N,V_historyCollectionView
// property historyView: T@"UIView",W,N,V_historyView
// property historyButton: T@"UIButton",W,N,V_historyButton
// property historyTitleLabel: T@"UILabel",W,N,V_historyTitleLabel
// property historySource: T@"NSMutableArray",&,N,V_historySource
// property itemContainerView: T@"UIView",W,N,V_itemContainerView
// property itemTitleView: T@"UILabel",W,N,V_itemTitleView
// property itemFav: T@"UIButton",W,N,V_itemFav
// property itemDownload: T@"UIButton",W,N,V_itemDownload
// property itemShare: T@"UIButton",W,N,V_itemShare
// property itemMsg: T@"UIButton",W,N,V_itemMsg
// property itemFeed: T@"UIButton",W,N,V_itemFeed
// property itemSetting: T@"UIButton",W,N,V_itemSetting
// property redView: T@"UIImageView",&,N,V_redView
// property nncadView: T@"UIView",&,N,V_nncadView
// property adManager: T@"NNCGGManager",&,N,V_adManager
// property nnchasAd: TB,N,V_nnchasAd
// property feedView: T@"NNCFeedView",&,N,V_feedView
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x100018d60; encoding: @16@0:8
- (id)feedView;
// 0x100018e24; encoding: v16@0:8
- (void)viewDidLoad;
// 0x100018e8c; encoding: v20@0:8B16
- (void)viewWillAppear:(BOOL)arg1;
// 0x100018edc; encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// 0x100018f44; encoding: v16@0:8
- (void)createView;
// 0x10001a170; encoding: v16@0:8
- (void)nncRefreshView;
// 0x10001ad70; encoding: v24@0:8@16
- (void)traitCollectionDidChange:(id)arg1;
// 0x10001ae1c; encoding: v16@0:8
- (void)updateUIForCurrentInterfaceStyle;
// 0x10001ae70; encoding: v16@0:8
- (void)requestUserInfo;
// 0x10001b568; encoding: v16@0:8
- (void)judgeRed;
// 0x10001b6fc; encoding: v16@0:8
- (void)topSelector;
// 0x10001b808; encoding: v16@0:8
- (void)settingSelector;
// 0x10001b884; encoding: v16@0:8
- (void)nnconHistoryUpdated;
// 0x10001b888; encoding: q32@0:8@16q24
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
// 0x10001b8c4; encoding: @32@0:8@16@24
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
// 0x10001b978; encoding: v32@0:8@16@24
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
// 0x10001ba88; encoding: v24@0:8@16
- (void)historyMoreSelector:(id)arg1;
// 0x10001baf8; encoding: v24@0:8@16
- (void)settingSelector:(id)arg1;
// 0x10001bb74; encoding: v24@0:8@16
- (void)feedSelector:(id)arg1;
// 0x10001bbec; encoding: v24@0:8@16
- (void)msgSelector:(id)arg1;
// 0x10001bc5c; encoding: v24@0:8@16
- (void)shareSelector:(id)arg1;
// 0x10001bd14; encoding: v24@0:8@16
- (void)downloadSelector:(id)arg1;
// 0x10001bd90; encoding: v24@0:8@16
- (void)favSelector:(id)arg1;
// 0x10001bea8; encoding: v32@0:8{CGSize=dd}16
- (void)nnconAdSizeChanged:(CGSize)arg1;
// 0x10001beac; encoding: q16@0:8
- (long long)preferredStatusBarStyle;
// 0x10001beb4; encoding: @16@0:8
- (id)iconView;
// 0x10001bec4; encoding: v24@0:8@16
- (void)setIconView:(id)arg1;
// 0x10001bed8; encoding: @16@0:8
- (id)loginLabel;
// 0x10001bee8; encoding: v24@0:8@16
- (void)setLoginLabel:(id)arg1;
// 0x10001befc; encoding: @16@0:8
- (id)nameLabel;
// 0x10001bf0c; encoding: v24@0:8@16
- (void)setNameLabel:(id)arg1;
// 0x10001bf20; encoding: @16@0:8
- (id)phoneLabel;
// 0x10001bf30; encoding: v24@0:8@16
- (void)setPhoneLabel:(id)arg1;
// 0x10001bf44; encoding: @16@0:8
- (id)topButton;
// 0x10001bf54; encoding: v24@0:8@16
- (void)setTopButton:(id)arg1;
// 0x10001bf68; encoding: @16@0:8
- (id)settingButton;
// 0x10001bf78; encoding: v24@0:8@16
- (void)setSettingButton:(id)arg1;
// 0x10001bf8c; encoding: @16@0:8
- (id)historyCollectionView;
// 0x10001bfac; encoding: v24@0:8@16
- (void)setHistoryCollectionView:(id)arg1;
// 0x10001bfc0; encoding: @16@0:8
- (id)historyView;
// 0x10001bfe0; encoding: v24@0:8@16
- (void)setHistoryView:(id)arg1;
// 0x10001bff4; encoding: @16@0:8
- (id)historyButton;
// 0x10001c014; encoding: v24@0:8@16
- (void)setHistoryButton:(id)arg1;
// 0x10001c028; encoding: @16@0:8
- (id)historyTitleLabel;
// 0x10001c048; encoding: v24@0:8@16
- (void)setHistoryTitleLabel:(id)arg1;
// 0x10001c05c; encoding: @16@0:8
- (id)historySource;
// 0x10001c06c; encoding: v24@0:8@16
- (void)setHistorySource:(id)arg1;
// 0x10001c080; encoding: @16@0:8
- (id)itemContainerView;
// 0x10001c0a0; encoding: v24@0:8@16
- (void)setItemContainerView:(id)arg1;
// 0x10001c0b4; encoding: @16@0:8
- (id)itemTitleView;
// 0x10001c0d4; encoding: v24@0:8@16
- (void)setItemTitleView:(id)arg1;
// 0x10001c0e8; encoding: @16@0:8
- (id)itemFav;
// 0x10001c108; encoding: v24@0:8@16
- (void)setItemFav:(id)arg1;
// 0x10001c11c; encoding: @16@0:8
- (id)itemDownload;
// 0x10001c13c; encoding: v24@0:8@16
- (void)setItemDownload:(id)arg1;
// 0x10001c150; encoding: @16@0:8
- (id)itemShare;
// 0x10001c170; encoding: v24@0:8@16
- (void)setItemShare:(id)arg1;
// 0x10001c184; encoding: @16@0:8
- (id)itemMsg;
// 0x10001c1a4; encoding: v24@0:8@16
- (void)setItemMsg:(id)arg1;
// 0x10001c1b8; encoding: @16@0:8
- (id)itemFeed;
// 0x10001c1d8; encoding: v24@0:8@16
- (void)setItemFeed:(id)arg1;
// 0x10001c1ec; encoding: @16@0:8
- (id)itemSetting;
// 0x10001c20c; encoding: v24@0:8@16
- (void)setItemSetting:(id)arg1;
// 0x10001c220; encoding: @16@0:8
- (id)redView;
// 0x10001c230; encoding: v24@0:8@16
- (void)setRedView:(id)arg1;
// 0x10001c244; encoding: @16@0:8
- (id)nncadView;
// 0x10001c254; encoding: v24@0:8@16
- (void)setNncadView:(id)arg1;
// 0x10001c268; encoding: @16@0:8
- (id)adManager;
// 0x10001c278; encoding: v24@0:8@16
- (void)setAdManager:(id)arg1;
// 0x10001c28c; encoding: B16@0:8
- (BOOL)nnchasAd;
// 0x10001c29c; encoding: v20@0:8B16
- (void)setNnchasAd:(BOOL)arg1;
// 0x10001c2ac; encoding: v24@0:8@16
- (void)setFeedView:(id)arg1;
// 0x10001c2c0; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
