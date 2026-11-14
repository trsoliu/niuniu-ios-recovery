// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2fb0
@interface NNCVideoCell : UITableViewCell

// property itemView0: T@"VideoItemView",&,N,V_itemView0
// property itemView1: T@"VideoItemView",&,N,V_itemView1
// property itemView2: T@"VideoItemView",&,N,V_itemView2
// property type: Ti,N,V_type
// property isThreeItem: TB,N,V_isThreeItem
// property videoBeans: T@"NSArray",&,N,V_videoBeans
// property delegate: T@"<VideoItemViewDelegate>",W,N,V_delegate

// 0x10003d4a0; encoding: v16@0:8
- (void)awakeFromNib;
// 0x10003d81c; encoding: v20@0:8i16
- (void)setType:(int)arg1;
// 0x10003d87c; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x10003d904; encoding: v24@0:8@16
- (void)setVideoBeans:(id)arg1;
// 0x10003da24; encoding: v20@0:8B16
- (void)setIsThreeItem:(BOOL)arg1;
// 0x10003da34; encoding: v16@0:8
- (void)layoutSubviews;
// 0x10003da7c; encoding: v16@0:8
- (void)layoutPosition;
// 0x10003dca8; encoding: v24@0:8B16B20
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
// 0x10003dcac; encoding: v24@0:8B16B20
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
// 0x10003dd3c; encoding: i16@0:8
- (int)type;
// 0x10003dd4c; encoding: B16@0:8
- (BOOL)isThreeItem;
// 0x10003dd5c; encoding: @16@0:8
- (id)videoBeans;
// 0x10003dd6c; encoding: @16@0:8
- (id)delegate;
// 0x10003dd8c; encoding: @16@0:8
- (id)itemView0;
// 0x10003dd9c; encoding: v24@0:8@16
- (void)setItemView0:(id)arg1;
// 0x10003ddb0; encoding: @16@0:8
- (id)itemView1;
// 0x10003ddc0; encoding: v24@0:8@16
- (void)setItemView1:(id)arg1;
// 0x10003ddd4; encoding: @16@0:8
- (id)itemView2;
// 0x10003dde4; encoding: v24@0:8@16
- (void)setItemView2:(id)arg1;
// 0x10003ddf8; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x10003d774; encoding: @16@0:8
+ (id)cell;
// 0x10003dcb0; encoding: d20@0:8B16
+ (double)nnccellHeight:(BOOL)arg1;

@end
