// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c1ed0
@interface NNCFileTaskItem : NSObject

// property filePath: T@"NSString",C,N,V_filePath
// property fileName: T@"NSString",C,N,V_fileName
// property saveDir: T@"NSString",C,N,V_saveDir
// property totalTs: Ti,N,V_totalTs
// property finalUrl: T@"NSString",C,N,V_finalUrl
// property videoType: Ti,N,V_videoType
// property downloadCreateTime: Tq,N,V_downloadCreateTime
// property taskState: Ti,N,V_taskState
// property curTs: Ti,N,V_curTs
// property downloadSize: Tq,N,V_downloadSize
// property totalSize: Tq,N,V_totalSize
// property paused: TB,N,GisPaused,V_paused
// property complete: TB,N,GisComplete,V_complete
// property resumeData: T@"NSData",&,N,V_resumeData
// property speed: Tf,N,V_speed
// property percent: Tf,N,V_percent
// property lastUpdateTime: Tq,N,V_lastUpdateTime
// property url: T@"NSString",C,N,V_url
// property coverUrl: T@"NSString",C,N,V_coverUrl
// property title: T@"NSString",C,N,V_title
// property groupName: T@"NSString",C,N,V_groupName
// property fileHash: T@"NSString",C,N,V_fileHash
// property episodeTitle: T@"NSString",C,N,V_episodeTitle
// property playerId: T@"NSString",C,N,V_playerId
// property beanString: T@"NSString",C,N,V_beanString
// property videoId: Ti,N,V_videoId
// property episodeIndex: Ti,N,V_episodeIndex
// property mimeType: T@"NSString",C,N,V_mimeType
// property m3u8: T@"M3U8",&,N,V_m3u8
// property errorCode: Ti,N,V_errorCode
// property inDatabase: TB,N,GisInDatabase,V_inDatabase

