// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c33c0
@interface VerifyView : UIView

// property bgView: T@"UIImageView",&,N,V_bgView
// property webView: T@"NetWebView",&,N,V_webView
// property closeButton: T@"UIButton",&,N,V_closeButton
// property handler: T@"NetURLSchemeHandler",&,N,V_handler
// property type: Ti,N,V_type

// 0x100051d88; encoding: @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
// 0x100052200; encoding: v20@0:8i16
- (void)setType:(int)arg1;
// 0x100052244; encoding: v24@0:8@16
- (void)loadUrl:(id)arg1;
// 0x1000522d4; encoding: v16@0:8
- (void)layoutSubviews;
// 0x100052560; encoding: i16@0:8
- (int)type;
// 0x100052570; encoding: @16@0:8
- (id)bgView;
// 0x100052580; encoding: v24@0:8@16
- (void)setBgView:(id)arg1;
// 0x100052594; encoding: @16@0:8
- (id)webView;
// 0x1000525a4; encoding: v24@0:8@16
- (void)setWebView:(id)arg1;
// 0x1000525b8; encoding: @16@0:8
- (id)closeButton;
// 0x1000525c8; encoding: v24@0:8@16
- (void)setCloseButton:(id)arg1;
// 0x1000525dc; encoding: @16@0:8
- (id)handler;
// 0x1000525ec; encoding: v24@0:8@16
- (void)setHandler:(id)arg1;
// 0x100052600; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
