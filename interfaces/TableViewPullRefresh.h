// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2b00
@interface TableViewPullRefresh : UIView <CAAnimationDelegate>

// property scrollView: T@"UIScrollView",W,N,V_scrollView
// property status: Ti,N,V_status
// property imageView: T@"UIImageView",&,N,V_imageView
// property statusLabel: T@"UILabel",&,N,V_statusLabel
// property images: T@"NSArray",&,N,V_images
// property finishedLabel: T@"UILabel",&,N,V_finishedLabel
// property animationCount: Tq,N,V_animationCount
// property delegate: T@"<TableViewPullRefreshDelegate>",W,N,V_delegate
// property additionalFinishHeight: Td,N,V_additionalFinishHeight
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x10002baa8; encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(CGRect)arg1;
// 0x10002beec; encoding: v24@0:8@16
- (void)willMoveToSuperview:(id)arg1;
// 0x10002bf78; encoding: v16@0:8
- (void)layoutSubviews;
// 0x10002c118; encoding: @16@0:8
- (id)images;
// 0x10002c21c; encoding: v20@0:8i16
- (void)setStatus:(int)arg1;
// 0x10002c4bc; encoding: v24@0:8@16
- (void)scrollViewDidScroll:(id)arg1;
// 0x10002c6ec; encoding: v24@0:8@16
- (void)scrollViewDidEndDragging:(id)arg1;
// 0x10002c7a4; encoding: v24@0:8@16
- (void)scrollViewTriggerLoad:(id)arg1;
// 0x10002c7f0; encoding: v24@0:8@16
- (void)scrollViewDidStartLoad:(id)arg1;
// 0x10002c8a4; encoding: v28@0:8@16i24
- (void)scrollViewDidFinishLoad:(id)arg1 type:(int)arg2;
// 0x10002d070; encoding: v28@0:8@16B24
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
// 0x10002d0d0; encoding: @16@0:8
- (id)delegate;
// 0x10002d0f0; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x10002d104; encoding: i16@0:8
- (int)status;
// 0x10002d114; encoding: d16@0:8
- (double)additionalFinishHeight;
// 0x10002d124; encoding: v24@0:8d16
- (void)setAdditionalFinishHeight:(double)arg1;
// 0x10002d134; encoding: @16@0:8
- (id)scrollView;
// 0x10002d154; encoding: v24@0:8@16
- (void)setScrollView:(id)arg1;
// 0x10002d168; encoding: @16@0:8
- (id)imageView;
// 0x10002d178; encoding: v24@0:8@16
- (void)setImageView:(id)arg1;
// 0x10002d18c; encoding: @16@0:8
- (id)statusLabel;
// 0x10002d19c; encoding: v24@0:8@16
- (void)setStatusLabel:(id)arg1;
// 0x10002d1b0; encoding: v24@0:8@16
- (void)setImages:(id)arg1;
// 0x10002d1c4; encoding: @16@0:8
- (id)finishedLabel;
// 0x10002d1d4; encoding: v24@0:8@16
- (void)setFinishedLabel:(id)arg1;
// 0x10002d1e8; encoding: q16@0:8
- (long long)animationCount;
// 0x10002d1f8; encoding: v24@0:8q16
- (void)setAnimationCount:(long long)arg1;
// 0x10002d208; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
