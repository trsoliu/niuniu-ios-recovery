// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c28d0
@interface NNCDownloadView : UIView <UITableViewDelegate, UITableViewDataSource, AdManagerDelegate>

// property dataSource: T@"NSMutableArray",&,N,V_dataSource
// property tableView: T@"UITableView",&,N,V_tableView
// property nncselectView: T@"UIView",&,N,V_nncselectView
// property nncselectAllButton: T@"UIButton",&,N,V_nncselectAllButton
// property actionButton: T@"UIButton",&,N,V_actionButton
// property controlView: T@"UIView",&,N,V_controlView
// property pauseAllButton: T@"UIButton",&,N,V_pauseAllButton
// property startAllButton: T@"UIButton",&,N,V_startAllButton
// property selectedItemSource: T@"NSMutableArray",&,N,V_selectedItemSource
// property nncadView: T@"UIView",&,N,V_nncadView
// property adManager: T@"NNCGGManager",&,N,V_adManager
// property nnchasAd: TB,N,V_nnchasAd
// property type: Ti,N,V_type
// property isEditMode: TB,N,V_isEditMode
// property videoId: Ti,N,V_videoId
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000238b4; encoding: @16@0:8
- (id)nncadView;
// 0x100023900; encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(CGRect)arg1;
// 0x100024554; encoding: v24@0:8@16
- (void)selectAllSelector:(id)arg1;
// 0x100024700; encoding: v24@0:8@16
- (void)actionSeletor:(id)arg1;
// 0x1000249b0; encoding: v24@0:8@16
- (void)pauseAllSelector:(id)arg1;
// 0x1000249e8; encoding: v20@0:8i16
- (void)setType:(int)arg1;
// 0x100024b70; encoding: v24@0:8@16
- (void)startAllSelector:(id)arg1;
// 0x100024da8; encoding: v16@0:8
- (void)refresh;
// 0x100025558; encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// 0x100025594; encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// 0x100025750; encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// 0x10002575c; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
// 0x100025764; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
// 0x100025770; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// 0x10002578c; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
// 0x100025794; encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// 0x100025ba4; encoding: v24@0:8@16
- (void)playItem:(id)arg1;
// 0x1000260b4; encoding: v20@0:8B16
- (void)setIsEditMode:(BOOL)arg1;
// 0x10002628c; encoding: v32@0:8{CGSize=dd}16
- (void)nnconAdSizeChanged:(CGSize)arg1;
// 0x100026308; encoding: i16@0:8
- (int)type;
// 0x100026318; encoding: B16@0:8
- (BOOL)isEditMode;
// 0x100026328; encoding: i16@0:8
- (int)videoId;
// 0x100026338; encoding: v20@0:8i16
- (void)setVideoId:(int)arg1;
// 0x100026348; encoding: @16@0:8
- (id)dataSource;
// 0x100026358; encoding: v24@0:8@16
- (void)setDataSource:(id)arg1;
// 0x10002636c; encoding: @16@0:8
- (id)tableView;
// 0x10002637c; encoding: v24@0:8@16
- (void)setTableView:(id)arg1;
// 0x100026390; encoding: @16@0:8
- (id)nncselectView;
// 0x1000263a0; encoding: v24@0:8@16
- (void)setNncselectView:(id)arg1;
// 0x1000263b4; encoding: @16@0:8
- (id)nncselectAllButton;
// 0x1000263c4; encoding: v24@0:8@16
- (void)setNncselectAllButton:(id)arg1;
// 0x1000263d8; encoding: @16@0:8
- (id)actionButton;
// 0x1000263e8; encoding: v24@0:8@16
- (void)setActionButton:(id)arg1;
// 0x1000263fc; encoding: @16@0:8
- (id)controlView;
// 0x10002640c; encoding: v24@0:8@16
- (void)setControlView:(id)arg1;
// 0x100026420; encoding: @16@0:8
- (id)pauseAllButton;
// 0x100026430; encoding: v24@0:8@16
- (void)setPauseAllButton:(id)arg1;
// 0x100026444; encoding: @16@0:8
- (id)startAllButton;
// 0x100026454; encoding: v24@0:8@16
- (void)setStartAllButton:(id)arg1;
// 0x100026468; encoding: @16@0:8
- (id)selectedItemSource;
// 0x100026478; encoding: v24@0:8@16
- (void)setSelectedItemSource:(id)arg1;
// 0x10002648c; encoding: v24@0:8@16
- (void)setNncadView:(id)arg1;
// 0x1000264a0; encoding: @16@0:8
- (id)adManager;
// 0x1000264b0; encoding: v24@0:8@16
- (void)setAdManager:(id)arg1;
// 0x1000264c4; encoding: B16@0:8
- (BOOL)nnchasAd;
// 0x1000264d4; encoding: v20@0:8B16
- (void)setNnchasAd:(BOOL)arg1;
// 0x1000264e4; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
