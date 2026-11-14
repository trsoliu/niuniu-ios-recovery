// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c4cc0
@interface InsetLabel : UILabel

// property textInsets: T{UIEdgeInsets=dddd},N,V_textInsets

// 0x1000ae3cc; encoding: @16@0:8
- (id)init;
// 0x1000ae420; encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(CGRect)arg1;
// 0x1000ae474; encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)drawTextInRect:(CGRect)arg1;
// 0x1000ae4d4; encoding: {UIEdgeInsets=dddd}16@0:8
- (UIEdgeInsets)textInsets;
// 0x1000ae4ec; encoding: v48@0:8{UIEdgeInsets=dddd}16
- (void)setTextInsets:(UIEdgeInsets)arg1;

@end
