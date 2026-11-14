// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c25b0
@interface NNCVideoStopNoticeView : UIView

// property desLabel: T@"UILabel",&,N,V_desLabel
// property interuptButton: T@"UIButton",&,N,V_interuptButton
// property timer: T@"NSTimer",&,N,V_timer
// property countDown: Tq,N,V_countDown
// property delegate: T@"<NNCVideoStopNoticeViewDelegate>",W,N,V_delegate

// 0x10001cb88; encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(CGRect)arg1;
// 0x10001cf98; encoding: v24@0:8@16
- (void)showInView:(id)arg1;
// 0x10001d24c; encoding: v16@0:8
- (void)nnconRotationEnd;
// 0x10001d2ac; encoding: v24@0:8@16
- (void)timerSelector:(id)arg1;
// 0x10001d3bc; encoding: v16@0:8
- (void)dealloc;
// 0x10001d400; encoding: v16@0:8
- (void)stopTimer;
// 0x10001d468; encoding: @16@0:8
- (id)delegate;
// 0x10001d488; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x10001d49c; encoding: @16@0:8
- (id)desLabel;
// 0x10001d4ac; encoding: v24@0:8@16
- (void)setDesLabel:(id)arg1;
// 0x10001d4c0; encoding: @16@0:8
- (id)interuptButton;
// 0x10001d4d0; encoding: v24@0:8@16
- (void)setInteruptButton:(id)arg1;
// 0x10001d4e4; encoding: @16@0:8
- (id)timer;
// 0x10001d4f4; encoding: v24@0:8@16
- (void)setTimer:(id)arg1;
// 0x10001d508; encoding: q16@0:8
- (long long)countDown;
// 0x10001d518; encoding: v24@0:8q16
- (void)setCountDown:(long long)arg1;
// 0x10001d528; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
