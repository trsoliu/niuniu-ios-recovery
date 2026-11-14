// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2d30
@interface NNCDownloadViewController : BaseViewController <UIScrollViewDelegate, NNCDownloadRefreshDelegate>

// property headerView: T@"UIView",&,N,V_headerView
// property scrollView: T@"UIScrollView",&,N,V_scrollView
// property selectedLine: T@"UIImageView",&,N,V_selectedLine
// property currentIndex: Ti,N,V_currentIndex
// property selectedButton: T@"UIButton",W,N,V_selectedButton
// property isEditMode: TB,N,V_isEditMode
// property rightItem: T@"UIBarButtonItem",&,N,V_rightItem
// property downloadedView: T@"NNCDownloadView",&,N,V_downloadedView
// property downloadingView: T@"NNCDownloadView",&,N,V_downloadingView
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x100036cec; encoding: v16@0:8
- (void)backButtonAction;
// 0x100036d44; encoding: v16@0:8
- (void)viewDidLoad;
// 0x100037004; encoding: v20@0:8B16
- (void)viewWillAppear:(BOOL)arg1;
// 0x100037074; encoding: v20@0:8B16
- (void)viewDidDisappear:(BOOL)arg1;
// 0x1000370d8; encoding: v16@0:8
- (void)nncchangeEditMode;
// 0x1000371a8; encoding: @16@0:8
- (id)getRightTitle;
// 0x1000371d4; encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// 0x10003723c; encoding: v16@0:8
- (void)createView;
// 0x100037c20; encoding: v24@0:8@16
- (void)topButtonSelected:(id)arg1;
// 0x100037cb0; encoding: v24@0:8@16
- (void)scrollViewDidScroll:(id)arg1;
// 0x100037e30; encoding: v24@0:8@16
- (void)scrollViewDidEndDecelerating:(id)arg1;
// 0x100037e34; encoding: v16@0:8
- (void)nncdownloadStatusNeedRefresh;
// 0x100037e88; encoding: q16@0:8
- (long long)preferredStatusBarStyle;
// 0x100037e90; encoding: @16@0:8
- (id)headerView;
// 0x100037ea0; encoding: v24@0:8@16
- (void)setHeaderView:(id)arg1;
// 0x100037eb4; encoding: @16@0:8
- (id)scrollView;
// 0x100037ec4; encoding: v24@0:8@16
- (void)setScrollView:(id)arg1;
// 0x100037ed8; encoding: @16@0:8
- (id)selectedLine;
// 0x100037ee8; encoding: v24@0:8@16
- (void)setSelectedLine:(id)arg1;
// 0x100037efc; encoding: i16@0:8
- (int)currentIndex;
// 0x100037f0c; encoding: v20@0:8i16
- (void)setCurrentIndex:(int)arg1;
// 0x100037f1c; encoding: @16@0:8
- (id)selectedButton;
// 0x100037f3c; encoding: v24@0:8@16
- (void)setSelectedButton:(id)arg1;
// 0x100037f50; encoding: B16@0:8
- (BOOL)isEditMode;
// 0x100037f60; encoding: v20@0:8B16
- (void)setIsEditMode:(BOOL)arg1;
// 0x100037f70; encoding: @16@0:8
- (id)rightItem;
// 0x100037f80; encoding: v24@0:8@16
- (void)setRightItem:(id)arg1;
// 0x100037f94; encoding: @16@0:8
- (id)downloadedView;
// 0x100037fa4; encoding: v24@0:8@16
- (void)setDownloadedView:(id)arg1;
// 0x100037fb8; encoding: @16@0:8
- (id)downloadingView;
// 0x100037fc8; encoding: v24@0:8@16
- (void)setDownloadingView:(id)arg1;
// 0x100037fdc; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
