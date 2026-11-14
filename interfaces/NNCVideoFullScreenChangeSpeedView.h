// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2290
@interface NNCVideoFullScreenChangeSpeedView : UIView <UITableViewDelegate, UITableViewDataSource, SJControlLayer>

// property videoPlayer: T@"SJBaseVideoPlayer",W,N,V_videoPlayer
// property rightContainerView: T@"UIView",&,N,V_rightContainerView
// property tableView: T@"UITableView",&,N,V_tableView
// property delegate: T@"<NNCVideoFullScreenChangeSpeedViewDelegate>",W,N,V_delegate
// property moreDelegate: T@"<SJMoreSettingControlLayerDelegate>",W,N,V_moreDelegate
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x10000fa0c; encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(CGRect)arg1;
// 0x10000fa5c; encoding: @40@0:8{CGPoint=dd}16@32
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
// 0x10000fac4; encoding: v16@0:8
- (void)setupView;
// 0x10000fe58; encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// 0x10000feb4; encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// 0x10001015c; encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// 0x100010168; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
// 0x100010184; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
// 0x10001018c; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// 0x1000101a8; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
// 0x1000101b4; encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// 0x100010240; encoding: @16@0:8
- (id)controlView;
// 0x100010244; encoding: v24@0:8@16
- (void)installedControlViewToVideoPlayer:(id)arg1;
// 0x100010268; encoding: v16@0:8
- (void)restartControlLayer;
// 0x100010344; encoding: v16@0:8
- (void)exitControlLayer;
// 0x10001043c; encoding: B48@0:8@16Q24{CGPoint=dd}32
- (BOOL)videoPlayer:(id)arg1 gestureRecognizerShouldTrigger:(unsigned long long)arg2 location:(CGPoint)arg3;
// 0x1000104fc; encoding: B24@0:8@16
- (BOOL)canTriggerRotationOfVideoPlayer:(id)arg1;
// 0x100010504; encoding: B16@0:8
- (BOOL)restarted;
// 0x100010514; encoding: @16@0:8
- (id)delegate;
// 0x100010534; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x100010548; encoding: @16@0:8
- (id)moreDelegate;
// 0x100010568; encoding: v24@0:8@16
- (void)setMoreDelegate:(id)arg1;
// 0x10001057c; encoding: @16@0:8
- (id)videoPlayer;
// 0x10001059c; encoding: v24@0:8@16
- (void)setVideoPlayer:(id)arg1;
// 0x1000105b0; encoding: @16@0:8
- (id)rightContainerView;
// 0x1000105c0; encoding: v24@0:8@16
- (void)setRightContainerView:(id)arg1;
// 0x1000105d4; encoding: @16@0:8
- (id)tableView;
// 0x1000105e4; encoding: v24@0:8@16
- (void)setTableView:(id)arg1;
// 0x1000105f8; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
