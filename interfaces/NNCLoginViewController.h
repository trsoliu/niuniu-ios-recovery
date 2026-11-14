// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c3410
@interface NNCLoginViewController : FSViewController <FSViewControllerDismissDelegate>

// property loginLabel: T@"UILabel",W,N,V_loginLabel
// property phoneBg: T@"UIImageView",W,N,V_phoneBg
// property pwdBg: T@"UIImageView",W,N,V_pwdBg
// property secureButton: T@"UIButton",W,N,V_secureButton
// property forgetButton: T@"UIButton",W,N,V_forgetButton
// property regButtn: T@"UIButton",W,N,V_regButtn
// property phoneField: T@"UITextField",W,N,V_phoneField
// property pwdField: T@"UITextField",W,N,V_pwdField
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x100052668; encoding: v16@0:8
- (void)viewDidLoad;
// 0x100052c98; encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// 0x100052ce0; encoding: v16@0:8
- (void)createView;
// 0x100052dc8; encoding: v20@0:8B16
- (void)viewWillDisappear:(BOOL)arg1;
// 0x100052e2c; encoding: v32@0:8@16@24
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
// 0x100052e60; encoding: v24@0:8@16
- (void)regSelector:(id)arg1;
// 0x100052ee4; encoding: v24@0:8@16
- (void)forgetSelector:(id)arg1;
// 0x100052f68; encoding: v24@0:8@16
- (void)nextSelector:(id)arg1;
// 0x100053468; encoding: v24@0:8@16
- (void)secureSelector:(id)arg1;
// 0x100053514; encoding: v24@0:8@16
- (void)closeSelector:(id)arg1;
// 0x100053554; encoding: v28@0:8@16B24
- (void)viewControllerDidDismiss:(id)arg1 cancelled:(BOOL)arg2;
// 0x1000535f4; encoding: q16@0:8
- (long long)preferredStatusBarStyle;
// 0x1000535fc; encoding: @16@0:8
- (id)loginLabel;
// 0x10005361c; encoding: v24@0:8@16
- (void)setLoginLabel:(id)arg1;
// 0x100053630; encoding: @16@0:8
- (id)phoneBg;
// 0x100053650; encoding: v24@0:8@16
- (void)setPhoneBg:(id)arg1;
// 0x100053664; encoding: @16@0:8
- (id)pwdBg;
// 0x100053684; encoding: v24@0:8@16
- (void)setPwdBg:(id)arg1;
// 0x100053698; encoding: @16@0:8
- (id)secureButton;
// 0x1000536b8; encoding: v24@0:8@16
- (void)setSecureButton:(id)arg1;
// 0x1000536cc; encoding: @16@0:8
- (id)forgetButton;
// 0x1000536ec; encoding: v24@0:8@16
- (void)setForgetButton:(id)arg1;
// 0x100053700; encoding: @16@0:8
- (id)regButtn;
// 0x100053720; encoding: v24@0:8@16
- (void)setRegButtn:(id)arg1;
// 0x100053734; encoding: @16@0:8
- (id)phoneField;
// 0x100053754; encoding: v24@0:8@16
- (void)setPhoneField:(id)arg1;
// 0x100053768; encoding: @16@0:8
- (id)pwdField;
// 0x100053788; encoding: v24@0:8@16
- (void)setPwdField:(id)arg1;
// 0x10005379c; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
