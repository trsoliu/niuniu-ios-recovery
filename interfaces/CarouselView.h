// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c53a0
@interface CarouselView : UIView <UIScrollViewDelegate>

// property imageSource: T@"NSMutableArray",&,N,V_imageSource
// property imageViewArray: T@"NSMutableArray",&,N,V_imageViewArray
// property scrollView: T@"UIScrollView",&,N,V_scrollView
// property pageControl: T@"UIPageControl",&,N,V_pageControl
// property numLabel: T@"UILabel",&,N,V_numLabel
// property timer: T@"NSTimer",&,N,V_timer
// property imageCount: TQ,N,V_imageCount
// property lastOffset: Td,N,V_lastOffset
// property delegate: T@"<CarouselViewDelegate>",W,N,V_delegate
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000bf690; encoding: @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
- (id)initWithFrame:(CGRect)arg1 imageArray:(id)arg2;
// 0x1000c0174; encoding: v16@0:8
- (void)refresh;
// 0x1000c0230; encoding: v16@0:8
- (void)nncappear;
// 0x1000c0310; encoding: v16@0:8
- (void)disappear;
// 0x1000c0350; encoding: v16@0:8
- (void)nextImage;
// 0x1000c04c8; encoding: v24@0:8@16
- (void)tappedImage:(id)arg1;
// 0x1000c05ac; encoding: v24@0:8@16
- (void)scrollViewWillBeginDragging:(id)arg1;
// 0x1000c062c; encoding: v24@0:8@16
- (void)scrollViewDidEndDecelerating:(id)arg1;
// 0x1000c070c; encoding: v24@0:8@16
- (void)scrollViewDidScroll:(id)arg1;
// 0x1000c092c; encoding: v16@0:8
- (void)dealloc;
// 0x1000c0994; encoding: v16@0:8
- (void)layoutSubviews;
// 0x1000c0cd4; encoding: @16@0:8
- (id)delegate;
// 0x1000c0cf4; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x1000c0d08; encoding: @16@0:8
- (id)imageSource;
// 0x1000c0d18; encoding: v24@0:8@16
- (void)setImageSource:(id)arg1;
// 0x1000c0d2c; encoding: @16@0:8
- (id)imageViewArray;
// 0x1000c0d3c; encoding: v24@0:8@16
- (void)setImageViewArray:(id)arg1;
// 0x1000c0d50; encoding: @16@0:8
- (id)scrollView;
// 0x1000c0d60; encoding: v24@0:8@16
- (void)setScrollView:(id)arg1;
// 0x1000c0d74; encoding: @16@0:8
- (id)pageControl;
// 0x1000c0d84; encoding: v24@0:8@16
- (void)setPageControl:(id)arg1;
// 0x1000c0d98; encoding: @16@0:8
- (id)numLabel;
// 0x1000c0da8; encoding: v24@0:8@16
- (void)setNumLabel:(id)arg1;
// 0x1000c0dbc; encoding: @16@0:8
- (id)timer;
// 0x1000c0dcc; encoding: v24@0:8@16
- (void)setTimer:(id)arg1;
// 0x1000c0de0; encoding: Q16@0:8
- (unsigned long long)imageCount;
// 0x1000c0df0; encoding: v24@0:8Q16
- (void)setImageCount:(unsigned long long)arg1;
// 0x1000c0e00; encoding: d16@0:8
- (double)lastOffset;
// 0x1000c0e10; encoding: v24@0:8d16
- (void)setLastOffset:(double)arg1;
// 0x1000c0e20; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
