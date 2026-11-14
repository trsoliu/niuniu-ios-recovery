// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c48b0
@interface NNCVideoFullScreenSettingView : UIView <SJControlLayer>

// property videoPlayer: T@"SJBaseVideoPlayer",W,N,V_videoPlayer
// property rightContainerView: T@"UIView",&,N,V_rightContainerView
// property scrollView: T@"UIScrollView",&,N,V_scrollView
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
// property speedMinusButton: T@"UIButton",&,N,V_speedMinusButton
// property speedPlusButton: T@"UIButton",&,N,V_speedPlusButton
// property longPressSpeedMinusButton: T@"UIButton",&,N,V_longPressSpeedMinusButton
// property longPressSpeedPlusButton: T@"UIButton",&,N,V_longPressSpeedPlusButton
// property speedContentLabel: T@"UILabel",&,N,V_speedContentLabel
// property longPressSpeedContentLabel: T@"UILabel",&,N,V_longPressSpeedContentLabel
// property delegate: T@"<NNCVideoFullScreenSettingViewDelegate>",W,N,V_delegate
// property moreDelegate: T@"<SJMoreSettingControlLayerDelegate>",W,N,V_moreDelegate
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x10009e684; encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(CGRect)arg1;
// 0x10009e6d4; encoding: @40@0:8{CGPoint=dd}16@32
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
// 0x10009e73c; encoding: v16@0:8
- (void)setupView;
// 0x1000a0360; encoding: v24@0:8@16
- (void)speedStuffSelector:(id)arg1;
// 0x1000a0590; encoding: v24@0:8@16
- (void)onTimerCloseSelector:(id)arg1;
// 0x1000a0674; encoding: v24@0:8@16
- (void)sliderValueChange:(id)arg1;
// 0x1000a0934; encoding: v24@0:8@16
- (void)sliderEndDragging:(id)arg1;
// 0x1000a0a60; encoding: v16@0:8
- (void)_refreshValueForSliderItems;
// 0x1000a0fc0; encoding: @16@0:8
- (id)controlView;
// 0x1000a0fc4; encoding: v24@0:8@16
- (void)installedControlViewToVideoPlayer:(id)arg1;
// 0x1000a0fe8; encoding: v16@0:8
- (void)restartControlLayer;
// 0x1000a10ac; encoding: v16@0:8
- (void)exitControlLayer;
// 0x1000a11a4; encoding: B48@0:8@16Q24{CGPoint=dd}32
- (BOOL)videoPlayer:(id)arg1 gestureRecognizerShouldTrigger:(unsigned long long)arg2 location:(CGPoint)arg3;
// 0x1000a1300; encoding: B24@0:8@16
- (BOOL)canTriggerRotationOfVideoPlayer:(id)arg1;
// 0x1000a1308; encoding: v28@0:8@16f24
- (void)videoPlayer:(id)arg1 volumeChanged:(float)arg2;
// 0x1000a1458; encoding: v28@0:8@16f24
- (void)videoPlayer:(id)arg1 brightnessChanged:(float)arg2;
// 0x1000a15a8; encoding: @24@0:8q16
- (id)int2Time:(long long)arg1;
// 0x1000a15f8; encoding: @20@0:8f16
- (id)getSpeedString:(float)arg1;
// 0x1000a16b8; encoding: B16@0:8
- (BOOL)restarted;
// 0x1000a16c8; encoding: @16@0:8
- (id)delegate;
// 0x1000a16e8; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x1000a16fc; encoding: @16@0:8
- (id)moreDelegate;
// 0x1000a171c; encoding: v24@0:8@16
- (void)setMoreDelegate:(id)arg1;
// 0x1000a1730; encoding: @16@0:8
- (id)videoPlayer;
// 0x1000a1750; encoding: v24@0:8@16
- (void)setVideoPlayer:(id)arg1;
// 0x1000a1764; encoding: @16@0:8
- (id)rightContainerView;
// 0x1000a1774; encoding: v24@0:8@16
- (void)setRightContainerView:(id)arg1;
// 0x1000a1788; encoding: @16@0:8
- (id)scrollView;
// 0x1000a1798; encoding: v24@0:8@16
- (void)setScrollView:(id)arg1;
// 0x1000a17ac; encoding: @16@0:8
- (id)brightnessLabel;
// 0x1000a17bc; encoding: v24@0:8@16
- (void)setBrightnessLabel:(id)arg1;
// 0x1000a17d0; encoding: @16@0:8
- (id)volumeLabel;
// 0x1000a17e0; encoding: v24@0:8@16
- (void)setVolumeLabel:(id)arg1;
// 0x1000a17f4; encoding: @16@0:8
- (id)speedLabel;
// 0x1000a1804; encoding: v24@0:8@16
- (void)setSpeedLabel:(id)arg1;
// 0x1000a1818; encoding: @16@0:8
- (id)longPressSpeedLabel;
// 0x1000a1828; encoding: v24@0:8@16
- (void)setLongPressSpeedLabel:(id)arg1;
// 0x1000a183c; encoding: @16@0:8
- (id)timerCloseLabel;
// 0x1000a184c; encoding: v24@0:8@16
- (void)setTimerCloseLabel:(id)arg1;
// 0x1000a1860; encoding: @16@0:8
- (id)skipStartLabel;
// 0x1000a1870; encoding: v24@0:8@16
- (void)setSkipStartLabel:(id)arg1;
// 0x1000a1884; encoding: @16@0:8
- (id)skipEndLabel;
// 0x1000a1894; encoding: v24@0:8@16
- (void)setSkipEndLabel:(id)arg1;
// 0x1000a18a8; encoding: @16@0:8
- (id)skipStartContentLabel;
// 0x1000a18b8; encoding: v24@0:8@16
- (void)setSkipStartContentLabel:(id)arg1;
// 0x1000a18cc; encoding: @16@0:8
- (id)skipEndContentLabel;
// 0x1000a18dc; encoding: v24@0:8@16
- (void)setSkipEndContentLabel:(id)arg1;
// 0x1000a18f0; encoding: @16@0:8
- (id)brightnessSlider;
// 0x1000a1900; encoding: v24@0:8@16
- (void)setBrightnessSlider:(id)arg1;
// 0x1000a1914; encoding: @16@0:8
- (id)volumeSlider;
// 0x1000a1924; encoding: v24@0:8@16
- (void)setVolumeSlider:(id)arg1;
// 0x1000a1938; encoding: @16@0:8
- (id)skipStartSlider;
// 0x1000a1948; encoding: v24@0:8@16
- (void)setSkipStartSlider:(id)arg1;
// 0x1000a195c; encoding: @16@0:8
- (id)skipEndSlider;
// 0x1000a196c; encoding: v24@0:8@16
- (void)setSkipEndSlider:(id)arg1;
// 0x1000a1980; encoding: @16@0:8
- (id)speedMinusButton;
// 0x1000a1990; encoding: v24@0:8@16
- (void)setSpeedMinusButton:(id)arg1;
// 0x1000a19a4; encoding: @16@0:8
- (id)speedPlusButton;
// 0x1000a19b4; encoding: v24@0:8@16
- (void)setSpeedPlusButton:(id)arg1;
// 0x1000a19c8; encoding: @16@0:8
- (id)longPressSpeedMinusButton;
// 0x1000a19d8; encoding: v24@0:8@16
- (void)setLongPressSpeedMinusButton:(id)arg1;
// 0x1000a19ec; encoding: @16@0:8
- (id)longPressSpeedPlusButton;
// 0x1000a19fc; encoding: v24@0:8@16
- (void)setLongPressSpeedPlusButton:(id)arg1;
// 0x1000a1a10; encoding: @16@0:8
- (id)speedContentLabel;
// 0x1000a1a20; encoding: v24@0:8@16
- (void)setSpeedContentLabel:(id)arg1;
// 0x1000a1a34; encoding: @16@0:8
- (id)longPressSpeedContentLabel;
// 0x1000a1a44; encoding: v24@0:8@16
- (void)setLongPressSpeedContentLabel:(id)arg1;
// 0x1000a1a58; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
