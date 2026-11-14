// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c35f0
@interface NNCHistoryViewController : BaseViewController <UITableViewDelegate, UITableViewDataSource, AdManagerDelegate>

// property isEditMode: TB,N,V_isEditMode
// property rightItem: T@"UIBarButtonItem",&,N,V_rightItem
// property nncoriginDataSource: T@"NSMutableArray",&,N,V_nncoriginDataSource
// property dataSource: T@"NSMutableArray",&,N,V_dataSource
// property selectedItemSource: T@"NSMutableArray",&,N,V_selectedItemSource
// property tableView: T@"UITableView",&,N,V_tableView
// property nncselectView: T@"UIView",&,N,V_nncselectView
// property nncselectAllButton: T@"UIButton",&,N,V_nncselectAllButton
// property actionButton: T@"UIButton",&,N,V_actionButton
// property controlView: T@"UIView",&,N,V_controlView
// property downloadButton: T@"UIButton",&,N,V_downloadButton
// property uploadButton: T@"UIButton",&,N,V_uploadButton
// property nncadView: T@"UIView",&,N,V_nncadView
// property adManager: T@"NNCGGManager",&,N,V_adManager
// property nnchasAd: TB,N,V_nnchasAd
// property dateForamtter: T@"NSDateFormatter",&,N,V_dateForamtter
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x100056140; encoding: v16@0:8
- (void)backButtonAction;
// 0x100056198; encoding: v16@0:8
- (void)viewDidLoad;
// 0x1000564b0; encoding: v16@0:8
- (void)nncchangeEditMode;
// 0x10005663c; encoding: @16@0:8
- (id)getRightTitle;
// 0x100056668; encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// 0x1000576b0; encoding: v24@0:8@16
- (void)downloadSelector:(id)arg1;
// 0x100057c60; encoding: v24@0:8@16
- (void)uploadSelector:(id)arg1;
// 0x100058110; encoding: v16@0:8
- (void)nncdealSource;
// 0x100058694; encoding: v24@0:8@16
- (void)selectAllSelector:(id)arg1;
// 0x100058734; encoding: v24@0:8@16
- (void)actionSeletor:(id)arg1;
// 0x1000588f8; encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// 0x100058934; encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// 0x100058a4c; encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// 0x100058aec; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
// 0x100058b60; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
// 0x100058bf0; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// 0x100058c0c; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
// 0x100058c18; encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// 0x100058dbc; encoding: v32@0:8{CGSize=dd}16
- (void)nnconAdSizeChanged:(CGSize)arg1;
// 0x100058dec; encoding: q16@0:8
- (long long)preferredStatusBarStyle;
// 0x100058df4; encoding: B16@0:8
- (BOOL)isEditMode;
// 0x100058e04; encoding: v20@0:8B16
- (void)setIsEditMode:(BOOL)arg1;
// 0x100058e14; encoding: @16@0:8
- (id)rightItem;
// 0x100058e24; encoding: v24@0:8@16
- (void)setRightItem:(id)arg1;
// 0x100058e38; encoding: @16@0:8
- (id)nncoriginDataSource;
// 0x100058e48; encoding: v24@0:8@16
- (void)setNncoriginDataSource:(id)arg1;
// 0x100058e5c; encoding: @16@0:8
- (id)dataSource;
// 0x100058e6c; encoding: v24@0:8@16
- (void)setDataSource:(id)arg1;
// 0x100058e80; encoding: @16@0:8
- (id)selectedItemSource;
// 0x100058e90; encoding: v24@0:8@16
- (void)setSelectedItemSource:(id)arg1;
// 0x100058ea4; encoding: @16@0:8
- (id)tableView;
// 0x100058eb4; encoding: v24@0:8@16
- (void)setTableView:(id)arg1;
// 0x100058ec8; encoding: @16@0:8
- (id)nncselectView;
// 0x100058ed8; encoding: v24@0:8@16
- (void)setNncselectView:(id)arg1;
// 0x100058eec; encoding: @16@0:8
- (id)nncselectAllButton;
// 0x100058efc; encoding: v24@0:8@16
- (void)setNncselectAllButton:(id)arg1;
// 0x100058f10; encoding: @16@0:8
- (id)actionButton;
// 0x100058f20; encoding: v24@0:8@16
- (void)setActionButton:(id)arg1;
// 0x100058f34; encoding: @16@0:8
- (id)controlView;
// 0x100058f44; encoding: v24@0:8@16
- (void)setControlView:(id)arg1;
// 0x100058f58; encoding: @16@0:8
- (id)downloadButton;
// 0x100058f68; encoding: v24@0:8@16
- (void)setDownloadButton:(id)arg1;
// 0x100058f7c; encoding: @16@0:8
- (id)uploadButton;
// 0x100058f8c; encoding: v24@0:8@16
- (void)setUploadButton:(id)arg1;
// 0x100058fa0; encoding: @16@0:8
- (id)nncadView;
// 0x100058fb0; encoding: v24@0:8@16
- (void)setNncadView:(id)arg1;
// 0x100058fc4; encoding: @16@0:8
- (id)adManager;
// 0x100058fd4; encoding: v24@0:8@16
- (void)setAdManager:(id)arg1;
// 0x100058fe8; encoding: B16@0:8
- (BOOL)nnchasAd;
// 0x100058ff8; encoding: v20@0:8B16
- (void)setNnchasAd:(BOOL)arg1;
// 0x100059008; encoding: @16@0:8
- (id)dateForamtter;
// 0x100059018; encoding: v24@0:8@16
- (void)setDateForamtter:(id)arg1;
// 0x10005902c; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
