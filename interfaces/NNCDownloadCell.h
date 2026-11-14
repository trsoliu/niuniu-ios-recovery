// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c5530
@interface NNCDownloadCell : UITableViewCell

// property line: T@"UIImageView",W,N,V_line
// property coverView: T@"UIImageView",W,N,V_coverView
// property selectedButton: T@"UIButton",W,N,V_selectedButton
// property countButton: T@"UIButton",W,N,V_countButton
// property nameLabel: T@"UILabel",W,N,V_nameLabel
// property episodeLabel: T@"UILabel",W,N,V_episodeLabel
// property statusLabel: T@"UILabel",W,N,V_statusLabel
// property sourceLabel: T@"UILabel",W,N,V_sourceLabel
// property isEditMode: TB,N,V_isEditMode
// property isItemSelected: TB,N,V_isItemSelected
// property type: Ti,N,V_type
// property info: T@"NNCMulitDownloadItem",&,N,V_info

// 0x1000c2b0c; encoding: v16@0:8
- (void)awakeFromNib;
// 0x1000c2f14; encoding: v20@0:8B16
- (void)setIsEditMode:(BOOL)arg1;
// 0x1000c2f58; encoding: v20@0:8B16
- (void)setIsItemSelected:(BOOL)arg1;
// 0x1000c2f9c; encoding: v24@0:8@16
- (void)setInfo:(id)arg1;
// 0x1000c3848; encoding: v24@0:8B16B20
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
// 0x1000c384c; encoding: v24@0:8B16B20
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
// 0x1000c3850; encoding: v24@0:8@16
- (void)selectedSelector:(id)arg1;
// 0x1000c3854; encoding: q24@0:8@16
- (long long)getFileSize:(id)arg1;
// 0x1000c3a5c; encoding: B16@0:8
- (BOOL)isEditMode;
// 0x1000c3a6c; encoding: B16@0:8
- (BOOL)isItemSelected;
// 0x1000c3a7c; encoding: i16@0:8
- (int)type;
// 0x1000c3a8c; encoding: v20@0:8i16
- (void)setType:(int)arg1;
// 0x1000c3a9c; encoding: @16@0:8
- (id)info;
// 0x1000c3aac; encoding: @16@0:8
- (id)line;
// 0x1000c3acc; encoding: v24@0:8@16
- (void)setLine:(id)arg1;
// 0x1000c3ae0; encoding: @16@0:8
- (id)coverView;
// 0x1000c3b00; encoding: v24@0:8@16
- (void)setCoverView:(id)arg1;
// 0x1000c3b14; encoding: @16@0:8
- (id)selectedButton;
// 0x1000c3b34; encoding: v24@0:8@16
- (void)setSelectedButton:(id)arg1;
// 0x1000c3b48; encoding: @16@0:8
- (id)countButton;
// 0x1000c3b68; encoding: v24@0:8@16
- (void)setCountButton:(id)arg1;
// 0x1000c3b7c; encoding: @16@0:8
- (id)nameLabel;
// 0x1000c3b9c; encoding: v24@0:8@16
- (void)setNameLabel:(id)arg1;
// 0x1000c3bb0; encoding: @16@0:8
- (id)episodeLabel;
// 0x1000c3bd0; encoding: v24@0:8@16
- (void)setEpisodeLabel:(id)arg1;
// 0x1000c3be4; encoding: @16@0:8
- (id)statusLabel;
// 0x1000c3c04; encoding: v24@0:8@16
- (void)setStatusLabel:(id)arg1;
// 0x1000c3c18; encoding: @16@0:8
- (id)sourceLabel;
// 0x1000c3c38; encoding: v24@0:8@16
- (void)setSourceLabel:(id)arg1;
// 0x1000c3c4c; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000c2e60; encoding: @16@0:8
+ (id)cell;
// 0x1000c2f08; encoding: d16@0:8
+ (double)nnccellHeight;
// 0x1000c3990; encoding: @24@0:8@16
+ (id)getPercentString:(id)arg1;

@end
