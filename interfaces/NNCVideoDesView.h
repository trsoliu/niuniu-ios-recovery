// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c69d0
@interface NNCVideoDesView : UIView <UITextViewDelegate>

// property bgButton: T@"UIButton",&,N,V_bgButton
// property containerView: T@"UIView",&,N,V_containerView
// property titleLabel: T@"UILabel",&,N,V_titleLabel
// property closeButton: T@"UIButton",&,N,V_closeButton
// property nameTv: T@"UILabel",&,N,V_nameTv
// property clickTv: T@"UILabel",&,N,V_clickTv
// property flagTv: T@"UILabel",&,N,V_flagTv
// property fireIv: T@"UIImageView",&,N,V_fireIv
// property actorTitleLabel: T@"UILabel",&,N,V_actorTitleLabel
// property scrollView: T@"UIScrollView",&,N,V_scrollView
// property descTitleLabel: T@"UILabel",&,N,V_descTitleLabel
// property textView: T@"UITextView",&,N,V_textView
// property videoBean: T@"NNCFileBean",&,N,V_videoBean
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000f4990; encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(CGRect)arg1;
// 0x1000f49e0; encoding: v16@0:8
- (void)createView;
// 0x1000f5910; encoding: v24@0:8@16
- (void)setVideoBean:(id)arg1;
// 0x1000f6524; encoding: v16@0:8
- (void)layoutSubviews;
// 0x1000f69ac; encoding: v16@0:8
- (void)updateTextFrame;
// 0x1000f6b90; encoding: B56@0:8@16@24{_NSRange=QQ}32q48
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4;
// 0x1000f6c2c; encoding: @16@0:8
- (id)videoBean;
// 0x1000f6c3c; encoding: @16@0:8
- (id)bgButton;
// 0x1000f6c4c; encoding: v24@0:8@16
- (void)setBgButton:(id)arg1;
// 0x1000f6c60; encoding: @16@0:8
- (id)containerView;
// 0x1000f6c70; encoding: v24@0:8@16
- (void)setContainerView:(id)arg1;
// 0x1000f6c84; encoding: @16@0:8
- (id)titleLabel;
// 0x1000f6c94; encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// 0x1000f6ca8; encoding: @16@0:8
- (id)closeButton;
// 0x1000f6cb8; encoding: v24@0:8@16
- (void)setCloseButton:(id)arg1;
// 0x1000f6ccc; encoding: @16@0:8
- (id)nameTv;
// 0x1000f6cdc; encoding: v24@0:8@16
- (void)setNameTv:(id)arg1;
// 0x1000f6cf0; encoding: @16@0:8
- (id)clickTv;
// 0x1000f6d00; encoding: v24@0:8@16
- (void)setClickTv:(id)arg1;
// 0x1000f6d14; encoding: @16@0:8
- (id)flagTv;
// 0x1000f6d24; encoding: v24@0:8@16
- (void)setFlagTv:(id)arg1;
// 0x1000f6d38; encoding: @16@0:8
- (id)fireIv;
// 0x1000f6d48; encoding: v24@0:8@16
- (void)setFireIv:(id)arg1;
// 0x1000f6d5c; encoding: @16@0:8
- (id)actorTitleLabel;
// 0x1000f6d6c; encoding: v24@0:8@16
- (void)setActorTitleLabel:(id)arg1;
// 0x1000f6d80; encoding: @16@0:8
- (id)scrollView;
// 0x1000f6d90; encoding: v24@0:8@16
- (void)setScrollView:(id)arg1;
// 0x1000f6da4; encoding: @16@0:8
- (id)descTitleLabel;
// 0x1000f6db4; encoding: v24@0:8@16
- (void)setDescTitleLabel:(id)arg1;
// 0x1000f6dc8; encoding: @16@0:8
- (id)textView;
// 0x1000f6dd8; encoding: v24@0:8@16
- (void)setTextView:(id)arg1;
// 0x1000f6dec; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
