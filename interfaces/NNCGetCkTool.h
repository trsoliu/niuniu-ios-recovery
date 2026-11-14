// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c6110
@interface NNCGetCkTool : NSObject

// property playingPlayerId: T@"NSString",C,N,V_playingPlayerId
// property playingVodId: Ti,N,V_playingVodId
// property playingEpisodeId: Ti,N,V_playingEpisodeId
// property playingVodToken: T@"NSString",C,N,V_playingVodToken
// property payingCurTime: Tq,N,V_payingCurTime
// property playingCK: T@"NSString",C,N,V_playingCK
// property collection: Ti,N,V_collection
// property timer: T@"NSTimer",&,N,V_timer
// property ckMap: T@"NSMutableDictionary",&,N,V_ckMap

// 0x1000dd1c0; encoding: v88@0:8@16@24i32i36@40q48B56i60@?64@?72@?80
- (void)nncrequestNewCkWithUrl:(id)arg1 playerId:(id)arg2 vodId:(int)arg3 episodeId:(int)arg4 vodToken:(id)arg5 curTime:(long long)arg6 isPlaying:(BOOL)arg7 collection:(int)arg8 success:(id /* block signature unavailable */)arg9 needVerify:(id /* block signature unavailable */)arg10 failure:(id /* block signature unavailable */)arg11;
// 0x1000dd880; encoding: @24@0:8@16
- (id)getCkModel:(id)arg1;
// 0x1000dd8ec; encoding: @16@0:8
- (id)getPlayingCk;
// 0x1000dd8f4; encoding: v24@0:8@16
- (void)timerSelector:(id)arg1;
// 0x1000ddc48; encoding: v16@0:8
- (void)dealloc;
// 0x1000ddc8c; encoding: v16@0:8
- (void)stopTimer;
// 0x1000ddd2c; encoding: @16@0:8
- (id)playingPlayerId;
// 0x1000ddd34; encoding: v24@0:8@16
- (void)setPlayingPlayerId:(id)arg1;
// 0x1000ddd3c; encoding: i16@0:8
- (int)playingVodId;
// 0x1000ddd44; encoding: v20@0:8i16
- (void)setPlayingVodId:(int)arg1;
// 0x1000ddd4c; encoding: i16@0:8
- (int)playingEpisodeId;
// 0x1000ddd54; encoding: v20@0:8i16
- (void)setPlayingEpisodeId:(int)arg1;
// 0x1000ddd5c; encoding: @16@0:8
- (id)playingVodToken;
// 0x1000ddd64; encoding: v24@0:8@16
- (void)setPlayingVodToken:(id)arg1;
// 0x1000ddd6c; encoding: q16@0:8
- (long long)payingCurTime;
// 0x1000ddd74; encoding: v24@0:8q16
- (void)setPayingCurTime:(long long)arg1;
// 0x1000ddd7c; encoding: @16@0:8
- (id)playingCK;
// 0x1000ddd84; encoding: v24@0:8@16
- (void)setPlayingCK:(id)arg1;
// 0x1000ddd8c; encoding: i16@0:8
- (int)collection;
// 0x1000ddd94; encoding: v20@0:8i16
- (void)setCollection:(int)arg1;
// 0x1000ddd9c; encoding: @16@0:8
- (id)timer;
// 0x1000ddda4; encoding: v24@0:8@16
- (void)setTimer:(id)arg1;
// 0x1000dddb0; encoding: @16@0:8
- (id)ckMap;
// 0x1000dddb8; encoding: v24@0:8@16
- (void)setCkMap:(id)arg1;
// 0x1000dddc4; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000dd0f0; encoding: @16@0:8
+ (id)sharedInstance;

@end
