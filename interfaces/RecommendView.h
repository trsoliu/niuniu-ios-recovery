// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c6570
@interface RecommendView : UIView <UITableViewDelegate, UITableViewDataSource, VideoItemViewDelegate, NNCFileHistoryUpdateCallback, UICollectionViewDataSource, UICollectionViewDelegate, AdManagerDelegate>

// property tableView: T@"UITableView",&,N,V_tableView
// property dataSource: T@"NSMutableArray",&,N,V_dataSource
// property titleSource: T@"NSMutableArray",&,N,V_titleSource
// property lineCountDict: T@"NSMutableDictionary",&,N,V_lineCountDict
// property isLoading: TB,N,V_isLoading
// property headerView: T@"UIView",&,N,V_headerView
// property carouselView: T@"CarouselView",&,N,V_carouselView
// property historyView: T@"UIView",&,N,V_historyView
// property historyButton: T@"UIButton",W,N,V_historyButton
// property historyTitleLabel: T@"UILabel",W,N,V_historyTitleLabel
// property historyCollectionView: T@"UICollectionView",W,N,V_historyCollectionView
// property historySource: T@"NSMutableArray",&,N,V_historySource
// property nncadView: T@"UIView",&,N,V_nncadView
// property adManager: T@"NNCGGManager",&,N,V_adManager
// property nnchasAd: TB,N,V_nnchasAd
// property isLoadingORFailed: TB,N,V_isLoadingORFailed
// property delegate: T@"<NNCRecommendViewDelegate>",W,N,V_delegate
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000e9858; encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(CGRect)arg1;
// 0x1000ea118; encoding: v16@0:8
- (void)didMoveToSuperview;
// 0x1000ea1e8; encoding: v16@0:8
- (void)nncappear;
// 0x1000ea250; encoding: v16@0:8
- (void)loadData;
// 0x1000eacf8; encoding: q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg1;
// 0x1000ead34; encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// 0x1000ead98; encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// 0x1000eaf2c; encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// 0x1000eafec; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
// 0x1000eb080; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
// 0x1000eb3f8; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// 0x1000eb414; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
// 0x1000eb420; encoding: v24@0:8@16
- (void)onMoreClicked:(id)arg1;
// 0x1000eb4b8; encoding: v24@0:8@16
- (void)onItemTapped:(id)arg1;
// 0x1000eb5b8; encoding: v16@0:8
- (void)layoutSubviews;
// 0x1000eb6b0; encoding: v16@0:8
- (void)nnconHistoryUpdated;
// 0x1000eb6b4; encoding: v16@0:8
- (void)updateHeaderView;
// 0x1000eb928; encoding: v16@0:8
- (void)initHeaderView;
// 0x1000ebb28; encoding: v16@0:8
- (void)nncdidAppear;
// 0x1000ebb84; encoding: v16@0:8
- (void)nncdidDisappear;
// 0x1000ebbe0; encoding: q32@0:8@16q24
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
// 0x1000ebc1c; encoding: @32@0:8@16@24
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
// 0x1000ebcd0; encoding: v32@0:8@16@24
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
// 0x1000ebdf8; encoding: v24@0:8@16
- (void)historyMoreSelector:(id)arg1;
// 0x1000ebe88; encoding: v32@0:8{CGSize=dd}16
- (void)nnconAdSizeChanged:(CGSize)arg1;
// 0x1000ebe8c; encoding: @16@0:8
- (id)delegate;
// 0x1000ebeac; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x1000ebec0; encoding: @16@0:8
- (id)tableView;
// 0x1000ebed0; encoding: v24@0:8@16
- (void)setTableView:(id)arg1;
// 0x1000ebee4; encoding: @16@0:8
- (id)dataSource;
// 0x1000ebef4; encoding: v24@0:8@16
- (void)setDataSource:(id)arg1;
// 0x1000ebf08; encoding: @16@0:8
- (id)titleSource;
// 0x1000ebf18; encoding: v24@0:8@16
- (void)setTitleSource:(id)arg1;
// 0x1000ebf2c; encoding: @16@0:8
- (id)lineCountDict;
// 0x1000ebf3c; encoding: v24@0:8@16
- (void)setLineCountDict:(id)arg1;
// 0x1000ebf50; encoding: B16@0:8
- (BOOL)isLoading;
// 0x1000ebf60; encoding: v20@0:8B16
- (void)setIsLoading:(BOOL)arg1;
// 0x1000ebf70; encoding: @16@0:8
- (id)headerView;
// 0x1000ebf80; encoding: v24@0:8@16
- (void)setHeaderView:(id)arg1;
// 0x1000ebf94; encoding: @16@0:8
- (id)carouselView;
// 0x1000ebfa4; encoding: v24@0:8@16
- (void)setCarouselView:(id)arg1;
// 0x1000ebfb8; encoding: @16@0:8
- (id)historyView;
// 0x1000ebfc8; encoding: v24@0:8@16
- (void)setHistoryView:(id)arg1;
// 0x1000ebfdc; encoding: @16@0:8
- (id)historyButton;
// 0x1000ebffc; encoding: v24@0:8@16
- (void)setHistoryButton:(id)arg1;
// 0x1000ec010; encoding: @16@0:8
- (id)historyTitleLabel;
// 0x1000ec030; encoding: v24@0:8@16
- (void)setHistoryTitleLabel:(id)arg1;
// 0x1000ec044; encoding: @16@0:8
- (id)historyCollectionView;
// 0x1000ec064; encoding: v24@0:8@16
- (void)setHistoryCollectionView:(id)arg1;
// 0x1000ec078; encoding: @16@0:8
- (id)historySource;
// 0x1000ec088; encoding: v24@0:8@16
- (void)setHistorySource:(id)arg1;
// 0x1000ec09c; encoding: @16@0:8
- (id)nncadView;
// 0x1000ec0ac; encoding: v24@0:8@16
- (void)setNncadView:(id)arg1;
// 0x1000ec0c0; encoding: @16@0:8
- (id)adManager;
// 0x1000ec0d0; encoding: v24@0:8@16
- (void)setAdManager:(id)arg1;
// 0x1000ec0e4; encoding: B16@0:8
- (BOOL)nnchasAd;
// 0x1000ec0f4; encoding: v20@0:8B16
- (void)setNnchasAd:(BOOL)arg1;
// 0x1000ec104; encoding: B16@0:8
- (BOOL)isLoadingORFailed;
// 0x1000ec114; encoding: v20@0:8B16
- (void)setIsLoadingORFailed:(BOOL)arg1;
// 0x1000ec124; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
