// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c37d0
@interface NNCDiscussCell : UITableViewCell <UITextViewDelegate>

// property iconView: T@"UIImageView",W,N,V_iconView
// property nameLabel: T@"UILabel",W,N,V_nameLabel
// property timeLabel: T@"UILabel",W,N,V_timeLabel
// property contentTextView: T@"UITextView",W,N,V_contentTextView
// property info: T@"NSDictionary",&,N,V_info
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x10005ad20; encoding: v16@0:8
- (void)awakeFromNib;
// 0x10005b2c0; encoding: v24@0:8@16
- (void)setInfo:(id)arg1;
// 0x10005b5dc; encoding: v24@0:8B16B20
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
// 0x10005b5e0; encoding: v24@0:8B16B20
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
// 0x10005b5e4; encoding: B56@0:8@16@24{_NSRange=QQ}32q48
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4;
// 0x10005b680; encoding: @16@0:8
- (id)info;
// 0x10005b690; encoding: @16@0:8
- (id)iconView;
// 0x10005b6b0; encoding: v24@0:8@16
- (void)setIconView:(id)arg1;
// 0x10005b6c4; encoding: @16@0:8
- (id)nameLabel;
// 0x10005b6e4; encoding: v24@0:8@16
- (void)setNameLabel:(id)arg1;
// 0x10005b6f8; encoding: @16@0:8
- (id)timeLabel;
// 0x10005b718; encoding: v24@0:8@16
- (void)setTimeLabel:(id)arg1;
// 0x10005b72c; encoding: @16@0:8
- (id)contentTextView;
// 0x10005b74c; encoding: v24@0:8@16
- (void)setContentTextView:(id)arg1;
// 0x10005b760; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x10005afb0; encoding: d16@0:8
+ (double)nnccellHeight;
// 0x10005b218; encoding: @16@0:8
+ (id)cell;

@end
