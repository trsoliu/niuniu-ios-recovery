// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c6340
@interface NNCDownloadEpisodeView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

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
// property nncselectAllButton: T@"UIButton",&,N,V_nncselectAllButton
// property downloadButton: T@"UIButton",&,N,V_downloadButton
// property seeDownloadButton: T@"UIButton",&,N,V_seeDownloadButton
// property selectedItemList: T@"NSMutableArray",&,N,V_selectedItemList
// property currentSourceIndex: Ti,N,V_currentSourceIndex
// property currentEpisodeIndex: Ti,N,V_currentEpisodeIndex
// property videoBean: T@"NNCFileBean",&,N,V_videoBean
// property nncdownloadedEpisodeList: T@"NSMutableArray",&,N,V_nncdownloadedEpisodeList
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000e26ac; encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(CGRect)arg1;
// 0x1000e26fc; encoding: v16@0:8
- (void)createView;
// 0x1000e3944; encoding: v24@0:8@16
- (void)setVideoBean:(id)arg1;
// 0x1000e41e0; encoding: v16@0:8
- (void)layoutSubviews;
// 0x1000e4868; encoding: v16@0:8
- (void)layoutButtom;
// 0x1000e49c8; encoding: q32@0:8@16q24
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
// 0x1000e4a8c; encoding: @32@0:8@16@24
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
// 0x1000e4d78; encoding: v32@0:8@16@24
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
// 0x1000e518c; encoding: v24@0:8@16
- (void)selectAllSelector:(id)arg1;
// 0x1000e5464; encoding: v24@0:8@16
- (void)downloadSelector:(id)arg1;
// 0x1000e5574; encoding: v24@0:8@16
- (void)downloadSingle:(id)arg1;
// 0x1000e5a78; encoding: v24@0:8@16
- (void)seeDownloadSelector:(id)arg1;
// 0x1000e5b08; encoding: i16@0:8
- (int)currentSourceIndex;
// 0x1000e5b18; encoding: v20@0:8i16
- (void)setCurrentSourceIndex:(int)arg1;
// 0x1000e5b28; encoding: i16@0:8
- (int)currentEpisodeIndex;
// 0x1000e5b38; encoding: v20@0:8i16
- (void)setCurrentEpisodeIndex:(int)arg1;
// 0x1000e5b48; encoding: @16@0:8
- (id)videoBean;
// 0x1000e5b58; encoding: @16@0:8
- (id)nncdownloadedEpisodeList;
// 0x1000e5b68; encoding: v24@0:8@16
- (void)setNncdownloadedEpisodeList:(id)arg1;
// 0x1000e5b7c; encoding: @16@0:8
- (id)bgButton;
// 0x1000e5b8c; encoding: v24@0:8@16
- (void)setBgButton:(id)arg1;
// 0x1000e5ba0; encoding: @16@0:8
- (id)containerView;
// 0x1000e5bb0; encoding: v24@0:8@16
- (void)setContainerView:(id)arg1;
// 0x1000e5bc4; encoding: @16@0:8
- (id)orderButton;
// 0x1000e5bd4; encoding: v24@0:8@16
- (void)setOrderButton:(id)arg1;
// 0x1000e5be8; encoding: @16@0:8
- (id)titleLabel;
// 0x1000e5bf8; encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// 0x1000e5c0c; encoding: @16@0:8
- (id)closeButton;
// 0x1000e5c1c; encoding: v24@0:8@16
- (void)setCloseButton:(id)arg1;
// 0x1000e5c30; encoding: @16@0:8
- (id)scrollView;
// 0x1000e5c40; encoding: v24@0:8@16
- (void)setScrollView:(id)arg1;
// 0x1000e5c54; encoding: @16@0:8
- (id)selectedLine;
// 0x1000e5c64; encoding: v24@0:8@16
- (void)setSelectedLine:(id)arg1;
// 0x1000e5c78; encoding: @16@0:8
- (id)collectionView;
// 0x1000e5c88; encoding: v24@0:8@16
- (void)setCollectionView:(id)arg1;
// 0x1000e5c9c; encoding: @16@0:8
- (id)collectionLayout;
// 0x1000e5cac; encoding: v24@0:8@16
- (void)setCollectionLayout:(id)arg1;
// 0x1000e5cc0; encoding: @16@0:8
- (id)selectedButton;
// 0x1000e5ce0; encoding: v24@0:8@16
- (void)setSelectedButton:(id)arg1;
// 0x1000e5cf4; encoding: q16@0:8
- (long long)groupIndex;
// 0x1000e5d04; encoding: v24@0:8q16
- (void)setGroupIndex:(long long)arg1;
// 0x1000e5d14; encoding: @16@0:8
- (id)nncselectAllButton;
// 0x1000e5d24; encoding: v24@0:8@16
- (void)setNncselectAllButton:(id)arg1;
// 0x1000e5d38; encoding: @16@0:8
- (id)downloadButton;
// 0x1000e5d48; encoding: v24@0:8@16
- (void)setDownloadButton:(id)arg1;
// 0x1000e5d5c; encoding: @16@0:8
- (id)seeDownloadButton;
// 0x1000e5d6c; encoding: v24@0:8@16
- (void)setSeeDownloadButton:(id)arg1;
// 0x1000e5d80; encoding: @16@0:8
- (id)selectedItemList;
// 0x1000e5d90; encoding: v24@0:8@16
- (void)setSelectedItemList:(id)arg1;
// 0x1000e5da4; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
