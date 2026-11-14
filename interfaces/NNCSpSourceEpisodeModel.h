// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c41d0
@interface NNCSpSourceEpisodeModel : NSObject

// property curTime: Tq,N,V_curTime
// property spEpisodeId: Ti,N,V_spEpisodeId
// property spSourceVodId: Ti,N,V_spSourceVodId
// property vodToken: T@"NSString",C,N,V_vodToken
// property collection: Ti,N,V_collection

// 0x100086100; encoding: q16@0:8
- (long long)curTime;
// 0x100086108; encoding: v24@0:8q16
- (void)setCurTime:(long long)arg1;
// 0x100086110; encoding: i16@0:8
- (int)spEpisodeId;
// 0x100086118; encoding: v20@0:8i16
- (void)setSpEpisodeId:(int)arg1;
// 0x100086120; encoding: i16@0:8
- (int)spSourceVodId;
// 0x100086128; encoding: v20@0:8i16
- (void)setSpSourceVodId:(int)arg1;
// 0x100086130; encoding: @16@0:8
- (id)vodToken;
// 0x100086138; encoding: v24@0:8@16
- (void)setVodToken:(id)arg1;
// 0x100086140; encoding: i16@0:8
- (int)collection;
// 0x100086148; encoding: v20@0:8i16
- (void)setCollection:(int)arg1;
// 0x100086150; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x100085fb4; encoding: @24@0:8@16
+ (id)modelWithDict:(id)arg1;

@end
