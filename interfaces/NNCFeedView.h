// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c5c10
@interface NNCFeedView : FSView <UITextViewDelegate>

// property bgView: T@"UIImageView",&,N,V_bgView
// property containerView: T@"UIView",&,N,V_containerView
// property titleLabel: T@"UILabel",&,N,V_titleLabel
// property closeButton: T@"UIButton",&,N,V_closeButton
// property selectedButton: T@"UIButton",W,N,V_selectedButton
// property textView: T@"UITextView",&,N,V_textView
// property holderTextView: T@"UITextView",&,N,V_holderTextView
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000d0b3c; encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(CGRect)arg1;
// 0x1000d0bbc; encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)setupView:(CGRect)arg1;
// 0x1000d1e8c; encoding: v16@0:8
- (void)feedback;
// 0x1000d2290; encoding: @16@0:8
- (id)getPlaceHolder;
// 0x1000d2320; encoding: v24@0:8@16
- (void)showInView:(id)arg1;
// 0x1000d2454; encoding: v16@0:8
- (void)dismiss;
// 0x1000d254c; encoding: B48@0:8@16{_NSRange=QQ}24@40
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
// 0x1000d25a4; encoding: v24@0:8@16
- (void)textViewDidChange:(id)arg1;
// 0x1000d281c; encoding: v96@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48d80q88
- (void)keyboardWillAppearWithBeginFrame:(CGRect)arg1 endFrame:(CGRect)arg2 animationDuration:(double)arg3 animationCurve:(long long)arg4;
// 0x1000d28ec; encoding: v96@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48d80q88
- (void)keyboardWillDisappearWithBeginFrame:(CGRect)arg1 endFrame:(CGRect)arg2 animationDuration:(double)arg3 animationCurve:(long long)arg4;
// 0x1000d29a8; encoding: @16@0:8
- (id)bgView;
// 0x1000d29b8; encoding: v24@0:8@16
- (void)setBgView:(id)arg1;
// 0x1000d29cc; encoding: @16@0:8
- (id)containerView;
// 0x1000d29dc; encoding: v24@0:8@16
- (void)setContainerView:(id)arg1;
// 0x1000d29f0; encoding: @16@0:8
- (id)titleLabel;
// 0x1000d2a00; encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// 0x1000d2a14; encoding: @16@0:8
- (id)closeButton;
// 0x1000d2a24; encoding: v24@0:8@16
- (void)setCloseButton:(id)arg1;
// 0x1000d2a38; encoding: @16@0:8
- (id)selectedButton;
// 0x1000d2a58; encoding: v24@0:8@16
- (void)setSelectedButton:(id)arg1;
// 0x1000d2a6c; encoding: @16@0:8
- (id)textView;
// 0x1000d2a7c; encoding: v24@0:8@16
- (void)setTextView:(id)arg1;
// 0x1000d2a90; encoding: @16@0:8
- (id)holderTextView;
// 0x1000d2aa0; encoding: v24@0:8@16
- (void)setHolderTextView:(id)arg1;
// 0x1000d2ab4; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
