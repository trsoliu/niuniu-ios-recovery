// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c34b0
@interface NNCRankView : UIView <UITableViewDelegate, UITableViewDataSource>

// property tableView: T@"UITableView",&,N,V_tableView
// property dataSource: T@"NSMutableArray",&,N,V_dataSource
// property isLoading: TB,N,V_isLoading
// property typeModel: T@"NNCMainPageTypeModel",&,N,V_typeModel
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x100053ad8; encoding: @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
- (id)initWithFrame:(CGRect)arg1 typeModel:(id)arg2;
// 0x100053dd4; encoding: v16@0:8
- (void)nncappear;
// 0x100053e3c; encoding: v16@0:8
- (void)loadData;
// 0x100054558; encoding: v16@0:8
- (void)layoutSubviews;
// 0x1000545f0; encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// 0x10005462c; encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// 0x10005470c; encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// 0x100054718; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
// 0x100054734; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
// 0x100054740; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// 0x10005475c; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
// 0x100054768; encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// 0x1000548a8; encoding: @16@0:8
- (id)tableView;
// 0x1000548b8; encoding: v24@0:8@16
- (void)setTableView:(id)arg1;
// 0x1000548cc; encoding: @16@0:8
- (id)dataSource;
// 0x1000548dc; encoding: v24@0:8@16
- (void)setDataSource:(id)arg1;
// 0x1000548f0; encoding: B16@0:8
- (BOOL)isLoading;
// 0x100054900; encoding: v20@0:8B16
- (void)setIsLoading:(BOOL)arg1;
// 0x100054910; encoding: @16@0:8
- (id)typeModel;
// 0x100054920; encoding: v24@0:8@16
- (void)setTypeModel:(id)arg1;
// 0x100054934; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
