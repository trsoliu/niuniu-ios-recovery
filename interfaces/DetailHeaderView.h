// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c4950
@interface DetailHeaderView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate, AdManagerDelegate, WindMillRewardVideoAdDelegate>

// property nameTv: T@"UILabel",W,N,V_nameTv
// property clickTv: T@"UILabel",W,N,V_clickTv
// property fireIv: T@"UIImageView",W,N,V_fireIv
// property desButton: T@"UIButton",W,N,V_desButton
// property flagTv: T@"UILabel",W,N,V_flagTv
// property feedButton: T@"UIButton",W,N,V_feedButton
// property favButton: T@"UIButton",W,N,V_favButton
// property downloadButton: T@"UIButton",W,N,V_downloadButton
// property shareButton: T@"UIButton",W,N,V_shareButton
// property line: T@"UIImageView",W,N,V_line
// property chooseEpisodeTv: T@"UILabel",W,N,V_chooseEpisodeTv
// property showMoreButton: T@"UIButton",W,N,V_showMoreButton
// property chooseSourceView: T@"UIView",W,N,V_chooseSourceView
// property sourceTv: T@"UILabel",W,N,V_sourceTv
// property episodeCountTv: T@"UILabel",W,N,V_episodeCountTv
// property changeSourceTv: T@"UILabel",W,N,V_changeSourceTv
// property collectionView: T@"UICollectionView",&,N,V_collectionView
// property collectionLayout: T@"UICollectionViewFlowLayout",&,N,V_collectionLayout
// property nncadView: T@"UIView",&,N,V_nncadView
// property recommendLabel: T@"UILabel",&,N,V_recommendLabel
// property adManager: T@"NNCGGManager",&,N,V_adManager
// property settedAd: TB,N,V_settedAd
// property sourceIndex: Ti,N,V_sourceIndex
// property episodeIndex: Ti,N,V_episodeIndex
// property rewardVideoAd: T@"WindMillRewardVideoAd",&,N,V_rewardVideoAd
// property adLoadType: Ti,N,V_adLoadType
// property adShowEnough: TB,N,V_adShowEnough
// property adHeight: Td,N,V_adHeight
// property nncselfController: T@"NNCDetailViewController",W,N,V_nncselfController
// property nncisLocalSource: TB,N,V_nncisLocalSource
// property isFav: TB,N,V_isFav
// property videoBean: T@"NNCFileBean",&,N,V_videoBean
// property downloadedList: T@"NSMutableArray",&,N,V_downloadedList
// property delegate: T@"<DetailHeaderViewDelegate>",W,N,V_delegate
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000a1d00; encoding: d24@0:8@16
- (double)heightForBean:(id)arg1;
// 0x1000a1e74; encoding: v16@0:8
- (void)awakeFromNib;
// 0x1000a28c4; encoding: v20@0:8B16
- (void)setIsFav:(BOOL)arg1;
// 0x1000a2908; encoding: v24@0:8@16
- (void)setVideoBean:(id)arg1;
// 0x1000a2cd0; encoding: v24@0:8i16i20
- (void)setSourceIndex:(int)arg1 episodeIndex:(int)arg2;
// 0x1000a330c; encoding: v16@0:8
- (void)layoutSubviews;
// 0x1000a3468; encoding: v16@0:8
- (void)updateFrame;
// 0x1000a3a64; encoding: v16@0:8
- (void)updateSourceFrame;
// 0x1000a3bfc; encoding: v24@0:8@16
- (void)showMoreSelector:(id)arg1;
// 0x1000a3c2c; encoding: v24@0:8@16
- (void)shareSelector:(id)arg1;
// 0x1000a3cf4; encoding: v24@0:8@16
- (void)downloadSelector:(id)arg1;
// 0x1000a3ec0; encoding: v20@0:8i16
- (void)showRewardAdWithType:(int)arg1;
// 0x1000a4044; encoding: v24@0:8@16
- (void)favSelector:(id)arg1;
// 0x1000a4550; encoding: v24@0:8@16
- (void)feedSelector:(id)arg1;
// 0x1000a4704; encoding: v16@0:8
- (void)feedReport;
// 0x1000a49a0; encoding: v16@0:8
- (void)reportPlayError;
// 0x1000a4d10; encoding: v24@0:8@16
- (void)desSelector:(id)arg1;
// 0x1000a4d40; encoding: v16@0:8
- (void)chooseSourceSelector;
// 0x1000a4d70; encoding: q32@0:8@16q24
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
// 0x1000a4e70; encoding: @32@0:8@16@24
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
// 0x1000a5058; encoding: v32@0:8@16@24
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
// 0x1000a5108; encoding: v32@0:8{CGSize=dd}16
- (void)nnconAdSizeChanged:(CGSize)arg1;
// 0x1000a5160; encoding: v16@0:8
- (void)showFirstPlayAd;
// 0x1000a5168; encoding: v24@0:8@16
- (void)rewardVideoAdDidLoad:(id)arg1;
// 0x1000a5214; encoding: v32@0:8@16@24
- (void)rewardVideoAdDidLoad:(id)arg1 didFailWithError:(id)arg2;
// 0x1000a52ac; encoding: v32@0:8@16@24
- (void)rewardVideoAd:(id)arg1 reward:(id)arg2;
// 0x1000a52f4; encoding: v24@0:8@16
- (void)rewardVideoAdWillVisible:(id)arg1;
// 0x1000a52f8; encoding: v24@0:8@16
- (void)rewardVideoAdDidVisible:(id)arg1;
// 0x1000a5324; encoding: v24@0:8@16
- (void)rewardVideoAdDidClick:(id)arg1;
// 0x1000a5340; encoding: v24@0:8@16
- (void)rewardVideoAdDidClickSkip:(id)arg1;
// 0x1000a535c; encoding: v24@0:8@16
- (void)rewardVideoAdDidClose:(id)arg1;
// 0x1000a5440; encoding: v32@0:8@16@24
- (void)rewardVideoAdDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
// 0x1000a5470; encoding: @16@0:8
- (id)nncselfController;
// 0x1000a5490; encoding: v24@0:8@16
- (void)setNncselfController:(id)arg1;
// 0x1000a54a4; encoding: B16@0:8
- (BOOL)nncisLocalSource;
// 0x1000a54b4; encoding: v20@0:8B16
- (void)setNncisLocalSource:(BOOL)arg1;
// 0x1000a54c4; encoding: B16@0:8
- (BOOL)isFav;
// 0x1000a54d4; encoding: @16@0:8
- (id)videoBean;
// 0x1000a54e4; encoding: @16@0:8
- (id)downloadedList;
// 0x1000a54f4; encoding: v24@0:8@16
- (void)setDownloadedList:(id)arg1;
// 0x1000a5508; encoding: @16@0:8
- (id)delegate;
// 0x1000a5528; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x1000a553c; encoding: @16@0:8
- (id)nameTv;
// 0x1000a555c; encoding: v24@0:8@16
- (void)setNameTv:(id)arg1;
// 0x1000a5570; encoding: @16@0:8
- (id)clickTv;
// 0x1000a5590; encoding: v24@0:8@16
- (void)setClickTv:(id)arg1;
// 0x1000a55a4; encoding: @16@0:8
- (id)fireIv;
// 0x1000a55c4; encoding: v24@0:8@16
- (void)setFireIv:(id)arg1;
// 0x1000a55d8; encoding: @16@0:8
- (id)desButton;
// 0x1000a55f8; encoding: v24@0:8@16
- (void)setDesButton:(id)arg1;
// 0x1000a560c; encoding: @16@0:8
- (id)flagTv;
// 0x1000a562c; encoding: v24@0:8@16
- (void)setFlagTv:(id)arg1;
// 0x1000a5640; encoding: @16@0:8
- (id)feedButton;
// 0x1000a5660; encoding: v24@0:8@16
- (void)setFeedButton:(id)arg1;
// 0x1000a5674; encoding: @16@0:8
- (id)favButton;
// 0x1000a5694; encoding: v24@0:8@16
- (void)setFavButton:(id)arg1;
// 0x1000a56a8; encoding: @16@0:8
- (id)downloadButton;
// 0x1000a56c8; encoding: v24@0:8@16
- (void)setDownloadButton:(id)arg1;
// 0x1000a56dc; encoding: @16@0:8
- (id)shareButton;
// 0x1000a56fc; encoding: v24@0:8@16
- (void)setShareButton:(id)arg1;
// 0x1000a5710; encoding: @16@0:8
- (id)line;
// 0x1000a5730; encoding: v24@0:8@16
- (void)setLine:(id)arg1;
// 0x1000a5744; encoding: @16@0:8
- (id)chooseEpisodeTv;
// 0x1000a5764; encoding: v24@0:8@16
- (void)setChooseEpisodeTv:(id)arg1;
// 0x1000a5778; encoding: @16@0:8
- (id)showMoreButton;
// 0x1000a5798; encoding: v24@0:8@16
- (void)setShowMoreButton:(id)arg1;
// 0x1000a57ac; encoding: @16@0:8
- (id)chooseSourceView;
// 0x1000a57cc; encoding: v24@0:8@16
- (void)setChooseSourceView:(id)arg1;
// 0x1000a57e0; encoding: @16@0:8
- (id)sourceTv;
// 0x1000a5800; encoding: v24@0:8@16
- (void)setSourceTv:(id)arg1;
// 0x1000a5814; encoding: @16@0:8
- (id)episodeCountTv;
// 0x1000a5834; encoding: v24@0:8@16
- (void)setEpisodeCountTv:(id)arg1;
// 0x1000a5848; encoding: @16@0:8
- (id)changeSourceTv;
// 0x1000a5868; encoding: v24@0:8@16
- (void)setChangeSourceTv:(id)arg1;
// 0x1000a587c; encoding: @16@0:8
- (id)collectionView;
// 0x1000a588c; encoding: v24@0:8@16
- (void)setCollectionView:(id)arg1;
// 0x1000a58a0; encoding: @16@0:8
- (id)collectionLayout;
// 0x1000a58b0; encoding: v24@0:8@16
- (void)setCollectionLayout:(id)arg1;
// 0x1000a58c4; encoding: @16@0:8
- (id)nncadView;
// 0x1000a58d4; encoding: v24@0:8@16
- (void)setNncadView:(id)arg1;
// 0x1000a58e8; encoding: @16@0:8
- (id)recommendLabel;
// 0x1000a58f8; encoding: v24@0:8@16
- (void)setRecommendLabel:(id)arg1;
// 0x1000a590c; encoding: @16@0:8
- (id)adManager;
// 0x1000a591c; encoding: v24@0:8@16
- (void)setAdManager:(id)arg1;
// 0x1000a5930; encoding: B16@0:8
- (BOOL)settedAd;
// 0x1000a5940; encoding: v20@0:8B16
- (void)setSettedAd:(BOOL)arg1;
// 0x1000a5950; encoding: i16@0:8
- (int)sourceIndex;
// 0x1000a5960; encoding: v20@0:8i16
- (void)setSourceIndex:(int)arg1;
// 0x1000a5970; encoding: i16@0:8
- (int)episodeIndex;
// 0x1000a5980; encoding: v20@0:8i16
- (void)setEpisodeIndex:(int)arg1;
// 0x1000a5990; encoding: @16@0:8
- (id)rewardVideoAd;
// 0x1000a59a0; encoding: v24@0:8@16
- (void)setRewardVideoAd:(id)arg1;
// 0x1000a59b4; encoding: i16@0:8
- (int)adLoadType;
// 0x1000a59c4; encoding: v20@0:8i16
- (void)setAdLoadType:(int)arg1;
// 0x1000a59d4; encoding: B16@0:8
- (BOOL)adShowEnough;
// 0x1000a59e4; encoding: v20@0:8B16
- (void)setAdShowEnough:(BOOL)arg1;
// 0x1000a59f4; encoding: d16@0:8
- (double)adHeight;
// 0x1000a5a04; encoding: v24@0:8d16
- (void)setAdHeight:(double)arg1;
// 0x1000a5a14; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
