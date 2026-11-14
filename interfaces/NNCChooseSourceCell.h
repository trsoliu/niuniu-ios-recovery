// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c6b60
@interface NNCChooseSourceCell : UITableViewCell

// property bgView: T@"UIImageView",W,N,V_bgView
// property sourceLabel: T@"UILabel",W,N,V_sourceLabel
// property numLabel: T@"UILabel",W,N,V_numLabel
// property chooseButton: T@"UIButton",W,N,V_chooseButton
// property descLabel: T@"UILabel",W,N,V_descLabel
// property info: T@"NNCFileBean",&,N,V_info
// property index: Ti,N,V_index
// property selectedIndex: Ti,N,V_selectedIndex

// 0x1000fb1f4; encoding: v16@0:8
- (void)awakeFromNib;
// 0x1000fb3a8; encoding: v24@0:8@16
- (void)setInfo:(id)arg1;
// 0x1000fc1c4; encoding: v24@0:8B16B20
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
// 0x1000fc1c8; encoding: v24@0:8B16B20
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
// 0x1000fc1cc; encoding: @16@0:8
- (id)info;
// 0x1000fc1dc; encoding: i16@0:8
- (int)index;
// 0x1000fc1ec; encoding: v20@0:8i16
- (void)setIndex:(int)arg1;
// 0x1000fc1fc; encoding: i16@0:8
- (int)selectedIndex;
// 0x1000fc20c; encoding: v20@0:8i16
- (void)setSelectedIndex:(int)arg1;
// 0x1000fc21c; encoding: @16@0:8
- (id)bgView;
// 0x1000fc23c; encoding: v24@0:8@16
- (void)setBgView:(id)arg1;
// 0x1000fc250; encoding: @16@0:8
- (id)sourceLabel;
// 0x1000fc270; encoding: v24@0:8@16
- (void)setSourceLabel:(id)arg1;
// 0x1000fc284; encoding: @16@0:8
- (id)numLabel;
// 0x1000fc2a4; encoding: v24@0:8@16
- (void)setNumLabel:(id)arg1;
// 0x1000fc2b8; encoding: @16@0:8
- (id)chooseButton;
// 0x1000fc2d8; encoding: v24@0:8@16
- (void)setChooseButton:(id)arg1;
// 0x1000fc2ec; encoding: @16@0:8
- (id)descLabel;
// 0x1000fc30c; encoding: v24@0:8@16
- (void)setDescLabel:(id)arg1;
// 0x1000fc320; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000fb300; encoding: @16@0:8
+ (id)cell;

@end
