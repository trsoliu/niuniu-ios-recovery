// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c40e0
@interface NNCRankViewController : BaseViewController <UIScrollViewDelegate>

// property headerView: T@"UIScrollView",&,N,V_headerView
// property headerBgView: T@"UIView",&,N,V_headerBgView
// property scrollView: T@"UIScrollView",&,N,V_scrollView
// property selectedLine: T@"UIImageView",&,N,V_selectedLine
// property currentIndex: Ti,N,V_currentIndex
// property topButtonWidth: Td,N,V_topButtonWidth
// property selectedButton: T@"NNCFontButton",W,N,V_selectedButton
// property typeModelList: T@"NSMutableArray",&,N,V_typeModelList
// property searchTextField: T@"UITextField",&,N,V_searchTextField
// property searchButton: T@"UIButton",&,N,V_searchButton
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000833c4; encoding: v16@0:8
- (void)viewDidLoad;
// 0x10008344c; encoding: v16@0:8
- (void)nncresetData;
// 0x100083488; encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// 0x1000834e8; encoding: v24@0:8@16
- (void)searchButtonSelected:(id)arg1;
// 0x100083564; encoding: v16@0:8
- (void)shouchang;
// 0x1000835e0; encoding: v16@0:8
- (void)shouchang2;
// 0x10008365c; encoding: v24@0:8@16
- (void)traitCollectionDidChange:(id)arg1;
// 0x1000837c0; encoding: v16@0:8
- (void)updateUIForCurrentInterfaceStyle;
// 0x1000839a8; encoding: v24@0:8@16
- (void)handleNotification:(id)arg1;
// 0x100083ae0; encoding: v16@0:8
- (void)createView;
// 0x100084d2c; encoding: v24@0:8@16
- (void)topButtonSelected:(id)arg1;
// 0x100084f48; encoding: v24@0:8@16
- (void)scrollViewDidScroll:(id)arg1;
// 0x1000850dc; encoding: v24@0:8@16
- (void)scrollViewDidEndDecelerating:(id)arg1;
// 0x100085314; encoding: q16@0:8
- (long long)preferredStatusBarStyle;
// 0x10008531c; encoding: @16@0:8
- (id)headerView;
// 0x10008532c; encoding: v24@0:8@16
- (void)setHeaderView:(id)arg1;
// 0x100085340; encoding: @16@0:8
- (id)headerBgView;
// 0x100085350; encoding: v24@0:8@16
- (void)setHeaderBgView:(id)arg1;
// 0x100085364; encoding: @16@0:8
- (id)scrollView;
// 0x100085374; encoding: v24@0:8@16
- (void)setScrollView:(id)arg1;
// 0x100085388; encoding: @16@0:8
- (id)selectedLine;
// 0x100085398; encoding: v24@0:8@16
- (void)setSelectedLine:(id)arg1;
// 0x1000853ac; encoding: i16@0:8
- (int)currentIndex;
// 0x1000853bc; encoding: v20@0:8i16
- (void)setCurrentIndex:(int)arg1;
// 0x1000853cc; encoding: d16@0:8
- (double)topButtonWidth;
// 0x1000853dc; encoding: v24@0:8d16
- (void)setTopButtonWidth:(double)arg1;
// 0x1000853ec; encoding: @16@0:8
- (id)selectedButton;
// 0x10008540c; encoding: v24@0:8@16
- (void)setSelectedButton:(id)arg1;
// 0x100085420; encoding: @16@0:8
- (id)typeModelList;
// 0x100085430; encoding: v24@0:8@16
- (void)setTypeModelList:(id)arg1;
// 0x100085444; encoding: @16@0:8
- (id)searchTextField;
// 0x100085454; encoding: v24@0:8@16
- (void)setSearchTextField:(id)arg1;
// 0x100085468; encoding: @16@0:8
- (id)searchButton;
// 0x100085478; encoding: v24@0:8@16
- (void)setSearchButton:(id)arg1;
// 0x10008548c; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
