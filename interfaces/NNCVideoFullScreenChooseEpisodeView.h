// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c51c0
@interface NNCVideoFullScreenChooseEpisodeView : UIView <UITableViewDelegate, UITableViewDataSource, UICollectionViewDataSource, UICollectionViewDelegate, SJControlLayer>

// property videoPlayer: T@"SJBaseVideoPlayer",W,N,V_videoPlayer
// property rightContainerView: T@"UIView",&,N,V_rightContainerView
// property tableView: T@"UITableView",&,N,V_tableView
// property collectionView: T@"UICollectionView",&,N,V_collectionView
// property collectionLayout: T@"UICollectionViewFlowLayout",&,N,V_collectionLayout
// property backButton: T@"UIButton",&,N,V_backButton
// property titleLabel: T@"UILabel",&,N,V_titleLabel
// property countLabel: T@"UILabel",&,N,V_countLabel
// property showMoreButton: T@"UIButton",&,N,V_showMoreButton
// property groupIndex: Tq,N,V_groupIndex
// property groupTitles: T@"NSMutableArray",&,N,V_groupTitles
// property delegate: T@"<NNCVideoFullScreenChooseEpisodeViewDelegate>",W,N,V_delegate
// property moreDelegate: T@"<SJMoreSettingControlLayerDelegate>",W,N,V_moreDelegate
// property currentSourceIndex: Ti,N,V_currentSourceIndex
// property currentEpisodeIndex: Ti,N,V_currentEpisodeIndex
// property videoBean: T@"NNCFileBean",&,N,V_videoBean
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000bc084; encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(CGRect)arg1;
// 0x1000bc0fc; encoding: @40@0:8{CGPoint=dd}16@32
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
// 0x1000bc164; encoding: v16@0:8
- (void)setupView;
// 0x1000bd060; encoding: v16@0:8
- (void)refreshView;
// 0x1000bd6ac; encoding: @16@0:8
- (id)controlView;
// 0x1000bd6b0; encoding: v24@0:8@16
- (void)installedControlViewToVideoPlayer:(id)arg1;
// 0x1000bd6d4; encoding: v16@0:8
- (void)restartControlLayer;
// 0x1000bd798; encoding: v16@0:8
- (void)exitControlLayer;
// 0x1000bd890; encoding: B48@0:8@16Q24{CGPoint=dd}32
- (BOOL)videoPlayer:(id)arg1 gestureRecognizerShouldTrigger:(unsigned long long)arg2 location:(CGPoint)arg3;
// 0x1000bd950; encoding: B24@0:8@16
- (BOOL)canTriggerRotationOfVideoPlayer:(id)arg1;
// 0x1000bd958; encoding: q32@0:8@16q24
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
// 0x1000bda18; encoding: @32@0:8@16@24
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
// 0x1000bdb88; encoding: v32@0:8@16@24
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
// 0x1000bdc44; encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// 0x1000bdc80; encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// 0x1000bde04; encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// 0x1000bde10; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
// 0x1000bde2c; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
// 0x1000bde38; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// 0x1000bde54; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
// 0x1000bde60; encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// 0x1000be114; encoding: B16@0:8
- (BOOL)restarted;
// 0x1000be124; encoding: @16@0:8
- (id)delegate;
// 0x1000be144; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x1000be158; encoding: @16@0:8
- (id)moreDelegate;
// 0x1000be178; encoding: v24@0:8@16
- (void)setMoreDelegate:(id)arg1;
// 0x1000be18c; encoding: i16@0:8
- (int)currentSourceIndex;
// 0x1000be19c; encoding: v20@0:8i16
- (void)setCurrentSourceIndex:(int)arg1;
// 0x1000be1ac; encoding: i16@0:8
- (int)currentEpisodeIndex;
// 0x1000be1bc; encoding: v20@0:8i16
- (void)setCurrentEpisodeIndex:(int)arg1;
// 0x1000be1cc; encoding: @16@0:8
- (id)videoBean;
// 0x1000be1dc; encoding: v24@0:8@16
- (void)setVideoBean:(id)arg1;
// 0x1000be1f0; encoding: @16@0:8
- (id)videoPlayer;
// 0x1000be210; encoding: v24@0:8@16
- (void)setVideoPlayer:(id)arg1;
// 0x1000be224; encoding: @16@0:8
- (id)rightContainerView;
// 0x1000be234; encoding: v24@0:8@16
- (void)setRightContainerView:(id)arg1;
// 0x1000be248; encoding: @16@0:8
- (id)tableView;
// 0x1000be258; encoding: v24@0:8@16
- (void)setTableView:(id)arg1;
// 0x1000be26c; encoding: @16@0:8
- (id)collectionView;
// 0x1000be27c; encoding: v24@0:8@16
- (void)setCollectionView:(id)arg1;
// 0x1000be290; encoding: @16@0:8
- (id)collectionLayout;
// 0x1000be2a0; encoding: v24@0:8@16
- (void)setCollectionLayout:(id)arg1;
// 0x1000be2b4; encoding: @16@0:8
- (id)backButton;
// 0x1000be2c4; encoding: v24@0:8@16
- (void)setBackButton:(id)arg1;
// 0x1000be2d8; encoding: @16@0:8
- (id)titleLabel;
// 0x1000be2e8; encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// 0x1000be2fc; encoding: @16@0:8
- (id)countLabel;
// 0x1000be30c; encoding: v24@0:8@16
- (void)setCountLabel:(id)arg1;
// 0x1000be320; encoding: @16@0:8
- (id)showMoreButton;
// 0x1000be330; encoding: v24@0:8@16
- (void)setShowMoreButton:(id)arg1;
// 0x1000be344; encoding: q16@0:8
- (long long)groupIndex;
// 0x1000be354; encoding: v24@0:8q16
- (void)setGroupIndex:(long long)arg1;
// 0x1000be364; encoding: @16@0:8
- (id)groupTitles;
// 0x1000be374; encoding: v24@0:8@16
- (void)setGroupTitles:(id)arg1;
// 0x1000be388; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
