// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c5c60
@interface NNCChooseSourceHeaderView : UIView <UITableViewDelegate, UITableViewDataSource>

// property bgButton: T@"UIButton",&,N,V_bgButton
// property containerView: T@"UIView",&,N,V_containerView
// property titleLabel: T@"UILabel",&,N,V_titleLabel
// property closeButton: T@"UIButton",&,N,V_closeButton
// property videoBean: T@"NNCFileBean",&,N,V_videoBean
// property currentIndex: Ti,N,V_currentIndex
// property tableView: T@"UITableView",&,N,V_tableView
// property chooseSourceBlock: T@?,C,N,V_chooseSourceBlock
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000d2b54; encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(CGRect)arg1;
// 0x1000d2ba4; encoding: v16@0:8
- (void)createView;
// 0x1000d327c; encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// 0x1000d32d8; encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// 0x1000d33cc; encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// 0x1000d33d8; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
// 0x1000d33f4; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
// 0x1000d33fc; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// 0x1000d3418; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
// 0x1000d3424; encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// 0x1000d34a8; encoding: v16@0:8
- (void)layoutSubviews;
// 0x1000d3788; encoding: @16@0:8
- (id)videoBean;
// 0x1000d3798; encoding: v24@0:8@16
- (void)setVideoBean:(id)arg1;
// 0x1000d37ac; encoding: i16@0:8
- (int)currentIndex;
// 0x1000d37bc; encoding: v20@0:8i16
- (void)setCurrentIndex:(int)arg1;
// 0x1000d37cc; encoding: @16@0:8
- (id)tableView;
// 0x1000d37dc; encoding: v24@0:8@16
- (void)setTableView:(id)arg1;
// 0x1000d37f0; encoding: @?16@0:8
- (id /* block signature unavailable */)chooseSourceBlock;
// 0x1000d3800; encoding: v24@0:8@?16
- (void)setChooseSourceBlock:(id /* block signature unavailable */)arg1;
// 0x1000d380c; encoding: @16@0:8
- (id)bgButton;
// 0x1000d381c; encoding: v24@0:8@16
- (void)setBgButton:(id)arg1;
// 0x1000d3830; encoding: @16@0:8
- (id)containerView;
// 0x1000d3840; encoding: v24@0:8@16
- (void)setContainerView:(id)arg1;
// 0x1000d3854; encoding: @16@0:8
- (id)titleLabel;
// 0x1000d3864; encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// 0x1000d3878; encoding: @16@0:8
- (id)closeButton;
// 0x1000d3888; encoding: v24@0:8@16
- (void)setCloseButton:(id)arg1;
// 0x1000d389c; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
