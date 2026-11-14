// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c3690
@interface VideoItemView : UIView

// property titleLabel: T@"UILabel",W,N,V_titleLabel
// property topView: T@"UIView",W,N,V_topView
// property coverView: T@"UIImageView",W,N,V_coverView
// property selectedButton: T@"UIButton",W,N,V_selectedButton
// property remarkLabel: T@"UILabel",W,N,V_remarkLabel
// property scoreLabel: T@"UILabel",W,N,V_scoreLabel
// property delegate: T@"<VideoItemViewDelegate>",W,N,V_delegate
// property videoBean: T@"NNCFileBean",&,N,V_videoBean
// property type: Ti,N,V_type

// 0x1000591fc; encoding: v16@0:8
- (void)awakeFromNib;
// 0x100059528; encoding: v24@0:8@16
- (void)setVideoBean:(id)arg1;
// 0x100059924; encoding: v20@0:8i16
- (void)setType:(int)arg1;
// 0x1000599a0; encoding: v24@0:8@16
- (void)tapSelector:(id)arg1;
// 0x100059a20; encoding: @16@0:8
- (id)delegate;
// 0x100059a40; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x100059a54; encoding: @16@0:8
- (id)videoBean;
// 0x100059a64; encoding: i16@0:8
- (int)type;
// 0x100059a74; encoding: @16@0:8
- (id)titleLabel;
// 0x100059a94; encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// 0x100059aa8; encoding: @16@0:8
- (id)topView;
// 0x100059ac8; encoding: v24@0:8@16
- (void)setTopView:(id)arg1;
// 0x100059adc; encoding: @16@0:8
- (id)coverView;
// 0x100059afc; encoding: v24@0:8@16
- (void)setCoverView:(id)arg1;
// 0x100059b10; encoding: @16@0:8
- (id)selectedButton;
// 0x100059b30; encoding: v24@0:8@16
- (void)setSelectedButton:(id)arg1;
// 0x100059b44; encoding: @16@0:8
- (id)remarkLabel;
// 0x100059b64; encoding: v24@0:8@16
- (void)setRemarkLabel:(id)arg1;
// 0x100059b78; encoding: @16@0:8
- (id)scoreLabel;
// 0x100059b98; encoding: v24@0:8@16
- (void)setScoreLabel:(id)arg1;
// 0x100059bac; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x100059480; encoding: @16@0:8
+ (id)view;

@end
