// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c6700
@interface NNCFileNetHistory : NSObject

// property videoId: Ti,N,V_videoId
// property videoName: T@"NSString",C,N,V_videoName
// property videoCover: T@"NSString",C,N,V_videoCover
// property insertTime: Tq,N,V_insertTime
// property playerId: T@"NSString",C,N,V_playerId
// property episodeIndex: Tq,N,V_episodeIndex
// property episodeName: T@"NSString",C,N,V_episodeName
// property remark: T@"NSString",C,N,V_remark
// property position: Tq,N,V_position
// property duration: Tq,N,V_duration
// property isAdultOnly: Tq,N,V_isAdultOnly
// property i0: Tq,N,V_i0
// property i1: Tq,N,V_i1
// property s0: T@"NSString",C,N,V_s0
// property s1: T@"NSString",C,N,V_s1

// 0x1000f1f24; encoding: @16@0:8
- (id)toDict;
// 0x1000f21c4; encoding: i16@0:8
- (int)videoId;
// 0x1000f21cc; encoding: v20@0:8i16
- (void)setVideoId:(int)arg1;
// 0x1000f21d4; encoding: @16@0:8
- (id)videoName;
// 0x1000f21dc; encoding: v24@0:8@16
- (void)setVideoName:(id)arg1;
// 0x1000f21e4; encoding: @16@0:8
- (id)videoCover;
// 0x1000f21ec; encoding: v24@0:8@16
- (void)setVideoCover:(id)arg1;
// 0x1000f21f4; encoding: q16@0:8
- (long long)insertTime;
// 0x1000f21fc; encoding: v24@0:8q16
- (void)setInsertTime:(long long)arg1;
// 0x1000f2204; encoding: @16@0:8
- (id)playerId;
// 0x1000f220c; encoding: v24@0:8@16
- (void)setPlayerId:(id)arg1;
// 0x1000f2214; encoding: q16@0:8
- (long long)episodeIndex;
// 0x1000f221c; encoding: v24@0:8q16
- (void)setEpisodeIndex:(long long)arg1;
// 0x1000f2224; encoding: @16@0:8
- (id)episodeName;
// 0x1000f222c; encoding: v24@0:8@16
- (void)setEpisodeName:(id)arg1;
// 0x1000f2234; encoding: @16@0:8
- (id)remark;
// 0x1000f223c; encoding: v24@0:8@16
- (void)setRemark:(id)arg1;
// 0x1000f2244; encoding: q16@0:8
- (long long)position;
// 0x1000f224c; encoding: v24@0:8q16
- (void)setPosition:(long long)arg1;
// 0x1000f2254; encoding: q16@0:8
- (long long)duration;
// 0x1000f225c; encoding: v24@0:8q16
- (void)setDuration:(long long)arg1;
// 0x1000f2264; encoding: q16@0:8
- (long long)isAdultOnly;
// 0x1000f226c; encoding: v24@0:8q16
- (void)setIsAdultOnly:(long long)arg1;
// 0x1000f2274; encoding: q16@0:8
- (long long)i0;
// 0x1000f227c; encoding: v24@0:8q16
- (void)setI0:(long long)arg1;
// 0x1000f2284; encoding: q16@0:8
- (long long)i1;
// 0x1000f228c; encoding: v24@0:8q16
- (void)setI1:(long long)arg1;
// 0x1000f2294; encoding: @16@0:8
- (id)s0;
// 0x1000f229c; encoding: v24@0:8@16
- (void)setS0:(id)arg1;
// 0x1000f22a4; encoding: @16@0:8
- (id)s1;
// 0x1000f22ac; encoding: v24@0:8@16
- (void)setS1:(id)arg1;
// 0x1000f22b4; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000f1ca4; encoding: @24@0:8@16
+ (id)historyWithDict:(id)arg1;

@end
