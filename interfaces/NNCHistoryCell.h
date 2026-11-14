// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c5120
@interface NNCHistoryCell : UITableViewCell

// property headerLabel: T@"UILabel",W,N,V_headerLabel
// property containerView: T@"UIView",W,N,V_containerView
// property coverView: T@"UIImageView",W,N,V_coverView
// property selectedButton: T@"UIButton",W,N,V_selectedButton
// property nameLabel: T@"UILabel",W,N,V_nameLabel
// property statusLabel: T@"UILabel",W,N,V_statusLabel
// property line: T@"UIImageView",W,N,V_line
// property isEditMode: TB,N,V_isEditMode
// property isItemSelected: TB,N,V_isItemSelected
// property info: T@"NNCHistoryModel",&,N,V_info

// 0x1000bad6c; encoding: v16@0:8
- (void)awakeFromNib;
// 0x1000bb07c; encoding: v20@0:8B16
- (void)setIsEditMode:(BOOL)arg1;
// 0x1000bb0c0; encoding: v20@0:8B16
- (void)setIsItemSelected:(BOOL)arg1;
// 0x1000bb104; encoding: v24@0:8@16
- (void)setInfo:(id)arg1;
// 0x1000bb4c4; encoding: v16@0:8
- (void)layoutSubviews;
// 0x1000bb50c; encoding: v16@0:8
- (void)updateFrame;
// 0x1000bb5b0; encoding: v24@0:8B16B20
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
// 0x1000bb5b4; encoding: v24@0:8B16B20
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
// 0x1000bb5b8; encoding: B16@0:8
- (BOOL)isEditMode;
// 0x1000bb5c8; encoding: B16@0:8
- (BOOL)isItemSelected;
// 0x1000bb5d8; encoding: @16@0:8
- (id)info;
// 0x1000bb5e8; encoding: @16@0:8
- (id)headerLabel;
// 0x1000bb608; encoding: v24@0:8@16
- (void)setHeaderLabel:(id)arg1;
// 0x1000bb61c; encoding: @16@0:8
- (id)containerView;
// 0x1000bb63c; encoding: v24@0:8@16
- (void)setContainerView:(id)arg1;
// 0x1000bb650; encoding: @16@0:8
- (id)coverView;
// 0x1000bb670; encoding: v24@0:8@16
- (void)setCoverView:(id)arg1;
// 0x1000bb684; encoding: @16@0:8
- (id)selectedButton;
// 0x1000bb6a4; encoding: v24@0:8@16
- (void)setSelectedButton:(id)arg1;
// 0x1000bb6b8; encoding: @16@0:8
- (id)nameLabel;
// 0x1000bb6d8; encoding: v24@0:8@16
- (void)setNameLabel:(id)arg1;
// 0x1000bb6ec; encoding: @16@0:8
- (id)statusLabel;
// 0x1000bb70c; encoding: v24@0:8@16
- (void)setStatusLabel:(id)arg1;
// 0x1000bb720; encoding: @16@0:8
- (id)line;
// 0x1000bb740; encoding: v24@0:8@16
- (void)setLine:(id)arg1;
// 0x1000bb754; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000baf78; encoding: @16@0:8
+ (id)cell;
// 0x1000bb020; encoding: d24@0:8@16
+ (double)nnccellHeight:(id)arg1;

@end
