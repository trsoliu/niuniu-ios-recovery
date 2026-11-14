// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c63e0
@interface NNCMessageCell : UITableViewCell

// property timeLabel: T@"UILabel",W,N,V_timeLabel
// property containerView: T@"UIView",W,N,V_containerView
// property titleLabel: T@"UILabel",W,N,V_titleLabel
// property contentLabel: T@"UILabel",W,N,V_contentLabel
// property info: T@"NSDictionary",&,N,V_info

// 0x1000e6a9c; encoding: v16@0:8
- (void)awakeFromNib;
// 0x1000e6d24; encoding: v24@0:8@16
- (void)setInfo:(id)arg1;
// 0x1000e7388; encoding: v24@0:8B16B20
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
// 0x1000e738c; encoding: v24@0:8B16B20
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
// 0x1000e7390; encoding: @16@0:8
- (id)info;
// 0x1000e73a0; encoding: @16@0:8
- (id)timeLabel;
// 0x1000e73c0; encoding: v24@0:8@16
- (void)setTimeLabel:(id)arg1;
// 0x1000e73d4; encoding: @16@0:8
- (id)containerView;
// 0x1000e73f4; encoding: v24@0:8@16
- (void)setContainerView:(id)arg1;
// 0x1000e7408; encoding: @16@0:8
- (id)titleLabel;
// 0x1000e7428; encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// 0x1000e743c; encoding: @16@0:8
- (id)contentLabel;
// 0x1000e745c; encoding: v24@0:8@16
- (void)setContentLabel:(id)arg1;
// 0x1000e7470; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000e6c7c; encoding: @16@0:8
+ (id)cell;
// 0x1000e7200; encoding: d24@0:8@16
+ (double)nnccellHeight:(id)arg1;

@end
