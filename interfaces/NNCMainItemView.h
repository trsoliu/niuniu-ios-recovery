// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c22e0
@interface NNCMainItemView : UIView <UITableViewDelegate, UITableViewDataSource, VideoItemViewDelegate, AdManagerDelegate>

// property typeModel: T@"NNCMainPageTypeModel",&,N,V_typeModel
// property tableView: T@"UITableView",&,N,V_tableView
// property headerView: T@"UIView",&,N,V_headerView
// property dataSource: T@"NSMutableArray",&,N,V_dataSource
// property orignSource: T@"NSMutableArray",&,N,V_orignSource
// property isLoading: TB,N,V_isLoading
// property page: Tq,N,V_page
// property singleLineCount: Tq,N,V_singleLineCount
// property titleSelectedSource: T@"NSMutableDictionary",&,N,V_titleSelectedSource
// property nncadView: T@"UIView",&,N,V_nncadView
// property adManager: T@"NNCGGManager",&,N,V_adManager
// property nnchasAd: TB,N,V_nnchasAd
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x100010668; encoding: @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
- (id)initWithFrame:(CGRect)arg1 typeModel:(id)arg2;
// 0x100010b78; encoding: v16@0:8
- (void)didMoveToSuperview;
// 0x100010c48; encoding: v16@0:8
- (void)setupHeaderView;
// 0x1000116d4; encoding: v24@0:8@16
- (void)topButtonTapped:(id)arg1;
// 0x100011834; encoding: v16@0:8
- (void)nncappear;
// 0x1000118a4; encoding: v24@0:8B16B20
- (void)loadData:(BOOL)arg1 isPullRefresh:(BOOL)arg2;
// 0x100012808; encoding: v16@0:8
- (void)layoutSubviews;
// 0x1000128a0; encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// 0x1000128dc; encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// 0x1000129d4; encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// 0x1000129f8; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
// 0x100012a6c; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
// 0x100012af8; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// 0x100012b14; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
// 0x100012b20; encoding: v24@0:8@16
- (void)onItemTapped:(id)arg1;
// 0x100012c20; encoding: v32@0:8{CGSize=dd}16
- (void)nnconAdSizeChanged:(CGSize)arg1;
// 0x100012c50; encoding: @16@0:8
- (id)typeModel;
// 0x100012c60; encoding: v24@0:8@16
- (void)setTypeModel:(id)arg1;
// 0x100012c74; encoding: @16@0:8
- (id)tableView;
// 0x100012c84; encoding: v24@0:8@16
- (void)setTableView:(id)arg1;
// 0x100012c98; encoding: @16@0:8
- (id)headerView;
// 0x100012ca8; encoding: v24@0:8@16
- (void)setHeaderView:(id)arg1;
// 0x100012cbc; encoding: @16@0:8
- (id)dataSource;
// 0x100012ccc; encoding: v24@0:8@16
- (void)setDataSource:(id)arg1;
// 0x100012ce0; encoding: @16@0:8
- (id)orignSource;
// 0x100012cf0; encoding: v24@0:8@16
- (void)setOrignSource:(id)arg1;
// 0x100012d04; encoding: B16@0:8
- (BOOL)isLoading;
// 0x100012d14; encoding: v20@0:8B16
- (void)setIsLoading:(BOOL)arg1;
// 0x100012d24; encoding: q16@0:8
- (long long)page;
// 0x100012d34; encoding: v24@0:8q16
- (void)setPage:(long long)arg1;
// 0x100012d44; encoding: q16@0:8
- (long long)singleLineCount;
// 0x100012d54; encoding: v24@0:8q16
- (void)setSingleLineCount:(long long)arg1;
// 0x100012d64; encoding: @16@0:8
- (id)titleSelectedSource;
// 0x100012d74; encoding: v24@0:8@16
- (void)setTitleSelectedSource:(id)arg1;
// 0x100012d88; encoding: @16@0:8
- (id)nncadView;
// 0x100012d98; encoding: v24@0:8@16
- (void)setNncadView:(id)arg1;
// 0x100012dac; encoding: @16@0:8
- (id)adManager;
// 0x100012dbc; encoding: v24@0:8@16
- (void)setAdManager:(id)arg1;
// 0x100012dd0; encoding: B16@0:8
- (BOOL)nnchasAd;
// 0x100012de0; encoding: v20@0:8B16
- (void)setNnchasAd:(BOOL)arg1;
// 0x100012df0; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
