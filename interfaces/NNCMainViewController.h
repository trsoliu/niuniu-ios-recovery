// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2ba0
@interface NNCMainViewController : BaseViewController <UIScrollViewDelegate, NNCRecommendViewDelegate, NNCTeenViewDelegate, WindMillIntersititialAdDelegate>

// property headerView: T@"UIScrollView",&,N,V_headerView
// property headerBgView: T@"UIView",&,N,V_headerBgView
// property scrollView: T@"UIScrollView",&,N,V_scrollView
// property selectedLine: T@"UIImageView",&,N,V_selectedLine
// property currentIndex: Ti,N,V_currentIndex
// property topButtonWidth: Td,N,V_topButtonWidth
// property selectedButton: T@"NNCFontButton",W,N,V_selectedButton
// property typeModelList: T@"NSMutableArray",&,N,V_typeModelList
// property searchButton: T@"UIButton",&,N,V_searchButton
// property recommendView: T@"RecommendView",&,N,V_recommendView
// property intersititialAd: T@"WindMillIntersititialAd",&,N,V_intersititialAd
// property isTeenShown: TB,N,V_isTeenShown
// property isConfigRequestFinished: TB,N,V_isConfigRequestFinished
// property searchTextField: T@"UITextField",&,N,V_searchTextField
// property shownHistory: TB,N,V_shownHistory
// property historyModel: T@"NNCFileNetHistory",&,N,V_historyModel
// property historyTimer: T@"NSTimer",&,N,V_historyTimer
// property historyCountDown: Tq,N,V_historyCountDown
// property historyTimelabel: T@"UILabel",W,N,V_historyTimelabel
// property historyView: T@"UIView",W,N,V_historyView
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000307e4; encoding: v16@0:8
- (void)viewDidLoad;
// 0x10003086c; encoding: v16@0:8
- (void)nncresetData;
// 0x1000308a8; encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// 0x100030910; encoding: v20@0:8B16
- (void)viewDidAppear:(BOOL)arg1;
// 0x100030970; encoding: v20@0:8B16
- (void)viewDidDisappear:(BOOL)arg1;
// 0x1000309d0; encoding: v16@0:8
- (void)showHistory;
// 0x10003106c; encoding: v24@0:8@16
- (void)timerSelector:(id)arg1;
// 0x10003114c; encoding: v16@0:8
- (void)stopTimer;
// 0x1000311b4; encoding: v24@0:8@16
- (void)historyTapped:(id)arg1;
// 0x10003129c; encoding: v20@0:8B16
- (void)nncstartFirstRequest:(BOOL)arg1;
// 0x100031580; encoding: v16@0:8
- (void)nncshowNoticeOrUpdate;
// 0x1000315c0; encoding: v16@0:8
- (void)teenViewDismiss;
// 0x100031650; encoding: v16@0:8
- (void)judgeShowNoticeOrUpdate;
// 0x10003174c; encoding: v16@0:8
- (void)nncshowUpdateView;
// 0x100031900; encoding: v16@0:8
- (void)nncshowNoticeView;
// 0x100031bd0; encoding: v16@0:8
- (void)shouchang;
// 0x100031c4c; encoding: v16@0:8
- (void)shouchang2;
// 0x100031cc8; encoding: v24@0:8@16
- (void)searchButtonSelected:(id)arg1;
// 0x100031d44; encoding: v24@0:8@16
- (void)traitCollectionDidChange:(id)arg1;
// 0x100031ed4; encoding: v16@0:8
- (void)updateUIForCurrentInterfaceStyle;
// 0x1000321d8; encoding: v24@0:8@16
- (void)handleNotification:(id)arg1;
// 0x100032334; encoding: v16@0:8
- (void)createView;
// 0x10003366c; encoding: v24@0:8@16
- (void)topButtonSelected:(id)arg1;
// 0x100033888; encoding: v24@0:8@16
- (void)scrollViewDidScroll:(id)arg1;
// 0x100033a1c; encoding: v24@0:8@16
- (void)scrollViewDidEndDecelerating:(id)arg1;
// 0x100033c4c; encoding: v32@0:8@16q24
- (void)onRecommendViewTappedMore:(id)arg1 typeId:(long long)arg2;
// 0x100033d98; encoding: q16@0:8
- (long long)preferredStatusBarStyle;
// 0x100033da0; encoding: v24@0:8@16
- (void)intersititialAdDidLoad:(id)arg1;
// 0x100033ea8; encoding: @16@0:8
- (id)headerView;
// 0x100033eb8; encoding: v24@0:8@16
- (void)setHeaderView:(id)arg1;
// 0x100033ecc; encoding: @16@0:8
- (id)headerBgView;
// 0x100033edc; encoding: v24@0:8@16
- (void)setHeaderBgView:(id)arg1;
// 0x100033ef0; encoding: @16@0:8
- (id)scrollView;
// 0x100033f00; encoding: v24@0:8@16
- (void)setScrollView:(id)arg1;
// 0x100033f14; encoding: @16@0:8
- (id)selectedLine;
// 0x100033f24; encoding: v24@0:8@16
- (void)setSelectedLine:(id)arg1;
// 0x100033f38; encoding: i16@0:8
- (int)currentIndex;
// 0x100033f48; encoding: v20@0:8i16
- (void)setCurrentIndex:(int)arg1;
// 0x100033f58; encoding: d16@0:8
- (double)topButtonWidth;
// 0x100033f68; encoding: v24@0:8d16
- (void)setTopButtonWidth:(double)arg1;
// 0x100033f78; encoding: @16@0:8
- (id)selectedButton;
// 0x100033f98; encoding: v24@0:8@16
- (void)setSelectedButton:(id)arg1;
// 0x100033fac; encoding: @16@0:8
- (id)typeModelList;
// 0x100033fbc; encoding: v24@0:8@16
- (void)setTypeModelList:(id)arg1;
// 0x100033fd0; encoding: @16@0:8
- (id)searchButton;
// 0x100033fe0; encoding: v24@0:8@16
- (void)setSearchButton:(id)arg1;
// 0x100033ff4; encoding: @16@0:8
- (id)recommendView;
// 0x100034004; encoding: v24@0:8@16
- (void)setRecommendView:(id)arg1;
// 0x100034018; encoding: @16@0:8
- (id)intersititialAd;
// 0x100034028; encoding: v24@0:8@16
- (void)setIntersititialAd:(id)arg1;
// 0x10003403c; encoding: B16@0:8
- (BOOL)isTeenShown;
// 0x10003404c; encoding: v20@0:8B16
- (void)setIsTeenShown:(BOOL)arg1;
// 0x10003405c; encoding: B16@0:8
- (BOOL)isConfigRequestFinished;
// 0x10003406c; encoding: v20@0:8B16
- (void)setIsConfigRequestFinished:(BOOL)arg1;
// 0x10003407c; encoding: @16@0:8
- (id)searchTextField;
// 0x10003408c; encoding: v24@0:8@16
- (void)setSearchTextField:(id)arg1;
// 0x1000340a0; encoding: B16@0:8
- (BOOL)shownHistory;
// 0x1000340b0; encoding: v20@0:8B16
- (void)setShownHistory:(BOOL)arg1;
// 0x1000340c0; encoding: @16@0:8
- (id)historyModel;
// 0x1000340d0; encoding: v24@0:8@16
- (void)setHistoryModel:(id)arg1;
// 0x1000340e4; encoding: @16@0:8
- (id)historyTimer;
// 0x1000340f4; encoding: v24@0:8@16
- (void)setHistoryTimer:(id)arg1;
// 0x100034108; encoding: q16@0:8
- (long long)historyCountDown;
// 0x100034118; encoding: v24@0:8q16
- (void)setHistoryCountDown:(long long)arg1;
// 0x100034128; encoding: @16@0:8
- (id)historyTimelabel;
// 0x100034148; encoding: v24@0:8@16
- (void)setHistoryTimelabel:(id)arg1;
// 0x10003415c; encoding: @16@0:8
- (id)historyView;
// 0x10003417c; encoding: v24@0:8@16
- (void)setHistoryView:(id)arg1;
// 0x100034190; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
