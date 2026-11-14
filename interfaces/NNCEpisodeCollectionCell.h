// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c4040
@interface NNCEpisodeCollectionCell : UICollectionViewCell

// property bgButton: T@"UIButton",W,N,V_bgButton
// property titleLabel: T@"UILabel",W,N,V_titleLabel
// property downloadedIv: T@"UIImageView",W,N,V_downloadedIv
// property currentIv: T@"UIImageView",W,N,V_currentIv
// property isSelectedMode: TB,N,V_isSelectedMode
// property isItemSelected: TB,N,V_isItemSelected
// property isCurrent: TB,N,V_isCurrent
// property isDownloaded: TB,N,V_isDownloaded
// property index: Tq,N,V_index
// property episodeBean: T@"NNCFileEpisodeBean",&,N,V_episodeBean

// 0x1000825f4; encoding: v16@0:8
- (void)awakeFromNib;
// 0x10008283c; encoding: v20@0:8B16
- (void)setIsItemSelected:(BOOL)arg1;
// 0x10008289c; encoding: v20@0:8B16
- (void)setIsCurrent:(BOOL)arg1;
// 0x1000829c0; encoding: v20@0:8B16
- (void)setIsDownloaded:(BOOL)arg1;
// 0x100082a04; encoding: v24@0:8@16
- (void)setEpisodeBean:(id)arg1;
// 0x100082a98; encoding: B16@0:8
- (BOOL)isSelectedMode;
// 0x100082aa8; encoding: v20@0:8B16
- (void)setIsSelectedMode:(BOOL)arg1;
// 0x100082ab8; encoding: B16@0:8
- (BOOL)isItemSelected;
// 0x100082ac8; encoding: B16@0:8
- (BOOL)isCurrent;
// 0x100082ad8; encoding: B16@0:8
- (BOOL)isDownloaded;
// 0x100082ae8; encoding: q16@0:8
- (long long)index;
// 0x100082af8; encoding: v24@0:8q16
- (void)setIndex:(long long)arg1;
// 0x100082b08; encoding: @16@0:8
- (id)episodeBean;
// 0x100082b18; encoding: @16@0:8
- (id)bgButton;
// 0x100082b38; encoding: v24@0:8@16
- (void)setBgButton:(id)arg1;
// 0x100082b4c; encoding: @16@0:8
- (id)titleLabel;
// 0x100082b6c; encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// 0x100082b80; encoding: @16@0:8
- (id)downloadedIv;
// 0x100082ba0; encoding: v24@0:8@16
- (void)setDownloadedIv:(id)arg1;
// 0x100082bb4; encoding: @16@0:8
- (id)currentIv;
// 0x100082bd4; encoding: v24@0:8@16
- (void)setCurrentIv:(id)arg1;
// 0x100082be8; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
