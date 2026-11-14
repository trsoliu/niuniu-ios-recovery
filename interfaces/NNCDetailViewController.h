// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c3eb0
@interface NNCDetailViewController : BaseViewController <UITableViewDelegate, UITableViewDataSource, NNCVideoFullScreenSettingViewDelegate, SJMoreSettingControlLayerDelegate, NNCVideoFullScreenChangeSpeedViewDelegate, NNCVideoFullScreenChangeSourceViewDelegate, DetailHeaderViewDelegate, NNCChooseEpisodeViewDelegate, NNCVideoFullScreenChooseEpisodeViewDelegate, NNCVideoStopNoticeViewDelegate, VideoPlayErrorViewDelegate, VideoItemViewDelegate, NetWebViewDelegate, FSViewControllerDismissDelegate>

// property recommendDataSource: T@"NSMutableArray",&,N,V_recommendDataSource
// property headerBottomView: T@"UIView",&,N,V_headerBottomView
// property detaiHeaderView: T@"DetailHeaderView",&,N,V_detaiHeaderView
// property headerView: T@"UIView",&,N,V_headerView
// property player: T@"SJVideoPlayer",&,N,V_player
// property showVideoButton: T@"UIButton",W,N,V_showVideoButton
// property showDiscussButton: T@"UIButton",W,N,V_showDiscussButton
// property nncdownloadedEpisodeList: T@"NSMutableArray",&,N,V_nncdownloadedEpisodeList
// property headerSectionLine: T@"UIImageView",W,N,V_headerSectionLine
// property videoWidthRadio: Tq,N,V_videoWidthRadio
// property videoHeightRadio: Tq,N,V_videoHeightRadio
// property isLoadingOrParsing: TB,N,V_isLoadingOrParsing
// property skipStartSec: Td,N,V_skipStartSec
// property skipEndSec: Td,N,V_skipEndSec
// property rateIndex: Ti,N,V_rateIndex
// property longPressRateIndex: Ti,N,V_longPressRateIndex
// property rateArray: T@"NSArray",&,N,V_rateArray
// property longPressRateArray: T@"NSArray",&,N,V_longPressRateArray
// property playNextType: Tq,N,V_playNextType
// property sourceBeanList: T@"NSMutableArray",&,N,V_sourceBeanList
// property episodeIndex: Ti,N,V_episodeIndex
// property historyPosition: Ti,N,V_historyPosition
// property previousSaveTime: Tq,N,V_previousSaveTime
// property needSetStartPosition: TB,N,V_needSetStartPosition
// property chooseEpisodeView: T@"NNCChooseEpisodeView",&,N,V_chooseEpisodeView
// property downloadEpisodeView: T@"NNCDownloadEpisodeView",&,N,V_downloadEpisodeView
// property videoDescView: T@"NNCVideoDesView",&,N,V_videoDescView
// property settingButtomItem: T@"SJEdgeControlButtonItem",&,N,V_settingButtomItem
// property contentModeButtomItem: T@"SJEdgeControlButtonItem",&,N,V_contentModeButtomItem
// property nextEpisodeButtomItem: T@"SJEdgeControlButtonItem",&,N,V_nextEpisodeButtomItem
// property nextEpisodeButtomExtraItem: T@"SJEdgeControlButtonItem",&,N,V_nextEpisodeButtomExtraItem
// property nextTypeButtomExtraItem: T@"SJEdgeControlButtonItem",&,N,V_nextTypeButtomExtraItem
// property middleButtomExtraItem: T@"SJEdgeControlButtonItem",&,N,V_middleButtomExtraItem
// property changeSourceButtomExtraItem: T@"SJEdgeControlButtonItem",&,N,V_changeSourceButtomExtraItem
// property changeEpisodeButtomExtraItem: T@"SJEdgeControlButtonItem",&,N,V_changeEpisodeButtomExtraItem
// property changeSpeedButtomExtraItem: T@"SJEdgeControlButtonItem",&,N,V_changeSpeedButtomExtraItem
// property verticalscreenButtomExtraItem: T@"SJEdgeControlButtonItem",&,N,V_verticalscreenButtomExtraItem
// property fullScreenSettingView: T@"NNCVideoFullScreenSettingView",&,N,V_fullScreenSettingView
// property fullScreenChangeSpeedView: T@"NNCVideoFullScreenChangeSpeedView",&,N,V_fullScreenChangeSpeedView
// property fullScreenChangeSourceView: T@"NNCVideoFullScreenChangeSourceView",&,N,V_fullScreenChangeSourceView
// property fullScreenChooseEpisodeView: T@"NNCVideoFullScreenChooseEpisodeView",&,N,V_fullScreenChooseEpisodeView
// property bottomSettingView: T@"UIView",&,N,V_bottomSettingView
// property videoPrepareView: T@"VideoPrepareView",&,N,V_videoPrepareView
// property videoLoadErrorView: T@"VideoLoadErrorView",&,N,V_videoLoadErrorView
// property videoPlayErrorView: T@"VideoPlayErrorView",&,N,V_videoPlayErrorView
// property toastView: T@"NNCVideoToastView",&,N,V_toastView
// property settingView: T@"NNCVideoSettingView",&,N,V_settingView
// property noticeView: T@"NNCVideoStopNoticeView",&,N,V_noticeView
// property ChooseSourcView: T@"NNCChooseSourceHeaderView",&,N,V_ChooseSourcView
// property playButtonItem: T@"SJEdgeControlButtonItem",&,N,V_playButtonItem
// property fullButtonItem: T@"SJEdgeControlButtonItem",&,N,V_fullButtonItem
// property progressButtonItem: T@"SJEdgeControlButtonItem",&,N,V_progressButtonItem
// property verifyView: T@"VerifyView",&,N,V_verifyView
// property currentIdFlag: T@"NSString",C,N,V_currentIdFlag
// property tableView: T@"UITableView",W,N,V_tableView
// property localVideoBean: T@"NNCFileBean",&,N,V_localVideoBean
// property localEpisodeIndex: Ti,N,V_localEpisodeIndex
// property videoId: Ti,N,V_videoId
// property videoBean: T@"NNCFileBean",&,N,V_videoBean
// property sourceIndex: Ti,N,V_sourceIndex
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x100074b8c; encoding: @16@0:8
- (id)settingView;
// 0x100074bf8; encoding: @16@0:8
- (id)chooseEpisodeView;
// 0x100074c64; encoding: @16@0:8
- (id)downloadEpisodeView;
// 0x100074cc4; encoding: @16@0:8
- (id)videoDescView;
// 0x100074d24; encoding: @16@0:8
- (id)toastView;
// 0x100074d84; encoding: @16@0:8
- (id)noticeView;
// 0x100074df0; encoding: @16@0:8
- (id)ChooseSourcView;
// 0x100074e50; encoding: @16@0:8
- (id)fullScreenSettingView;
// 0x100074f08; encoding: @16@0:8
- (id)fullScreenChangeSourceView;
// 0x100074fc0; encoding: @16@0:8
- (id)fullScreenChooseEpisodeView;
// 0x100075078; encoding: @16@0:8
- (id)fullScreenChangeSpeedView;
// 0x100075130; encoding: @16@0:8
- (id)videoPrepareView;
// 0x1000751d4; encoding: @16@0:8
- (id)videoLoadErrorView;
// 0x100075278; encoding: @16@0:8
- (id)videoPlayErrorView;
// 0x100075328; encoding: @16@0:8
- (id)detaiHeaderView;
// 0x1000753e4; encoding: v16@0:8
- (void)viewDidLoad;
// 0x100075470; encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// 0x100075550; encoding: v20@0:8B16
- (void)viewWillAppear:(BOOL)arg1;
// 0x100075584; encoding: v20@0:8B16
- (void)viewDidAppear:(BOOL)arg1;
// 0x1000755e4; encoding: v20@0:8B16
- (void)viewWillDisappear:(BOOL)arg1;
// 0x100075644; encoding: v20@0:8B16
- (void)viewDidDisappear:(BOOL)arg1;
// 0x10007571c; encoding: B16@0:8
- (BOOL)shouldAutorotate;
// 0x100075724; encoding: v16@0:8
- (void)dealloc;
// 0x1000757ac; encoding: q16@0:8
- (long long)preferredStatusBarStyle;
// 0x1000757b4; encoding: v16@0:8
- (void)nncinitController;
// 0x10007591c; encoding: v16@0:8
- (void)initData;
// 0x100075c2c; encoding: v16@0:8
- (void)createView;
// 0x100076130; encoding: v16@0:8
- (void)initPlayer;
// 0x100077aa0; encoding: v16@0:8
- (void)requestData;
// 0x100078200; encoding: v16@0:8
- (void)nncrequestRecommendVideos;
// 0x100078728; encoding: v16@0:8
- (void)requestFavStatus;
// 0x100078a44; encoding: v24@0:8@16
- (void)dealInitData:(id)arg1;
// 0x100079250; encoding: v16@0:8
- (void)initSetting;
// 0x100079360; encoding: v16@0:8
- (void)updateFrame;
// 0x1000795c0; encoding: v16@0:8
- (void)updateUIData;
// 0x100079714; encoding: v16@0:8
- (void)updateDetailHeaderHeight;
// 0x1000797ec; encoding: v16@0:8
- (void)play;
// 0x1000798c4; encoding: v16@0:8
- (void)playAd;
// 0x100079980; encoding: v16@0:8
- (void)startPlay;
// 0x10007b1b4; encoding: @16@0:8
- (id)nncjudgeLocalExist;
// 0x10007b578; encoding: v16@0:8
- (void)nncsetupPlayerCustomButtons;
// 0x10007c164; encoding: @16@0:8
- (id)getDefaultEdgeControlLayer;
// 0x10007c1a8; encoding: v24@0:8@16
- (void)showToastInVideoView:(id)arg1;
// 0x10007c224; encoding: v24@0:8@16
- (void)settingItemTapped:(id)arg1;
// 0x10007c3ac; encoding: v24@0:8@16
- (void)contentModeItemTapped:(id)arg1;
// 0x10007c414; encoding: v24@0:8@16
- (void)nextEpisodeItemTapped:(id)arg1;
// 0x10007c560; encoding: v24@0:8@16
- (void)nextTypeItemTapped:(id)arg1;
// 0x10007c7a8; encoding: v24@0:8@16
- (void)changeSourceItemTapped:(id)arg1;
// 0x10007c884; encoding: v24@0:8@16
- (void)changeEpisodeItemTapped:(id)arg1;
// 0x10007ca00; encoding: v24@0:8@16
- (void)changeSpeedItemTapped:(id)arg1;
// 0x10007cadc; encoding: v24@0:8@16
- (void)playerVideoSizeChanged:(id)arg1;
// 0x10007cae0; encoding: v24@0:8@16
- (void)videoStopTimer:(id)arg1;
// 0x10007cb78; encoding: v16@0:8
- (void)updateDifferentDirectionShowStatus;
// 0x10007d4c0; encoding: v16@0:8
- (void)VerticalScreenClick;
// 0x10007d65c; encoding: v32@0:8@16d24
- (void)setEndPosition:(id)arg1 duration:(double)arg2;
// 0x10007d72c; encoding: v24@0:8i16B20
- (void)updateSourceIndex:(int)arg1 play:(BOOL)arg2;
// 0x10007dc6c; encoding: B16@0:8
- (BOOL)hasNextEpisode;
// 0x10007dd10; encoding: @16@0:8
- (id)getCurrentVideoUrl;
// 0x10007ddd4; encoding: @16@0:8
- (id)getCurrentVideoLocalUrl;
// 0x10007de98; encoding: @16@0:8
- (id)getCurrentPlayerId;
// 0x10007df18; encoding: v28@0:8i16i20B24
- (void)saveVideoPlayWithDuration:(int)arg1 position:(int)arg2 must:(BOOL)arg3;
// 0x10007e3dc; encoding: v24@0:8@16
- (void)showDiscussSelector:(id)arg1;
// 0x10007e458; encoding: v24@0:8@16
- (void)showVideoSelector:(id)arg1;
// 0x10007e4d4; encoding: @16@0:8
- (id)getVideoTitle;
// 0x10007e628; encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
// 0x10007e690; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
// 0x10007e71c; encoding: d32@0:8@16q24
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
// 0x10007e728; encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// 0x10007e7a0; encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// 0x10007e9d4; encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// 0x10007eac4; encoding: v24@0:8@16
- (void)tappedBlankAreaOnTheControlLayer:(id)arg1;
// 0x10007eb0c; encoding: v20@0:8i16
- (void)onVideoFullScreenChooseEpisodeViewSelectEpisode:(int)arg1;
// 0x10007eba0; encoding: v20@0:8i16
- (void)onSelectSource:(int)arg1;
// 0x10007ebe4; encoding: @16@0:8
- (id)sourceViewGetVideoBean;
// 0x10007ebe8; encoding: i16@0:8
- (int)sourceViewGetCurrentSourceIndex;
// 0x10007ebec; encoding: v20@0:8i16
- (void)nnconSelectSpeed:(int)arg1;
// 0x10007ec68; encoding: @16@0:8
- (id)getSpeedArray;
// 0x10007ec6c; encoding: i16@0:8
- (int)getCurrentSpeedIndex;
// 0x10007ec70; encoding: v20@0:8i16
- (void)onSkipStartSecondChanged:(int)arg1;
// 0x10007ece4; encoding: v20@0:8i16
- (void)onSkipEndSecondChanged:(int)arg1;
// 0x10007ed90; encoding: i16@0:8
- (int)getSkipStartSecond;
// 0x10007eda8; encoding: i16@0:8
- (int)getSkipEndSecond;
// 0x10007edc0; encoding: @16@0:8
- (id)viewGetRateArray;
// 0x10007edc4; encoding: @16@0:8
- (id)viewGetLongPressRateArray;
// 0x10007edc8; encoding: i16@0:8
- (int)viewGetRateIndex;
// 0x10007edcc; encoding: i16@0:8
- (int)viewGetLongPressRateIndex;
// 0x10007edd0; encoding: v20@0:8i16
- (void)viewSetRateIndex:(int)arg1;
// 0x10007ee4c; encoding: v20@0:8i16
- (void)viewSetLongPressRateIndex:(int)arg1;
// 0x10007eecc; encoding: v28@0:8@16B24
- (void)viewControllerDidDismiss:(id)arg1 cancelled:(BOOL)arg2;
// 0x10007ef6c; encoding: i20@0:8i16
- (int)getStoreSkipStart:(int)arg1;
// 0x10007f014; encoding: i20@0:8i16
- (int)getStoreSkipEnd:(int)arg1;
// 0x10007f0bc; encoding: v24@0:8i16i20
- (void)setStoreSkipStart:(int)arg1 sec:(int)arg2;
// 0x10007f190; encoding: v24@0:8i16i20
- (void)setStoreSkipEnd:(int)arg1 sec:(int)arg2;
// 0x10007f264; encoding: v16@0:8
- (void)detailHeaderViewClickChooseEpisode;
// 0x10007f45c; encoding: v16@0:8
- (void)detailHeaderViewClickDownload;
// 0x10007f60c; encoding: v16@0:8
- (void)detailHeaderViewFirstAdPlayed;
// 0x10007f610; encoding: v16@0:8
- (void)detailHeaderViewClickDesc;
// 0x10007f720; encoding: v20@0:8i16
- (void)detailHeaderViewChooseEpisode:(int)arg1;
// 0x10007f7b4; encoding: v16@0:8
- (void)detailHeaderViewClickChooseSource;
// 0x10007fa4c; encoding: v20@0:8i16
- (void)nncchooseEpisodeViewSelectEpisode:(int)arg1;
// 0x10007fae0; encoding: v16@0:8
- (void)onShouldStopPlay;
// 0x10007fb20; encoding: v16@0:8
- (void)videoPlayErrorViewClickRetry;
// 0x10007fc5c; encoding: v16@0:8
- (void)videoPlayErrorViewClickReportError;
// 0x10007fc8c; encoding: v16@0:8
- (void)videoPlayErrorViewClickChangeSource;
// 0x10007fde0; encoding: v16@0:8
- (void)videoPlayErrorViewClickBack;
// 0x10007fe1c; encoding: B16@0:8
- (BOOL)videoPlayErrorViewHasMoreSource;
// 0x10007fe7c; encoding: v24@0:8@16
- (void)onItemTapped:(id)arg1;
// 0x10007ff64; encoding: v48@0:8@16@24@32@40
- (void)netWebView:(id)arg1 didGetSceneId:(id)arg2 certifyId:(id)arg3 deviceToken:(id)arg4;
// 0x1000800bc; encoding: @16@0:8
- (id)tableView;
// 0x1000800dc; encoding: v24@0:8@16
- (void)setTableView:(id)arg1;
// 0x1000800f0; encoding: @16@0:8
- (id)localVideoBean;
// 0x100080100; encoding: v24@0:8@16
- (void)setLocalVideoBean:(id)arg1;
// 0x100080114; encoding: i16@0:8
- (int)localEpisodeIndex;
// 0x100080124; encoding: v20@0:8i16
- (void)setLocalEpisodeIndex:(int)arg1;
// 0x100080134; encoding: i16@0:8
- (int)videoId;
// 0x100080144; encoding: v20@0:8i16
- (void)setVideoId:(int)arg1;
// 0x100080154; encoding: @16@0:8
- (id)videoBean;
// 0x100080164; encoding: v24@0:8@16
- (void)setVideoBean:(id)arg1;
// 0x100080178; encoding: i16@0:8
- (int)sourceIndex;
// 0x100080188; encoding: v20@0:8i16
- (void)setSourceIndex:(int)arg1;
// 0x100080198; encoding: @16@0:8
- (id)recommendDataSource;
// 0x1000801a8; encoding: v24@0:8@16
- (void)setRecommendDataSource:(id)arg1;
// 0x1000801bc; encoding: @16@0:8
- (id)headerBottomView;
// 0x1000801cc; encoding: v24@0:8@16
- (void)setHeaderBottomView:(id)arg1;
// 0x1000801e0; encoding: v24@0:8@16
- (void)setDetaiHeaderView:(id)arg1;
// 0x1000801f4; encoding: @16@0:8
- (id)headerView;
// 0x100080204; encoding: v24@0:8@16
- (void)setHeaderView:(id)arg1;
// 0x100080218; encoding: @16@0:8
- (id)player;
// 0x100080228; encoding: v24@0:8@16
- (void)setPlayer:(id)arg1;
// 0x10008023c; encoding: @16@0:8
- (id)showVideoButton;
// 0x10008025c; encoding: v24@0:8@16
- (void)setShowVideoButton:(id)arg1;
// 0x100080270; encoding: @16@0:8
- (id)showDiscussButton;
// 0x100080290; encoding: v24@0:8@16
- (void)setShowDiscussButton:(id)arg1;
// 0x1000802a4; encoding: @16@0:8
- (id)nncdownloadedEpisodeList;
// 0x1000802b4; encoding: v24@0:8@16
- (void)setNncdownloadedEpisodeList:(id)arg1;
// 0x1000802c8; encoding: @16@0:8
- (id)headerSectionLine;
// 0x1000802e8; encoding: v24@0:8@16
- (void)setHeaderSectionLine:(id)arg1;
// 0x1000802fc; encoding: q16@0:8
- (long long)videoWidthRadio;
// 0x10008030c; encoding: v24@0:8q16
- (void)setVideoWidthRadio:(long long)arg1;
// 0x10008031c; encoding: q16@0:8
- (long long)videoHeightRadio;
// 0x10008032c; encoding: v24@0:8q16
- (void)setVideoHeightRadio:(long long)arg1;
// 0x10008033c; encoding: B16@0:8
- (BOOL)isLoadingOrParsing;
// 0x10008034c; encoding: v20@0:8B16
- (void)setIsLoadingOrParsing:(BOOL)arg1;
// 0x10008035c; encoding: d16@0:8
- (double)skipStartSec;
// 0x10008036c; encoding: v24@0:8d16
- (void)setSkipStartSec:(double)arg1;
// 0x10008037c; encoding: d16@0:8
- (double)skipEndSec;
// 0x10008038c; encoding: v24@0:8d16
- (void)setSkipEndSec:(double)arg1;
// 0x10008039c; encoding: i16@0:8
- (int)rateIndex;
// 0x1000803ac; encoding: v20@0:8i16
- (void)setRateIndex:(int)arg1;
// 0x1000803bc; encoding: i16@0:8
- (int)longPressRateIndex;
// 0x1000803cc; encoding: v20@0:8i16
- (void)setLongPressRateIndex:(int)arg1;
// 0x1000803dc; encoding: @16@0:8
- (id)rateArray;
// 0x1000803ec; encoding: v24@0:8@16
- (void)setRateArray:(id)arg1;
// 0x100080400; encoding: @16@0:8
- (id)longPressRateArray;
// 0x100080410; encoding: v24@0:8@16
- (void)setLongPressRateArray:(id)arg1;
// 0x100080424; encoding: q16@0:8
- (long long)playNextType;
// 0x100080434; encoding: v24@0:8q16
- (void)setPlayNextType:(long long)arg1;
// 0x100080444; encoding: @16@0:8
- (id)sourceBeanList;
// 0x100080454; encoding: v24@0:8@16
- (void)setSourceBeanList:(id)arg1;
// 0x100080468; encoding: i16@0:8
- (int)episodeIndex;
// 0x100080478; encoding: v20@0:8i16
- (void)setEpisodeIndex:(int)arg1;
// 0x100080488; encoding: i16@0:8
- (int)historyPosition;
// 0x100080498; encoding: v20@0:8i16
- (void)setHistoryPosition:(int)arg1;
// 0x1000804a8; encoding: q16@0:8
- (long long)previousSaveTime;
// 0x1000804b8; encoding: v24@0:8q16
- (void)setPreviousSaveTime:(long long)arg1;
// 0x1000804c8; encoding: B16@0:8
- (BOOL)needSetStartPosition;
// 0x1000804d8; encoding: v20@0:8B16
- (void)setNeedSetStartPosition:(BOOL)arg1;
// 0x1000804e8; encoding: v24@0:8@16
- (void)setChooseEpisodeView:(id)arg1;
// 0x1000804fc; encoding: v24@0:8@16
- (void)setDownloadEpisodeView:(id)arg1;
// 0x100080510; encoding: v24@0:8@16
- (void)setVideoDescView:(id)arg1;
// 0x100080524; encoding: @16@0:8
- (id)settingButtomItem;
// 0x100080534; encoding: v24@0:8@16
- (void)setSettingButtomItem:(id)arg1;
// 0x100080548; encoding: @16@0:8
- (id)contentModeButtomItem;
// 0x100080558; encoding: v24@0:8@16
- (void)setContentModeButtomItem:(id)arg1;
// 0x10008056c; encoding: @16@0:8
- (id)nextEpisodeButtomItem;
// 0x10008057c; encoding: v24@0:8@16
- (void)setNextEpisodeButtomItem:(id)arg1;
// 0x100080590; encoding: @16@0:8
- (id)nextEpisodeButtomExtraItem;
// 0x1000805a0; encoding: v24@0:8@16
- (void)setNextEpisodeButtomExtraItem:(id)arg1;
// 0x1000805b4; encoding: @16@0:8
- (id)nextTypeButtomExtraItem;
// 0x1000805c4; encoding: v24@0:8@16
- (void)setNextTypeButtomExtraItem:(id)arg1;
// 0x1000805d8; encoding: @16@0:8
- (id)middleButtomExtraItem;
// 0x1000805e8; encoding: v24@0:8@16
- (void)setMiddleButtomExtraItem:(id)arg1;
// 0x1000805fc; encoding: @16@0:8
- (id)changeSourceButtomExtraItem;
// 0x10008060c; encoding: v24@0:8@16
- (void)setChangeSourceButtomExtraItem:(id)arg1;
// 0x100080620; encoding: @16@0:8
- (id)changeEpisodeButtomExtraItem;
// 0x100080630; encoding: v24@0:8@16
- (void)setChangeEpisodeButtomExtraItem:(id)arg1;
// 0x100080644; encoding: @16@0:8
- (id)changeSpeedButtomExtraItem;
// 0x100080654; encoding: v24@0:8@16
- (void)setChangeSpeedButtomExtraItem:(id)arg1;
// 0x100080668; encoding: @16@0:8
- (id)verticalscreenButtomExtraItem;
// 0x100080678; encoding: v24@0:8@16
- (void)setVerticalscreenButtomExtraItem:(id)arg1;
// 0x10008068c; encoding: v24@0:8@16
- (void)setFullScreenSettingView:(id)arg1;
// 0x1000806a0; encoding: v24@0:8@16
- (void)setFullScreenChangeSpeedView:(id)arg1;
// 0x1000806b4; encoding: v24@0:8@16
- (void)setFullScreenChangeSourceView:(id)arg1;
// 0x1000806c8; encoding: v24@0:8@16
- (void)setFullScreenChooseEpisodeView:(id)arg1;
// 0x1000806dc; encoding: @16@0:8
- (id)bottomSettingView;
// 0x1000806ec; encoding: v24@0:8@16
- (void)setBottomSettingView:(id)arg1;
// 0x100080700; encoding: v24@0:8@16
- (void)setVideoPrepareView:(id)arg1;
// 0x100080714; encoding: v24@0:8@16
- (void)setVideoLoadErrorView:(id)arg1;
// 0x100080728; encoding: v24@0:8@16
- (void)setVideoPlayErrorView:(id)arg1;
// 0x10008073c; encoding: v24@0:8@16
- (void)setToastView:(id)arg1;
// 0x100080750; encoding: v24@0:8@16
- (void)setSettingView:(id)arg1;
// 0x100080764; encoding: v24@0:8@16
- (void)setNoticeView:(id)arg1;
// 0x100080778; encoding: v24@0:8@16
- (void)setChooseSourcView:(id)arg1;
// 0x10008078c; encoding: @16@0:8
- (id)playButtonItem;
// 0x10008079c; encoding: v24@0:8@16
- (void)setPlayButtonItem:(id)arg1;
// 0x1000807b0; encoding: @16@0:8
- (id)fullButtonItem;
// 0x1000807c0; encoding: v24@0:8@16
- (void)setFullButtonItem:(id)arg1;
// 0x1000807d4; encoding: @16@0:8
- (id)progressButtonItem;
// 0x1000807e4; encoding: v24@0:8@16
- (void)setProgressButtonItem:(id)arg1;
// 0x1000807f8; encoding: @16@0:8
- (id)verifyView;
// 0x100080808; encoding: v24@0:8@16
- (void)setVerifyView:(id)arg1;
// 0x10008081c; encoding: @16@0:8
- (id)currentIdFlag;
// 0x10008082c; encoding: v24@0:8@16
- (void)setCurrentIdFlag:(id)arg1;
// 0x100080838; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x10007af78; encoding: @24@0:8@16
+ (id)dealHeMaVerifyUrl:(id)arg1;
// 0x10007b0cc; encoding: @24@0:8@16
+ (id)getUrlPath:(id)arg1;

@end
