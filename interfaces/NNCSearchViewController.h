// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c3a00
@interface NNCSearchViewController : BaseViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, AdManagerDelegate>

// property containerView: T@"UIView",W,N,V_containerView
// property searchButton: T@"UIButton",W,N,V_searchButton
// property searchBar: T@"UISearchBar",W,N,V_searchBar
// property normalView: T@"UIView",W,N,V_normalView
// property searchResultView: T@"UIView",W,N,V_searchResultView
// property tableView: T@"UITableView",W,N,V_tableView
// property dataSource: T@"NSMutableArray",&,N,V_dataSource
// property page: Ti,N,V_page
// property headerView: T@"UIScrollView",&,N,V_headerView
// property selectedLine: T@"UIImageView",&,N,V_selectedLine
// property currentIndex: Ti,N,V_currentIndex
// property topButtonWidth: Td,N,V_topButtonWidth
// property typeModelList: T@"NSMutableArray",&,N,V_typeModelList
// property historyLabel: T@"UILabel",W,N,V_historyLabel
// property historyButton: T@"UIButton",W,N,V_historyButton
// property hotLabel: T@"UILabel",W,N,V_hotLabel
// property nncadView: T@"UIView",&,N,V_nncadView
// property adManager: T@"NNCGGManager",&,N,V_adManager
// property nnchasAd: TB,N,V_nnchasAd
// property shownKb: TB,N,V_shownKb
// property keyword: T@"NSString",C,N,V_keyword
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x10005e158; encoding: v20@0:8B16
- (void)viewDidAppear:(BOOL)arg1;
// 0x10005e1d0; encoding: v24@0:8@16
- (void)traitCollectionDidChange:(id)arg1;
// 0x10005e27c; encoding: v16@0:8
- (void)updateUIForCurrentInterfaceStyle;
// 0x10005e338; encoding: v16@0:8
- (void)viewDidLoad;
// 0x10005ec04; encoding: v16@0:8
- (void)createView;
// 0x10005ecec; encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// 0x10005f7bc; encoding: v16@0:8
- (void)nncupdateNormalView;
// 0x10006031c; encoding: v24@0:8@16
- (void)topButtonSelected:(id)arg1;
// 0x100060424; encoding: v24@0:8@16
- (void)searchSelector:(id)arg1;
// 0x1000604c0; encoding: v24@0:8@16
- (void)backSelector:(id)arg1;
// 0x1000604fc; encoding: v24@0:8B16B20
- (void)loadData:(BOOL)arg1 isPullRefresh:(BOOL)arg2;
// 0x100061064; encoding: v24@0:8@16
- (void)searchBarSearchButtonClicked:(id)arg1;
// 0x100061104; encoding: v32@0:8@16@24
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
// 0x100061218; encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// 0x100061254; encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// 0x100061320; encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// 0x10006132c; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
// 0x100061348; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
// 0x100061354; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// 0x100061370; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
// 0x10006137c; encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// 0x1000614ac; encoding: v24@0:8@16
- (void)historySelector:(id)arg1;
// 0x100061528; encoding: v32@0:8{CGSize=dd}16
- (void)nnconAdSizeChanged:(CGSize)arg1;
// 0x10006152c; encoding: q16@0:8
- (long long)preferredStatusBarStyle;
// 0x100061534; encoding: @16@0:8
- (id)keyword;
// 0x100061544; encoding: v24@0:8@16
- (void)setKeyword:(id)arg1;
// 0x100061550; encoding: @16@0:8
- (id)containerView;
// 0x100061570; encoding: v24@0:8@16
- (void)setContainerView:(id)arg1;
// 0x100061584; encoding: @16@0:8
- (id)searchButton;
// 0x1000615a4; encoding: v24@0:8@16
- (void)setSearchButton:(id)arg1;
// 0x1000615b8; encoding: @16@0:8
- (id)searchBar;
// 0x1000615d8; encoding: v24@0:8@16
- (void)setSearchBar:(id)arg1;
// 0x1000615ec; encoding: @16@0:8
- (id)normalView;
// 0x10006160c; encoding: v24@0:8@16
- (void)setNormalView:(id)arg1;
// 0x100061620; encoding: @16@0:8
- (id)searchResultView;
// 0x100061640; encoding: v24@0:8@16
- (void)setSearchResultView:(id)arg1;
// 0x100061654; encoding: @16@0:8
- (id)tableView;
// 0x100061674; encoding: v24@0:8@16
- (void)setTableView:(id)arg1;
// 0x100061688; encoding: @16@0:8
- (id)dataSource;
// 0x100061698; encoding: v24@0:8@16
- (void)setDataSource:(id)arg1;
// 0x1000616ac; encoding: i16@0:8
- (int)page;
// 0x1000616bc; encoding: v20@0:8i16
- (void)setPage:(int)arg1;
// 0x1000616cc; encoding: @16@0:8
- (id)headerView;
// 0x1000616dc; encoding: v24@0:8@16
- (void)setHeaderView:(id)arg1;
// 0x1000616f0; encoding: @16@0:8
- (id)selectedLine;
// 0x100061700; encoding: v24@0:8@16
- (void)setSelectedLine:(id)arg1;
// 0x100061714; encoding: i16@0:8
- (int)currentIndex;
// 0x100061724; encoding: v20@0:8i16
- (void)setCurrentIndex:(int)arg1;
// 0x100061734; encoding: d16@0:8
- (double)topButtonWidth;
// 0x100061744; encoding: v24@0:8d16
- (void)setTopButtonWidth:(double)arg1;
// 0x100061754; encoding: @16@0:8
- (id)typeModelList;
// 0x100061764; encoding: v24@0:8@16
- (void)setTypeModelList:(id)arg1;
// 0x100061778; encoding: @16@0:8
- (id)historyLabel;
// 0x100061798; encoding: v24@0:8@16
- (void)setHistoryLabel:(id)arg1;
// 0x1000617ac; encoding: @16@0:8
- (id)historyButton;
// 0x1000617cc; encoding: v24@0:8@16
- (void)setHistoryButton:(id)arg1;
// 0x1000617e0; encoding: @16@0:8
- (id)hotLabel;
// 0x100061800; encoding: v24@0:8@16
- (void)setHotLabel:(id)arg1;
// 0x100061814; encoding: @16@0:8
- (id)nncadView;
// 0x100061824; encoding: v24@0:8@16
- (void)setNncadView:(id)arg1;
// 0x100061838; encoding: @16@0:8
- (id)adManager;
// 0x100061848; encoding: v24@0:8@16
- (void)setAdManager:(id)arg1;
// 0x10006185c; encoding: B16@0:8
- (BOOL)nnchasAd;
// 0x10006186c; encoding: v20@0:8B16
- (void)setNnchasAd:(BOOL)arg1;
// 0x10006187c; encoding: B16@0:8
- (BOOL)shownKb;
// 0x10006188c; encoding: v20@0:8B16
- (void)setShownKb:(BOOL)arg1;
// 0x10006189c; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