// 0x100004304; encoding: B24@0:8@16
- (BOOL)isEqual:(id)arg1;
// 0x100004468; encoding: v16@0:8
- (void)reset;
// 0x100004560; encoding: B16@0:8
- (BOOL)isHlsType;
// 0x10000457c; encoding: B16@0:8
- (BOOL)isPendingTask;
// 0x1000045a8; encoding: @16@0:8
- (id)getSpeedString;
// 0x100004620; encoding: @16@0:8
- (id)getNNCFileIdModel;
// 0x10000467c; encoding: @16@0:8
- (id)filePath;
// 0x10000473c; encoding: v24@0:8@16
- (void)setFilePath:(id)arg1;
// 0x100004744; encoding: @16@0:8
- (id)fileName;
// 0x10000474c; encoding: v24@0:8@16
- (void)setFileName:(id)arg1;
// 0x100004754; encoding: @16@0:8
- (id)saveDir;
// 0x10000475c; encoding: v24@0:8@16
- (void)setSaveDir:(id)arg1;
// 0x100004764; encoding: i16@0:8
- (int)totalTs;
// 0x10000476c; encoding: v20@0:8i16
- (void)setTotalTs:(int)arg1;
// 0x100004774; encoding: @16@0:8
- (id)finalUrl;
// 0x10000477c; encoding: v24@0:8@16
- (void)setFinalUrl:(id)arg1;
// 0x100004784; encoding: i16@0:8
- (int)videoType;
// 0x10000478c; encoding: v20@0:8i16
- (void)setVideoType:(int)arg1;
// 0x100004794; encoding: q16@0:8
- (long long)downloadCreateTime;
// 0x10000479c; encoding: v24@0:8q16
- (void)setDownloadCreateTime:(long long)arg1;
// 0x1000047a4; encoding: i16@0:8
- (int)taskState;
// 0x1000047ac; encoding: v20@0:8i16
- (void)setTaskState:(int)arg1;
// 0x1000047b4; encoding: i16@0:8
- (int)curTs;
// 0x1000047bc; encoding: v20@0:8i16
- (void)setCurTs:(int)arg1;
// 0x1000047c4; encoding: q16@0:8
- (long long)downloadSize;
// 0x1000047cc; encoding: v24@0:8q16
- (void)setDownloadSize:(long long)arg1;
// 0x1000047d4; encoding: q16@0:8
- (long long)totalSize;
// 0x1000047dc; encoding: v24@0:8q16
- (void)setTotalSize:(long long)arg1;
// 0x1000047e4; encoding: B16@0:8
- (BOOL)isPaused;
// 0x1000047ec; encoding: v20@0:8B16
- (void)setPaused:(BOOL)arg1;
// 0x1000047f4; encoding: B16@0:8
- (BOOL)isComplete;
// 0x1000047fc; encoding: v20@0:8B16
- (void)setComplete:(BOOL)arg1;
// 0x100004804; encoding: @16@0:8
- (id)resumeData;
// 0x10000480c; encoding: v24@0:8@16
- (void)setResumeData:(id)arg1;
// 0x100004818; encoding: f16@0:8
- (float)speed;
// 0x100004820; encoding: v20@0:8f16
- (void)setSpeed:(float)arg1;
// 0x100004828; encoding: f16@0:8
- (float)percent;
// 0x100004830; encoding: v20@0:8f16
- (void)setPercent:(float)arg1;
// 0x100004838; encoding: q16@0:8
- (long long)lastUpdateTime;
// 0x100004840; encoding: v24@0:8q16
- (void)setLastUpdateTime:(long long)arg1;
// 0x100004848; encoding: @16@0:8
- (id)url;
// 0x100004850; encoding: v24@0:8@16
- (void)setUrl:(id)arg1;
// 0x100004858; encoding: @16@0:8
- (id)coverUrl;
// 0x100004860; encoding: v24@0:8@16
- (void)setCoverUrl:(id)arg1;
// 0x100004868; encoding: @16@0:8
- (id)title;
// 0x100004870; encoding: v24@0:8@16
- (void)setTitle:(id)arg1;
// 0x100004878; encoding: @16@0:8
- (id)groupName;
// 0x100004880; encoding: v24@0:8@16
- (void)setGroupName:(id)arg1;
// 0x100004888; encoding: @16@0:8
- (id)fileHash;
// 0x100004890; encoding: v24@0:8@16
- (void)setFileHash:(id)arg1;
// 0x100004898; encoding: @16@0:8
- (id)episodeTitle;
// 0x1000048a0; encoding: v24@0:8@16
- (void)setEpisodeTitle:(id)arg1;
// 0x1000048a8; encoding: @16@0:8
- (id)playerId;
// 0x1000048b0; encoding: v24@0:8@16
- (void)setPlayerId:(id)arg1;
// 0x1000048b8; encoding: @16@0:8
- (id)beanString;
// 0x1000048c0; encoding: v24@0:8@16
- (void)setBeanString:(id)arg1;
// 0x1000048c8; encoding: i16@0:8
- (int)videoId;
// 0x1000048d0; encoding: v20@0:8i16
- (void)setVideoId:(int)arg1;
// 0x1000048d8; encoding: i16@0:8
- (int)episodeIndex;
// 0x1000048e0; encoding: v20@0:8i16
- (void)setEpisodeIndex:(int)arg1;
// 0x1000048e8; encoding: @16@0:8
- (id)mimeType;
// 0x1000048f0; encoding: v24@0:8@16
- (void)setMimeType:(id)arg1;
// 0x1000048f8; encoding: @16@0:8
- (id)m3u8;
// 0x100004900; encoding: v24@0:8@16
- (void)setM3u8:(id)arg1;
// 0x10000490c; encoding: i16@0:8
- (int)errorCode;
// 0x100004914; encoding: v20@0:8i16
- (void)setErrorCode:(int)arg1;
// 0x10000491c; encoding: B16@0:8
- (BOOL)isInDatabase;
// 0x100004924; encoding: v20@0:8B16
- (void)setInDatabase:(BOOL)arg1;
// 0x10000492c; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
