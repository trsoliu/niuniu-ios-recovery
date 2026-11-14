// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c5030
@interface NNCMessageView : UIView <UITableViewDelegate, UITableViewDataSource, AdManagerDelegate>

// property dataSource: T@"NSMutableArray",&,N,V_dataSource
// property tableView: T@"UITableView",&,N,V_tableView
// property isLoading: TB,N,V_isLoading
// property page: Tq,N,V_page
// property nncadView: T@"UIView",&,N,V_nncadView
// property adManager: T@"NNCGGManager",&,N,V_adManager
// property nnchasAd: TB,N,V_nnchasAd
// property type: Ti,N,V_type
// property nncselfController: T@"NNCMessageViewController",W,N,V_nncselfController
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000b5c00; encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(CGRect)arg1;
// 0x1000b5fc8; encoding: v20@0:8i16
- (void)setType:(int)arg1;
// 0x1000b6108; encoding: v16@0:8
- (void)nncappear;
// 0x1000b626c; encoding: v24@0:8B16B20
- (void)loadData:(BOOL)arg1 isPullRefresh:(BOOL)arg2;
// 0x1000b6b9c; encoding: v16@0:8
- (void)layoutSubviews;
// 0x1000b6c34; encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// 0x1000b6c70; encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// 0x1000b6d3c; encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// 0x1000b6de0; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
// 0x1000b6e54; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
// 0x1000b6ee4; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// 0x1000b6f00; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
// 0x1000b6f0c; encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// 0x1000b70c4; encoding: v32@0:8{CGSize=dd}16
- (void)nnconAdSizeChanged:(CGSize)arg1;
// 0x1000b70f4; encoding: i16@0:8
- (int)type;
// 0x1000b7104; encoding: @16@0:8
- (id)nncselfController;
// 0x1000b7124; encoding: v24@0:8@16
- (void)setNncselfController:(id)arg1;
// 0x1000b7138; encoding: @16@0:8
- (id)dataSource;
// 0x1000b7148; encoding: v24@0:8@16
- (void)setDataSource:(id)arg1;
// 0x1000b715c; encoding: @16@0:8
- (id)tableView;
// 0x1000b716c; encoding: v24@0:8@16
- (void)setTableView:(id)arg1;
// 0x1000b7180; encoding: B16@0:8
- (BOOL)isLoading;
// 0x1000b7190; encoding: v20@0:8B16
- (void)setIsLoading:(BOOL)arg1;
// 0x1000b71a0; encoding: q16@0:8
- (long long)page;
// 0x1000b71b0; encoding: v24@0:8q16
- (void)setPage:(long long)arg1;
// 0x1000b71c0; encoding: @16@0:8
- (id)nncadView;
// 0x1000b71d0; encoding: v24@0:8@16
- (void)setNncadView:(id)arg1;
// 0x1000b71e4; encoding: @16@0:8
- (id)adManager;
// 0x1000b71f4; encoding: v24@0:8@16
- (void)setAdManager:(id)arg1;
// 0x1000b7208; encoding: B16@0:8
- (BOOL)nnchasAd;
// 0x1000b7218; encoding: v20@0:8B16
- (void)setNnchasAd:(BOOL)arg1;
// 0x1000b7228; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
