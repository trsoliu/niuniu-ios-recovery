// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2b50
@interface NNCFavViewController : BaseViewController <UITableViewDelegate, UITableViewDataSource, VideoItemViewDelegate, AdManagerDelegate>

// property isEditMode: TB,N,V_isEditMode
// property rightItem: T@"UIBarButtonItem",&,N,V_rightItem
// property dataSource: T@"NSMutableArray",&,N,V_dataSource
// property orignSource: T@"NSMutableArray",&,N,V_orignSource
// property selectedItemSource: T@"NSMutableArray",&,N,V_selectedItemSource
// property tableView: T@"UITableView",&,N,V_tableView
// property nncselectView: T@"UIView",&,N,V_nncselectView
// property nncselectAllButton: T@"UIButton",&,N,V_nncselectAllButton
// property actionButton: T@"UIButton",&,N,V_actionButton
// property nncadView: T@"UIView",&,N,V_nncadView
// property adManager: T@"NNCGGManager",&,N,V_adManager
// property nnchasAd: TB,N,V_nnchasAd
// property headerView: T@"UIScrollView",&,N,V_headerView
// property selectedLine: T@"UIImageView",&,N,V_selectedLine
// property currentIndex: Ti,N,V_currentIndex
// property topButtonWidth: Td,N,V_topButtonWidth
// property typeModelList: T@"NSMutableArray",&,N,V_typeModelList
// property page: Tq,N,V_page
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x10002d290; encoding: v16@0:8
- (void)backButtonAction;
// 0x10002d2e8; encoding: v16@0:8
- (void)viewDidLoad;
// 0x10002d5b0; encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// 0x10002e8d4; encoding: v24@0:8@16
- (void)topButtonSelected:(id)arg1;
// 0x10002e9dc; encoding: v16@0:8
- (void)nncchangeEditMode;
// 0x10002eb48; encoding: @16@0:8
- (id)getRightTitle;
// 0x10002eb74; encoding: v24@0:8@16
- (void)selectAllSelector:(id)arg1;
// 0x10002ec14; encoding: v24@0:8@16
- (void)actionSeletor:(id)arg1;
// 0x10002f414; encoding: v24@0:8B16B20
- (void)loadData:(BOOL)arg1 isPullRefresh:(BOOL)arg2;
// 0x10002ffa4; encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// 0x10002ffe0; encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// 0x1000300d4; encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// 0x1000300e4; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
// 0x100030158; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
// 0x1000301e8; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// 0x100030204; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
// 0x100030210; encoding: v24@0:8@16
- (void)onItemTapped:(id)arg1;
// 0x1000303b8; encoding: B24@0:8@16
- (BOOL)isItemSelected:(id)arg1;
// 0x10003041c; encoding: v32@0:8{CGSize=dd}16
- (void)nnconAdSizeChanged:(CGSize)arg1;
// 0x10003044c; encoding: q16@0:8
- (long long)preferredStatusBarStyle;
// 0x100030454; encoding: B16@0:8
- (BOOL)isEditMode;
// 0x100030464; encoding: v20@0:8B16
- (void)setIsEditMode:(BOOL)arg1;
// 0x100030474; encoding: @16@0:8
- (id)rightItem;
// 0x100030484; encoding: v24@0:8@16
- (void)setRightItem:(id)arg1;
// 0x100030498; encoding: @16@0:8
- (id)dataSource;
// 0x1000304a8; encoding: v24@0:8@16
- (void)setDataSource:(id)arg1;
// 0x1000304bc; encoding: @16@0:8
- (id)orignSource;
// 0x1000304cc; encoding: v24@0:8@16
- (void)setOrignSource:(id)arg1;
// 0x1000304e0; encoding: @16@0:8
- (id)selectedItemSource;
// 0x1000304f0; encoding: v24@0:8@16
- (void)setSelectedItemSource:(id)arg1;
// 0x100030504; encoding: @16@0:8
- (id)tableView;
// 0x100030514; encoding: v24@0:8@16
- (void)setTableView:(id)arg1;
// 0x100030528; encoding: @16@0:8
- (id)nncselectView;
// 0x100030538; encoding: v24@0:8@16
- (void)setNncselectView:(id)arg1;
// 0x10003054c; encoding: @16@0:8
- (id)nncselectAllButton;
// 0x10003055c; encoding: v24@0:8@16
- (void)setNncselectAllButton:(id)arg1;
// 0x100030570; encoding: @16@0:8
- (id)actionButton;
// 0x100030580; encoding: v24@0:8@16
- (void)setActionButton:(id)arg1;
// 0x100030594; encoding: @16@0:8
- (id)nncadView;
// 0x1000305a4; encoding: v24@0:8@16
- (void)setNncadView:(id)arg1;
// 0x1000305b8; encoding: @16@0:8
- (id)adManager;
// 0x1000305c8; encoding: v24@0:8@16
- (void)setAdManager:(id)arg1;
// 0x1000305dc; encoding: B16@0:8
- (BOOL)nnchasAd;
// 0x1000305ec; encoding: v20@0:8B16
- (void)setNnchasAd:(BOOL)arg1;
// 0x1000305fc; encoding: @16@0:8
- (id)headerView;
// 0x10003060c; encoding: v24@0:8@16
- (void)setHeaderView:(id)arg1;
// 0x100030620; encoding: @16@0:8
- (id)selectedLine;
// 0x100030630; encoding: v24@0:8@16
- (void)setSelectedLine:(id)arg1;
// 0x100030644; encoding: i16@0:8
- (int)currentIndex;
// 0x100030654; encoding: v20@0:8i16
- (void)setCurrentIndex:(int)arg1;
// 0x100030664; encoding: d16@0:8
- (double)topButtonWidth;
// 0x100030674; encoding: v24@0:8d16
- (void)setTopButtonWidth:(double)arg1;
// 0x100030684; encoding: @16@0:8
- (id)typeModelList;
// 0x100030694; encoding: v24@0:8@16
- (void)setTypeModelList:(id)arg1;
// 0x1000306a8; encoding: q16@0:8
- (long long)page;
// 0x1000306b8; encoding: v24@0:8q16
- (void)setPage:(long long)arg1;
// 0x1000306c8; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
