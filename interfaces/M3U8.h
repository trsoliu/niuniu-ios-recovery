// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c4270
@interface M3U8 : NSObject

// property url: T@"NSString",C,N,V_url
// property tsList: T@"NSMutableArray",&,N,V_tsList
// property targetDuration: Tf,N,V_targetDuration
// property initSequence: Tq,N,V_initSequence
// property version: Tq,N,V_version
// property hasEndList: TB,N,V_hasEndList

// 0x100086374; encoding: v24@0:8@16
- (void)addTs:(id)arg1;
// 0x100086410; encoding: q16@0:8
- (long long)getDuration;
// 0x100086518; encoding: B24@0:8@16
- (BOOL)isEqual:(id)arg1;
// 0x100086604; encoding: @16@0:8
- (id)url;
// 0x10008660c; encoding: v24@0:8@16
- (void)setUrl:(id)arg1;
// 0x100086614; encoding: @16@0:8
- (id)tsList;
// 0x10008661c; encoding: v24@0:8@16
- (void)setTsList:(id)arg1;
// 0x100086628; encoding: f16@0:8
- (float)targetDuration;
// 0x100086630; encoding: v20@0:8f16
- (void)setTargetDuration:(float)arg1;
// 0x100086638; encoding: q16@0:8
- (long long)initSequence;
// 0x100086640; encoding: v24@0:8q16
- (void)setInitSequence:(long long)arg1;
// 0x100086648; encoding: q16@0:8
- (long long)version;
// 0x100086650; encoding: v24@0:8q16
- (void)setVersion:(long long)arg1;
// 0x100086658; encoding: B16@0:8
- (BOOL)hasEndList;
// 0x100086660; encoding: v20@0:8B16
- (void)setHasEndList:(BOOL)arg1;
// 0x100086668; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000862f4; encoding: @24@0:8@16
+ (id)m3u8WithUrl:(id)arg1;

@end
