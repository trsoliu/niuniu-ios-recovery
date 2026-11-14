// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2c40
@interface NNCVideoSourceBean : NSObject <NSCoding>

// property playerId: T@"NSString",C,N,V_playerId
// property episodeBeanList: T@"NSMutableArray",&,N,V_episodeBeanList

// 0x100034f60; encoding: @24@0:8@16
- (id)initWithCoder:(id)arg1;
// 0x100035028; encoding: v24@0:8@16
- (void)encodeWithCoder:(id)arg1;
// 0x1000350bc; encoding: @16@0:8
- (id)playerId;
// 0x1000350c4; encoding: v24@0:8@16
- (void)setPlayerId:(id)arg1;
// 0x1000350cc; encoding: @16@0:8
- (id)episodeBeanList;
// 0x1000350d4; encoding: v24@0:8@16
- (void)setEpisodeBeanList:(id)arg1;
// 0x1000350e0; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x100034d8c; encoding: @24@0:8@16
+ (id)modelWithDict:(id)arg1;

@end
