// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c46d0
@interface FSTabBar : UIView

// property longPressTimer: T@"NSTimer",&,N,V_longPressTimer
// property touchButton: T@"FSTabBarButton",&,N,V_touchButton
// property tapGesture: T@"UITapGestureRecognizer",&,N,V_tapGesture
// property delegate: T@"<FSTabBarDelegate>",W,N,V_delegate
// property items: T@"NSArray",C,N,V_items
// property selectedItem: T@"FSTabBarItem",N,V_selectedItem
// property topBorderView: T@"UIView",&,N,V_topBorderView
// property backgroundView: T@"UIView",&,N,V_backgroundView

// 0x100098738; encoding: @16@0:8
- (id)init;
// 0x10009876c; encoding: v24@0:8@16
- (void)setItems:(id)arg1;
// 0x100098914; encoding: v24@0:8@16
- (void)setButtonItems:(id)arg1;
// 0x100098b58; encoding: v24@0:8@16
- (void)setSelectedItem:(id)arg1;
// 0x100098c80; encoding: v24@0:8@16
- (void)touchDown:(id)arg1;
// 0x100098d28; encoding: v24@0:8@16
- (void)touchUpInside:(id)arg1;
// 0x100098d88; encoding: v24@0:8@16
- (void)touchUpOutside:(id)arg1;
// 0x100098de8; encoding: v24@0:8@16
- (void)buttonClicked:(id)arg1;
// 0x100098e98; encoding: v24@0:8@16
- (void)multipleTapped:(id)arg1;
// 0x100098f70; encoding: v24@0:8@16
- (void)longPressTimerDidFire:(id)arg1;
// 0x100098fac; encoding: @16@0:8
- (id)tapGesture;
// 0x100099014; encoding: @16@0:8
- (id)backgroundView;
// 0x1000990d8; encoding: @16@0:8
- (id)topBorderView;
// 0x1000991f0; encoding: v16@0:8
- (void)layoutSubviews;
// 0x1000993f8; encoding: @16@0:8
- (id)delegate;
// 0x100099418; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x10009942c; encoding: @16@0:8
- (id)items;
// 0x10009943c; encoding: @16@0:8
- (id)selectedItem;
// 0x10009944c; encoding: v24@0:8@16
- (void)setTopBorderView:(id)arg1;
// 0x100099460; encoding: v24@0:8@16
- (void)setBackgroundView:(id)arg1;
// 0x100099474; encoding: @16@0:8
- (id)longPressTimer;
// 0x100099484; encoding: v24@0:8@16
- (void)setLongPressTimer:(id)arg1;
// 0x100099498; encoding: @16@0:8
- (id)touchButton;
// 0x1000994a8; encoding: v24@0:8@16
- (void)setTouchButton:(id)arg1;
// 0x1000994bc; encoding: v24@0:8@16
- (void)setTapGesture:(id)arg1;
// 0x1000994d0; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
