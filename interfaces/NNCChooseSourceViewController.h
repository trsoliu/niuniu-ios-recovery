// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2240
@interface NNCChooseSourceViewController : FSViewController <UITableViewDelegate, UITableViewDataSource>

// property tableView: T@"UITableView",W,N,V_tableView
// property videoBean: T@"NNCFileBean",&,N,V_videoBean
// property currentIndex: Ti,N,V_currentIndex
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x10000f5e0; encoding: v16@0:8
- (void)viewDidLoad;
// 0x10000f774; encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// 0x10000f7d0; encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// 0x10000f8c4; encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// 0x10000f8d0; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
// 0x10000f8ec; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
// 0x10000f8f4; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// 0x10000f910; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
// 0x10000f91c; encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// 0x10000f950; encoding: q16@0:8
- (long long)preferredStatusBarStyle;
// 0x10000f958; encoding: @16@0:8
- (id)videoBean;
// 0x10000f968; encoding: v24@0:8@16
- (void)setVideoBean:(id)arg1;
// 0x10000f97c; encoding: i16@0:8
- (int)currentIndex;
// 0x10000f98c; encoding: v20@0:8i16
- (void)setCurrentIndex:(int)arg1;
// 0x10000f99c; encoding: @16@0:8
- (id)tableView;
// 0x10000f9bc; encoding: v24@0:8@16
- (void)setTableView:(id)arg1;
// 0x10000f9d0; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
