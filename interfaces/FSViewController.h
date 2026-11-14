// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c59e0
@interface FSViewController : UIViewController

// property dismissDelegate: T@"<FSViewControllerDismissDelegate>",W,N,V_dismissDelegate
// property isModalView: TB,N,V_isModalView
// property dismissAnimated: TB,N,V_dismissAnimated
// property isViewAppearing: TB,R,N,V_isViewAppearing
// property autoresizesForKeyboard: TB,N,V_autoresizesForKeyboard

// 0x1000ca5e4; encoding: @16@0:8
- (id)init;
// 0x1000ca644; encoding: @24@0:8@16
- (id)initWithCoder:(id)arg1;
// 0x1000ca6a4; encoding: @32@0:8@16@24
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
// 0x1000ca704; encoding: v16@0:8
- (void)dealloc;
// 0x1000ca74c; encoding: v16@0:8
- (void)viewDidLoad;
// 0x1000ca780; encoding: v20@0:8B16
- (void)viewWillAppear:(BOOL)arg1;
// 0x1000ca7d0; encoding: v20@0:8B16
- (void)viewDidDisappear:(BOOL)arg1;
// 0x1000ca81c; encoding: v16@0:8
- (void)didReceiveMemoryWarning;
// 0x1000ca850; encoding: v20@0:8B16
- (void)dismissWithCancelled:(BOOL)arg1;
// 0x1000ca990; encoding: v16@0:8
- (void)done;
// 0x1000ca998; encoding: v16@0:8
- (void)cancel;
// 0x1000ca9a0; encoding: v20@0:8B16
- (void)setAutoresizesForKeyboard:(BOOL)arg1;
// 0x1000caba4; encoding: v24@0:8@16
- (void)keyboardWillShow:(id)arg1;
// 0x1000cabec; encoding: v24@0:8@16
- (void)keyboardDidShow:(id)arg1;
// 0x1000cac34; encoding: v24@0:8@16
- (void)keyboardWillHide:(id)arg1;
// 0x1000cac7c; encoding: v24@0:8@16
- (void)keyboardDidHide:(id)arg1;
// 0x1000cacc4; encoding: v28@0:8@16B24
- (void)resizedForKeyboard:(id)arg1 appearing:(BOOL)arg2;
// 0x1000cae1c; encoding: v28@0:8@16B24
- (void)resizingForKeyboard:(id)arg1 appearing:(BOOL)arg2;
// 0x1000cb028; encoding: v96@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48d80q88
- (void)keyboardWillAppearWithBeginFrame:(CGRect)arg1 endFrame:(CGRect)arg2 animationDuration:(double)arg3 animationCurve:(long long)arg4;
// 0x1000cb02c; encoding: v80@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48
- (void)keyboardDidAppearWithBeginFrame:(CGRect)arg1 endFrame:(CGRect)arg2;
// 0x1000cb030; encoding: v96@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48d80q88
- (void)keyboardWillDisappearWithBeginFrame:(CGRect)arg1 endFrame:(CGRect)arg2 animationDuration:(double)arg3 animationCurve:(long long)arg4;
// 0x1000cb034; encoding: v80@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48
- (void)keyboardDidDisappearWithBeginFrame:(CGRect)arg1 endFrame:(CGRect)arg2;
// 0x1000cb038; encoding: B24@0:8q16
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
// 0x1000cb044; encoding: @16@0:8
- (id)dismissDelegate;
// 0x1000cb064; encoding: v24@0:8@16
- (void)setDismissDelegate:(id)arg1;
// 0x1000cb078; encoding: B16@0:8
- (BOOL)isModalView;
// 0x1000cb088; encoding: v20@0:8B16
- (void)setIsModalView:(BOOL)arg1;
// 0x1000cb098; encoding: B16@0:8
- (BOOL)dismissAnimated;
// 0x1000cb0a8; encoding: v20@0:8B16
- (void)setDismissAnimated:(BOOL)arg1;
// 0x1000cb0b8; encoding: B16@0:8
- (BOOL)isViewAppearing;
// 0x1000cb0c8; encoding: B16@0:8
- (BOOL)autoresizesForKeyboard;
// 0x1000cb0d8; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
