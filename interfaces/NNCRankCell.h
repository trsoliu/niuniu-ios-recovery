// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c5a30
@interface NNCRankCell : UITableViewCell

// property coverView: T@"UIImageView",W,N,V_coverView
// property rankLabel: T@"UILabel",W,N,V_rankLabel
// property hitLabel: T@"UILabel",W,N,V_hitLabel
// property fireIv: T@"UIImageView",W,N,V_fireIv
// property nameLabel: T@"UILabel",W,N,V_nameLabel
// property remarkLabel: T@"UILabel",W,N,V_remarkLabel
// property descLabel: T@"UILabel",W,N,V_descLabel
// property clzView: T@"UIView",W,N,V_clzView
// property actorView: T@"UIView",W,N,V_actorView
// property clzLabels: T@"NSMutableArray",&,N,V_clzLabels
// property actorLabels: T@"NSMutableArray",&,N,V_actorLabels
// property info: T@"NNCFileBean",&,N,V_info
// property index: Tq,N,V_index

// 0x1000cb0e8; encoding: v16@0:8
- (void)awakeFromNib;
// 0x1000cb450; encoding: v24@0:8q16
- (void)setIndex:(long long)arg1;
// 0x1000cb66c; encoding: v24@0:8@16
- (void)setInfo:(id)arg1;
// 0x1000cbc80; encoding: v16@0:8
- (void)layoutSubviews;
// 0x1000cbcc8; encoding: v16@0:8
- (void)setPosition;
// 0x1000cc678; encoding: v24@0:8B16B20
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
// 0x1000cc67c; encoding: v24@0:8B16B20
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
// 0x1000cc680; encoding: @16@0:8
- (id)info;
// 0x1000cc690; encoding: q16@0:8
- (long long)index;
// 0x1000cc6a0; encoding: @16@0:8
- (id)coverView;
// 0x1000cc6c0; encoding: v24@0:8@16
- (void)setCoverView:(id)arg1;
// 0x1000cc6d4; encoding: @16@0:8
- (id)rankLabel;
// 0x1000cc6f4; encoding: v24@0:8@16
- (void)setRankLabel:(id)arg1;
// 0x1000cc708; encoding: @16@0:8
- (id)hitLabel;
// 0x1000cc728; encoding: v24@0:8@16
- (void)setHitLabel:(id)arg1;
// 0x1000cc73c; encoding: @16@0:8
- (id)fireIv;
// 0x1000cc75c; encoding: v24@0:8@16
- (void)setFireIv:(id)arg1;
// 0x1000cc770; encoding: @16@0:8
- (id)nameLabel;
// 0x1000cc790; encoding: v24@0:8@16
- (void)setNameLabel:(id)arg1;
// 0x1000cc7a4; encoding: @16@0:8
- (id)remarkLabel;
// 0x1000cc7c4; encoding: v24@0:8@16
- (void)setRemarkLabel:(id)arg1;
// 0x1000cc7d8; encoding: @16@0:8
- (id)descLabel;
// 0x1000cc7f8; encoding: v24@0:8@16
- (void)setDescLabel:(id)arg1;
// 0x1000cc80c; encoding: @16@0:8
- (id)clzView;
// 0x1000cc82c; encoding: v24@0:8@16
- (void)setClzView:(id)arg1;
// 0x1000cc840; encoding: @16@0:8
- (id)actorView;
// 0x1000cc860; encoding: v24@0:8@16
- (void)setActorView:(id)arg1;
// 0x1000cc874; encoding: @16@0:8
- (id)clzLabels;
// 0x1000cc884; encoding: v24@0:8@16
- (void)setClzLabels:(id)arg1;
// 0x1000cc898; encoding: @16@0:8
- (id)actorLabels;
// 0x1000cc8a8; encoding: v24@0:8@16
- (void)setActorLabels:(id)arg1;
// 0x1000cc8bc; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000cb39c; encoding: @16@0:8
+ (id)cell;
// 0x1000cb444; encoding: d16@0:8
+ (double)nnccellHeight;
// 0x1000cbc14; encoding: @24@0:8q16
+ (id)getHotString:(long long)arg1;

@end
