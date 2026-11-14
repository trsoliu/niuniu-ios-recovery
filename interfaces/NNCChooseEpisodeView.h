// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c5f80
@interface NNCChooseEpisodeView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

// property bgButton: T@"UIButton",&,N,V_bgButton
// property containerView: T@"UIView",&,N,V_containerView
// property orderButton: T@"UIButton",&,N,V_orderButton
// property titleLabel: T@"UILabel",&,N,V_titleLabel
// property closeButton: T@"UIButton",&,N,V_closeButton
// property scrollView: T@"UIScrollView",&,N,V_scrollView
// property selectedLine: T@"UIImageView",&,N,V_selectedLine
// property collectionView: T@"UICollectionView",&,N,V_collectionView
// property collectionLayout: T@"UICollectionViewFlowLayout",&,N,V_collectionLayout
// property selectedButton: T@"UIButton",W,N,V_selectedButton
// property groupIndex: Tq,N,V_groupIndex
// property currentSourceIndex: Ti,N,V_currentSourceIndex
// property currentEpisodeIndex: Ti,N,V_currentEpisodeIndex
// property nncisLocalSource: TB,N,V_nncisLocalSource
// property nncdownloadedEpisodeList: T@"NSMutableArray",&,N,V_nncdownloadedEpisodeList
// property videoBean: T@"NNCFileBean",&,N,V_videoBean
// property delegate: T@"<NNCChooseEpisodeViewDelegate>",W,N,V_delegate
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000d9138; encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(CGRect)arg1;
// 0x1000d9188; encoding: v16@0:8
- (void)createView;
// 0x1000d9d58; encoding: v24@0:8@16
- (void)setVideoBean:(id)arg1;
// 0x1000da5f0; encoding: v16@0:8
- (void)layoutSubviews;
// 0x1000da864; encoding: v16@0:8
- (void)layoutButtom;
// 0x1000da9c0; encoding: q32@0:8@16q24
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
// 0x1000daad8; encoding: @32@0:8@16@24
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
// 0x1000dada4; encoding: v32@0:8@16@24
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
// 0x1000daf54; encoding: i16@0:8
- (int)currentSourceIndex;
// 0x1000daf64; encoding: v20@0:8i16
- (void)setCurrentSourceIndex:(int)arg1;
// 0x1000daf74; encoding: i16@0:8
- (int)currentEpisodeIndex;
// 0x1000daf84; encoding: v20@0:8i16
- (void)setCurrentEpisodeIndex:(int)arg1;
// 0x1000daf94; encoding: B16@0:8
- (BOOL)nncisLocalSource;
// 0x1000dafa4; encoding: v20@0:8B16
- (void)setNncisLocalSource:(BOOL)arg1;
// 0x1000dafb4; encoding: @16@0:8
- (id)nncdownloadedEpisodeList;
// 0x1000dafc4; encoding: v24@0:8@16
- (void)setNncdownloadedEpisodeList:(id)arg1;
// 0x1000dafd8; encoding: @16@0:8
- (id)videoBean;
// 0x1000dafe8; encoding: @16@0:8
- (id)delegate;
// 0x1000db008; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x1000db01c; encoding: @16@0:8
- (id)bgButton;
// 0x1000db02c; encoding: v24@0:8@16
- (void)setBgButton:(id)arg1;
// 0x1000db040; encoding: @16@0:8
- (id)containerView;
// 0x1000db050; encoding: v24@0:8@16
- (void)setContainerView:(id)arg1;
// 0x1000db064; encoding: @16@0:8
- (id)orderButton;
// 0x1000db074; encoding: v24@0:8@16
- (void)setOrderButton:(id)arg1;
// 0x1000db088; encoding: @16@0:8
- (id)titleLabel;
// 0x1000db098; encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// 0x1000db0ac; encoding: @16@0:8
- (id)closeButton;
// 0x1000db0bc; encoding: v24@0:8@16
- (void)setCloseButton:(id)arg1;
// 0x1000db0d0; encoding: @16@0:8
- (id)scrollView;
// 0x1000db0e0; encoding: v24@0:8@16
- (void)setScrollView:(id)arg1;
// 0x1000db0f4; encoding: @16@0:8
- (id)selectedLine;
// 0x1000db104; encoding: v24@0:8@16
- (void)setSelectedLine:(id)arg1;
// 0x1000db118; encoding: @16@0:8
- (id)collectionView;
// 0x1000db128; encoding: v24@0:8@16
- (void)setCollectionView:(id)arg1;
// 0x1000db13c; encoding: @16@0:8
- (id)collectionLayout;
// 0x1000db14c; encoding: v24@0:8@16
- (void)setCollectionLayout:(id)arg1;
// 0x1000db160; encoding: @16@0:8
- (id)selectedButton;
// 0x1000db180; encoding: v24@0:8@16
- (void)setSelectedButton:(id)arg1;
// 0x1000db194; encoding: q16@0:8
- (long long)groupIndex;
// 0x1000db1a4; encoding: v24@0:8q16
- (void)setGroupIndex:(long long)arg1;
// 0x1000db1b4; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
