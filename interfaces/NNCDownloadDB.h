// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c5d28
@interface NNCDownloadDB : NSObject

// property database: T@"JQFMDB",&,N,V_database

// 0x1000d469c; encoding: @16@0:8
- (id)database;
// 0x1000d47c0; encoding: v24@0:8@16
- (void)iOrUDownloadModel:(id)arg1;
// 0x1000d514c; encoding: @16@0:8
- (id)getDownloadInfos;
// 0x1000d5304; encoding: @40@0:8i16@20i28@32
- (id)getItemByVidString:(int)arg1 playerId:(id)arg2 episodeIndex:(int)arg3 episodeTitle:(id)arg4;
// 0x1000d5474; encoding: v24@0:8@16
- (void)deleteDownloadItemByUrl:(id)arg1;
// 0x1000d5a54; encoding: v24@0:8@16
- (void)setDatabase:(id)arg1;
// 0x1000d5a60; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000d4720; encoding: @16@0:8
+ (id)sharedInstance;
// 0x1000d5530; encoding: @24@0:8@16
+ (id)taskItemByDownloadModel:(id)arg1;
// 0x1000d58a0; encoding: @24@0:8@16
+ (id)getFileIdStringWithItem:(id)arg1;
// 0x1000d5960; encoding: @24@0:8@16
+ (id)getVideoIdStringWithModel:(id)arg1;
// 0x1000d5a20; encoding: @40@0:8i16@20i28@32
+ (id)getVideoIdString:(int)arg1 playerId:(id)arg2 episodeIndex:(int)arg3 episodeTitle:(id)arg4;

@end
