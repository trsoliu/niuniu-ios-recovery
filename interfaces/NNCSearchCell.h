// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c3d20
@interface NNCSearchCell : UITableViewCell

// property coverIv: T@"UIImageView",W,N,V_coverIv
// property nameLabel: T@"UILabel",W,N,V_nameLabel
// property remarkLabel: T@"UILabel",W,N,V_remarkLabel
// property descLabel: T@"UILabel",W,N,V_descLabel
// property clzView: T@"UIView",W,N,V_clzView
// property playButton: T@"UIButton",W,N,V_playButton
// property scoreLabel: T@"UILabel",W,N,V_scoreLabel
// property clzLabels: T@"NSMutableArray",&,N,V_clzLabels
// property videoBean: T@"NNCFileBean",&,N,V_videoBean

// 0x10006dc28; encoding: v16@0:8
- (void)awakeFromNib;
// 0x10006e128; encoding: v24@0:8@16
- (void)setVideoBean:(id)arg1;
// 0x10006e8f0; encoding: v16@0:8
- (void)layoutSubviews;
// 0x10006e938; encoding: v16@0:8
- (void)setPosition;
// 0x10006ed14; encoding: v24@0:8B16B20
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
// 0x10006ed18; encoding: v24@0:8B16B20
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
// 0x10006ed1c; encoding: @16@0:8
- (id)videoBean;
// 0x10006ed2c; encoding: @16@0:8
- (id)coverIv;
// 0x10006ed4c; encoding: v24@0:8@16
- (void)setCoverIv:(id)arg1;
// 0x10006ed60; encoding: @16@0:8
- (id)nameLabel;
// 0x10006ed80; encoding: v24@0:8@16
- (void)setNameLabel:(id)arg1;
// 0x10006ed94; encoding: @16@0:8
- (id)remarkLabel;
// 0x10006edb4; encoding: v24@0:8@16
- (void)setRemarkLabel:(id)arg1;
// 0x10006edc8; encoding: @16@0:8
- (id)descLabel;
// 0x10006ede8; encoding: v24@0:8@16
- (void)setDescLabel:(id)arg1;
// 0x10006edfc; encoding: @16@0:8
- (id)clzView;
// 0x10006ee1c; encoding: v24@0:8@16
- (void)setClzView:(id)arg1;
// 0x10006ee30; encoding: @16@0:8
- (id)playButton;
// 0x10006ee50; encoding: v24@0:8@16
- (void)setPlayButton:(id)arg1;
// 0x10006ee64; encoding: @16@0:8
- (id)scoreLabel;
// 0x10006ee84; encoding: v24@0:8@16
- (void)setScoreLabel:(id)arg1;
// 0x10006ee98; encoding: @16@0:8
- (id)clzLabels;
// 0x10006eea8; encoding: v24@0:8@16
- (void)setClzLabels:(id)arg1;
// 0x10006eebc; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x10006e074; encoding: @16@0:8
+ (id)cell;
// 0x10006e11c; encoding: d16@0:8
+ (double)nnccellHeight;

@end
