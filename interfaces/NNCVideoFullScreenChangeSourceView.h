// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c5ad0
@interface NNCVideoFullScreenChangeSourceView : UIView <UITableViewDelegate, UITableViewDataSource, SJControlLayer>

// property videoPlayer: T@"SJBaseVideoPlayer",W,N,V_videoPlayer
// property rightContainerView: T@"UIView",&,N,V_rightContainerView
// property tableView: T@"UITableView",&,N,V_tableView
// property delegate: T@"<NNCVideoFullScreenChangeSourceViewDelegate>",W,N,V_delegate
// property moreDelegate: T@"<SJMoreSettingControlLayerDelegate>",W,N,V_moreDelegate
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000ce090; encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(CGRect)arg1;
// 0x1000ce0e0; encoding: @40@0:8{CGPoint=dd}16@32
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
// 0x1000ce148; encoding: v16@0:8
- (void)setupView;
// 0x1000ce4dc; encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// 0x1000ce550; encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// 0x1000cea8c; encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// 0x1000cea98; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
// 0x1000ceab4; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
// 0x1000ceabc; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// 0x1000cead8; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
// 0x1000ceae4; encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// 0x1000ceb70; encoding: @16@0:8
- (id)controlView;
// 0x1000ceb74; encoding: v24@0:8@16
- (void)installedControlViewToVideoPlayer:(id)arg1;
// 0x1000ceb98; encoding: v16@0:8
- (void)restartControlLayer;
// 0x1000cec74; encoding: v16@0:8
- (void)exitControlLayer;
// 0x1000ced6c; encoding: B48@0:8@16Q24{CGPoint=dd}32
- (BOOL)videoPlayer:(id)arg1 gestureRecognizerShouldTrigger:(unsigned long long)arg2 location:(CGPoint)arg3;
// 0x1000cee2c; encoding: B24@0:8@16
- (BOOL)canTriggerRotationOfVideoPlayer:(id)arg1;
// 0x1000cee34; encoding: B16@0:8
- (BOOL)restarted;
// 0x1000cee44; encoding: @16@0:8
- (id)delegate;
// 0x1000cee64; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x1000cee78; encoding: @16@0:8
- (id)moreDelegate;
// 0x1000cee98; encoding: v24@0:8@16
- (void)setMoreDelegate:(id)arg1;
// 0x1000ceeac; encoding: @16@0:8
- (id)videoPlayer;
// 0x1000ceecc; encoding: v24@0:8@16
- (void)setVideoPlayer:(id)arg1;
// 0x1000ceee0; encoding: @16@0:8
- (id)rightContainerView;
// 0x1000ceef0; encoding: v24@0:8@16
- (void)setRightContainerView:(id)arg1;
// 0x1000cef04; encoding: @16@0:8
- (id)tableView;
// 0x1000cef14; encoding: v24@0:8@16
- (void)setTableView:(id)arg1;
// 0x1000cef28; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
