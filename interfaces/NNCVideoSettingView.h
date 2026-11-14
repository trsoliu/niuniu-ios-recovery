// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c3b40
@interface NNCVideoSettingView : UIView

// property bgButton: T@"UIButton",&,N,V_bgButton
// property containerView: T@"UIView",&,N,V_containerView
// property titleLabel: T@"UILabel",&,N,V_titleLabel
// property closeButton: T@"UIButton",&,N,V_closeButton
// property brightnessLabel: T@"UILabel",&,N,V_brightnessLabel
// property volumeLabel: T@"UILabel",&,N,V_volumeLabel
// property speedLabel: T@"UILabel",&,N,V_speedLabel
// property longPressSpeedLabel: T@"UILabel",&,N,V_longPressSpeedLabel
// property timerCloseLabel: T@"UILabel",&,N,V_timerCloseLabel
// property skipStartLabel: T@"UILabel",&,N,V_skipStartLabel
// property skipEndLabel: T@"UILabel",&,N,V_skipEndLabel
// property skipStartContentLabel: T@"UILabel",&,N,V_skipStartContentLabel
// property skipEndContentLabel: T@"UILabel",&,N,V_skipEndContentLabel
// property brightnessSlider: T@"UISlider",&,N,V_brightnessSlider
// property volumeSlider: T@"UISlider",&,N,V_volumeSlider
// property skipStartSlider: T@"UISlider",&,N,V_skipStartSlider
// property skipEndSlider: T@"UISlider",&,N,V_skipEndSlider
// property player: T@"SJVideoPlayer",W,N,V_player
// property delegate: T@"<NNCVideoFullScreenSettingViewDelegate>",W,N,V_delegate

// 0x100063128; encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(CGRect)arg1;
// 0x100063178; encoding: v16@0:8
- (void)createView;
// 0x100064d68; encoding: v16@0:8
- (void)refreshData;
// 0x100065254; encoding: v16@0:8
- (void)layoutSubviews;
// 0x100065454; encoding: v24@0:8@16
- (void)sliderValueChange:(id)arg1;
// 0x100065714; encoding: v24@0:8@16
- (void)sliderEndDragging:(id)arg1;
// 0x100065840; encoding: @24@0:8q16
- (id)int2Time:(long long)arg1;
// 0x100065890; encoding: v24@0:8@16
- (void)onTimerCloseSelector:(id)arg1;
// 0x100065974; encoding: v24@0:8@16
- (void)speedSelector:(id)arg1;
// 0x100065a30; encoding: v24@0:8@16
- (void)longPressSpeedSelector:(id)arg1;
// 0x100065aec; encoding: @16@0:8
- (id)player;
// 0x100065b0c; encoding: v24@0:8@16
- (void)setPlayer:(id)arg1;
// 0x100065b20; encoding: @16@0:8
- (id)delegate;
// 0x100065b40; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x100065b54; encoding: @16@0:8
- (id)bgButton;
// 0x100065b64; encoding: v24@0:8@16
- (void)setBgButton:(id)arg1;
// 0x100065b78; encoding: @16@0:8
- (id)containerView;
// 0x100065b88; encoding: v24@0:8@16
- (void)setContainerView:(id)arg1;
// 0x100065b9c; encoding: @16@0:8
- (id)titleLabel;
// 0x100065bac; encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// 0x100065bc0; encoding: @16@0:8
- (id)closeButton;
// 0x100065bd0; encoding: v24@0:8@16
- (void)setCloseButton:(id)arg1;
// 0x100065be4; encoding: @16@0:8
- (id)brightnessLabel;
// 0x100065bf4; encoding: v24@0:8@16
- (void)setBrightnessLabel:(id)arg1;
// 0x100065c08; encoding: @16@0:8
- (id)volumeLabel;
// 0x100065c18; encoding: v24@0:8@16
- (void)setVolumeLabel:(id)arg1;
// 0x100065c2c; encoding: @16@0:8
- (id)speedLabel;
// 0x100065c3c; encoding: v24@0:8@16
- (void)setSpeedLabel:(id)arg1;
// 0x100065c50; encoding: @16@0:8
- (id)longPressSpeedLabel;
// 0x100065c60; encoding: v24@0:8@16
- (void)setLongPressSpeedLabel:(id)arg1;
// 0x100065c74; encoding: @16@0:8
- (id)timerCloseLabel;
// 0x100065c84; encoding: v24@0:8@16
- (void)setTimerCloseLabel:(id)arg1;
// 0x100065c98; encoding: @16@0:8
- (id)skipStartLabel;
// 0x100065ca8; encoding: v24@0:8@16
- (void)setSkipStartLabel:(id)arg1;
// 0x100065cbc; encoding: @16@0:8
- (id)skipEndLabel;
// 0x100065ccc; encoding: v24@0:8@16
- (void)setSkipEndLabel:(id)arg1;
// 0x100065ce0; encoding: @16@0:8
- (id)skipStartContentLabel;
// 0x100065cf0; encoding: v24@0:8@16
- (void)setSkipStartContentLabel:(id)arg1;
// 0x100065d04; encoding: @16@0:8
- (id)skipEndContentLabel;
// 0x100065d14; encoding: v24@0:8@16
- (void)setSkipEndContentLabel:(id)arg1;
// 0x100065d28; encoding: @16@0:8
- (id)brightnessSlider;
// 0x100065d38; encoding: v24@0:8@16
- (void)setBrightnessSlider:(id)arg1;
// 0x100065d4c; encoding: @16@0:8
- (id)volumeSlider;
// 0x100065d5c; encoding: v24@0:8@16
- (void)setVolumeSlider:(id)arg1;
// 0x100065d70; encoding: @16@0:8
- (id)skipStartSlider;
// 0x100065d80; encoding: v24@0:8@16
- (void)setSkipStartSlider:(id)arg1;
// 0x100065d94; encoding: @16@0:8
- (id)skipEndSlider;
// 0x100065da4; encoding: v24@0:8@16
- (void)setSkipEndSlider:(id)arg1;
// 0x100065db8; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
