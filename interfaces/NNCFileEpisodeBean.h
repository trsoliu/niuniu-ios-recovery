// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c3780
@interface NNCFileEpisodeBean : NSObject <NSCoding>

// property title: T@"NSString",C,N,V_title
// property url: T@"NSString",C,N,V_url
// property index: Ti,N,V_index
// property localPath: T@"NSString",C,N,V_localPath

// 0x10005ab48; encoding: @24@0:8@16
- (id)initWithCoder:(id)arg1;
// 0x10005ac10; encoding: v24@0:8@16
- (void)encodeWithCoder:(id)arg1;
// 0x10005aca4; encoding: @16@0:8
- (id)title;
// 0x10005acac; encoding: v24@0:8@16
- (void)setTitle:(id)arg1;
// 0x10005acb4; encoding: @16@0:8
- (id)url;
// 0x10005acbc; encoding: v24@0:8@16
- (void)setUrl:(id)arg1;
// 0x10005acc4; encoding: i16@0:8
- (int)index;
// 0x10005accc; encoding: v20@0:8i16
- (void)setIndex:(int)arg1;
// 0x10005acd4; encoding: @16@0:8
- (id)localPath;
// 0x10005acdc; encoding: v24@0:8@16
- (void)setLocalPath:(id)arg1;
// 0x10005ace4; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x10005aa9c; encoding: @24@0:8@16
+ (id)modelWithDict:(id)arg1;

@end
