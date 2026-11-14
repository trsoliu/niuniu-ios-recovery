// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c55d0
@interface VideoPlayErrorView : UIView <SJControlLayer>

// property descLabel: T@"UILabel",W,N,V_descLabel
// property changeSourceButton: T@"UIButton",W,N,V_changeSourceButton
// property retryButton: T@"UIButton",W,N,V_retryButton
// property reportButton: T@"UIButton",W,N,V_reportButton
// property delegate: T@"<VideoPlayErrorViewDelegate>",W,N,V_delegate
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000c42c4; encoding: v16@0:8
- (void)awakeFromNib;
// 0x1000c4474; encoding: v24@0:8@16
- (void)backSelector:(id)arg1;
// 0x1000c44a4; encoding: v24@0:8@16
- (void)reportSelector:(id)arg1;
// 0x1000c44d4; encoding: v24@0:8@16
- (void)retrySelector:(id)arg1;
// 0x1000c4504; encoding: v24@0:8@16
- (void)changeSourceSelector:(id)arg1;
// 0x1000c4534; encoding: @16@0:8
- (id)controlView;
// 0x1000c4538; encoding: v24@0:8@16
- (void)installedControlViewToVideoPlayer:(id)arg1;
// 0x1000c453c; encoding: v16@0:8
- (void)restartControlLayer;
// 0x1000c47e4; encoding: v16@0:8
- (void)exitControlLayer;
// 0x1000c4820; encoding: B16@0:8
- (BOOL)restarted;
// 0x1000c4830; encoding: @16@0:8
- (id)delegate;
// 0x1000c4850; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x1000c4864; encoding: @16@0:8
- (id)descLabel;
// 0x1000c4884; encoding: v24@0:8@16
- (void)setDescLabel:(id)arg1;
// 0x1000c4898; encoding: @16@0:8
- (id)changeSourceButton;
// 0x1000c48b8; encoding: v24@0:8@16
- (void)setChangeSourceButton:(id)arg1;
// 0x1000c48cc; encoding: @16@0:8
- (id)retryButton;
// 0x1000c48ec; encoding: v24@0:8@16
- (void)setRetryButton:(id)arg1;
// 0x1000c4900; encoding: @16@0:8
- (id)reportButton;
// 0x1000c4920; encoding: v24@0:8@16
- (void)setReportButton:(id)arg1;
// 0x1000c4934; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
