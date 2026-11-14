// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2e20
@interface NNCMainPageTypeExtendModel : NSObject <NSCoding>

// property clazz: T@"NSString",C,N,V_clazz
// property area: T@"NSString",C,N,V_area
// property lang: T@"NSString",C,N,V_lang
// property year: T@"NSString",C,N,V_year
// property star: T@"NSString",C,N,V_star
// property director: T@"NSString",C,N,V_director
// property state: T@"NSString",C,N,V_state
// property version: T@"NSString",C,N,V_version

// 0x1000393cc; encoding: B16@0:8
- (BOOL)isAdultOnly;
// 0x1000393dc; encoding: i16@0:8
- (int)getRankOrder;
// 0x10003945c; encoding: @16@0:8
- (id)getRankName;
// 0x1000394c8; encoding: @16@0:8
- (id)getRankParams;
// 0x100039534; encoding: B16@0:8
- (BOOL)isSupportRank;
// 0x1000395e0; encoding: @16@0:8
- (id)getClazzList;
// 0x10003976c; encoding: @16@0:8
- (id)getAreaList;
// 0x1000398f8; encoding: @16@0:8
- (id)getYearList;
// 0x100039a84; encoding: @24@0:8@16
- (id)initWithCoder:(id)arg1;
// 0x100039c6c; encoding: v24@0:8@16
- (void)encodeWithCoder:(id)arg1;
// 0x100039e20; encoding: @16@0:8
- (id)clazz;
// 0x100039e28; encoding: v24@0:8@16
- (void)setClazz:(id)arg1;
// 0x100039e30; encoding: @16@0:8
- (id)area;
// 0x100039e38; encoding: v24@0:8@16
- (void)setArea:(id)arg1;
// 0x100039e40; encoding: @16@0:8
- (id)lang;
// 0x100039e48; encoding: v24@0:8@16
- (void)setLang:(id)arg1;
// 0x100039e50; encoding: @16@0:8
- (id)year;
// 0x100039e58; encoding: v24@0:8@16
- (void)setYear:(id)arg1;
// 0x100039e60; encoding: @16@0:8
- (id)star;
// 0x100039e68; encoding: v24@0:8@16
- (void)setStar:(id)arg1;
// 0x100039e70; encoding: @16@0:8
- (id)director;
// 0x100039e78; encoding: v24@0:8@16
- (void)setDirector:(id)arg1;
// 0x100039e80; encoding: @16@0:8
- (id)state;
// 0x100039e88; encoding: v24@0:8@16
- (void)setState:(id)arg1;
// 0x100039e90; encoding: @16@0:8
- (id)version;
// 0x100039e98; encoding: v24@0:8@16
- (void)setVersion:(id)arg1;
// 0x100039ea0; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x100039200; encoding: @24@0:8@16
+ (id)modelWithDict:(id)arg1;

@end
