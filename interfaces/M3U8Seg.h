// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c4c20
@interface M3U8Seg : NSObject

// property duration: Tf,N,V_duration
// property contentLength: Tq,N,V_contentLength
// property tsSize: Tq,N,V_tsSize
// property index: Ti,N,V_index
// property sequence: Ti,N,V_sequence
// property retryCount: Ti,N,V_retryCount
// property hasDiscontinuity: TB,N,V_hasDiscontinuity
// property hasKey: TB,N,V_hasKey
// property hasInitSegment: TB,N,V_hasInitSegment
// property method: T@"NSString",C,N,V_method
// property keyUri: T@"NSString",C,N,V_keyUri
// property keyIV: T@"NSString",C,N,V_keyIV
// property url: T@"NSString",C,N,V_url
// property name: T@"NSString",C,N,V_name
// property originSegmentUri: T@"NSString",C,N,V_originSegmentUri
// property segmentByteRange: T@"NSString",C,N,V_segmentByteRange

// 0x1000ab8a8; encoding: v40@0:8@16@24@32
- (void)setKeyConfigWithMethod:(id)arg1 keyUri:(id)arg2 keyIV:(id)arg3;
// 0x1000ab93c; encoding: v32@0:8@16@24
- (void)setOriginSegmentInfoWithUri:(id)arg1 segmentByteRange:(id)arg2;
// 0x1000ab9ac; encoding: @16@0:8
- (id)getLocalKeyUri;
// 0x1000ab9ec; encoding: @16@0:8
- (id)getIndexName;
// 0x1000abae0; encoding: @16@0:8
- (id)getOriginSegmentName;
// 0x1000abbd4; encoding: f16@0:8
- (float)duration;
// 0x1000abbdc; encoding: v20@0:8f16
- (void)setDuration:(float)arg1;
// 0x1000abbe4; encoding: q16@0:8
- (long long)contentLength;
// 0x1000abbec; encoding: v24@0:8q16
- (void)setContentLength:(long long)arg1;
// 0x1000abbf4; encoding: q16@0:8
- (long long)tsSize;
// 0x1000abbfc; encoding: v24@0:8q16
- (void)setTsSize:(long long)arg1;
// 0x1000abc04; encoding: i16@0:8
- (int)index;
// 0x1000abc0c; encoding: v20@0:8i16
- (void)setIndex:(int)arg1;
// 0x1000abc14; encoding: i16@0:8
- (int)sequence;
// 0x1000abc1c; encoding: v20@0:8i16
- (void)setSequence:(int)arg1;
// 0x1000abc24; encoding: i16@0:8
- (int)retryCount;
// 0x1000abc2c; encoding: v20@0:8i16
- (void)setRetryCount:(int)arg1;
// 0x1000abc34; encoding: B16@0:8
- (BOOL)hasDiscontinuity;
// 0x1000abc3c; encoding: v20@0:8B16
- (void)setHasDiscontinuity:(BOOL)arg1;
// 0x1000abc44; encoding: B16@0:8
- (BOOL)hasKey;
// 0x1000abc4c; encoding: v20@0:8B16
- (void)setHasKey:(BOOL)arg1;
// 0x1000abc54; encoding: B16@0:8
- (BOOL)hasInitSegment;
// 0x1000abc5c; encoding: v20@0:8B16
- (void)setHasInitSegment:(BOOL)arg1;
// 0x1000abc64; encoding: @16@0:8
- (id)method;
// 0x1000abc6c; encoding: v24@0:8@16
- (void)setMethod:(id)arg1;
// 0x1000abc74; encoding: @16@0:8
- (id)keyUri;
// 0x1000abc7c; encoding: v24@0:8@16
- (void)setKeyUri:(id)arg1;
// 0x1000abc84; encoding: @16@0:8
- (id)keyIV;
// 0x1000abc8c; encoding: v24@0:8@16
- (void)setKeyIV:(id)arg1;
// 0x1000abc94; encoding: @16@0:8
- (id)url;
// 0x1000abc9c; encoding: v24@0:8@16
- (void)setUrl:(id)arg1;
// 0x1000abca4; encoding: @16@0:8
- (id)name;
// 0x1000abcac; encoding: v24@0:8@16
- (void)setName:(id)arg1;
// 0x1000abcb4; encoding: @16@0:8
- (id)originSegmentUri;
// 0x1000abcbc; encoding: v24@0:8@16
- (void)setOriginSegmentUri:(id)arg1;
// 0x1000abcc4; encoding: @16@0:8
- (id)segmentByteRange;
// 0x1000abccc; encoding: v24@0:8@16
- (void)setSegmentByteRange:(id)arg1;
// 0x1000abcd4; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000ab7e8; encoding: @40@0:8@16f24i28i32i36
+ (id)segWithUrl:(id)arg1 duration:(float)arg2 index:(int)arg3 sequence:(int)arg4 hasDiscontinuity:(int)arg5;

@end
