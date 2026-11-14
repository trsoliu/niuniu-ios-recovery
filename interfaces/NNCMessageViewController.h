// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c6610
@interface NNCMessageViewController : BaseViewController <UIScrollViewDelegate>

// property headerView: T@"UIView",&,N,V_headerView
// property scrollView: T@"UIScrollView",&,N,V_scrollView
// property selectedLine: T@"UIImageView",&,N,V_selectedLine
// property currentIndex: Ti,N,V_currentIndex
// property selectedButton: T@"UIButton",W,N,V_selectedButton
// property leftRedView: T@"UIImageView",&,N,V_leftRedView
// property rigthRedView: T@"UIImageView",&,N,V_rigthRedView
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000ed4b4; encoding: v16@0:8
- (void)backButtonAction;
// 0x1000ed50c; encoding: v16@0:8
- (void)viewDidLoad;
// 0x1000ed62c; encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// 0x1000ed68c; encoding: v20@0:8B16
- (void)viewWillAppear:(BOOL)arg1;
// 0x1000ed758; encoding: v16@0:8
- (void)createView;
// 0x1000ee4dc; encoding: v16@0:8
- (void)nncupdateRedFlag;
// 0x1000ee680; encoding: v24@0:8@16
- (void)topButtonSelected:(id)arg1;
// 0x1000ee764; encoding: v24@0:8@16
- (void)scrollViewDidScroll:(id)arg1;
// 0x1000ee8e4; encoding: v24@0:8@16
- (void)scrollViewDidEndDecelerating:(id)arg1;
// 0x1000ee97c; encoding: q16@0:8
- (long long)preferredStatusBarStyle;
// 0x1000ee984; encoding: @16@0:8
- (id)headerView;
// 0x1000ee994; encoding: v24@0:8@16
- (void)setHeaderView:(id)arg1;
// 0x1000ee9a8; encoding: @16@0:8
- (id)scrollView;
// 0x1000ee9b8; encoding: v24@0:8@16
- (void)setScrollView:(id)arg1;
// 0x1000ee9cc; encoding: @16@0:8
- (id)selectedLine;
// 0x1000ee9dc; encoding: v24@0:8@16
- (void)setSelectedLine:(id)arg1;
// 0x1000ee9f0; encoding: i16@0:8
- (int)currentIndex;
// 0x1000eea00; encoding: v20@0:8i16
- (void)setCurrentIndex:(int)arg1;
// 0x1000eea10; encoding: @16@0:8
- (id)selectedButton;
// 0x1000eea30; encoding: v24@0:8@16
- (void)setSelectedButton:(id)arg1;
// 0x1000eea44; encoding: @16@0:8
- (id)leftRedView;
// 0x1000eea54; encoding: v24@0:8@16
- (void)setLeftRedView:(id)arg1;
// 0x1000eea68; encoding: @16@0:8
- (id)rigthRedView;
// 0x1000eea78; encoding: v24@0:8@16
- (void)setRigthRedView:(id)arg1;
// 0x1000eea8c; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
