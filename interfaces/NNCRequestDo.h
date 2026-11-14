// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c5648
@interface NNCRequestDo : NSObject

// 0x1000c499c; encoding: @16@0:8
+ (id)getCurrentDomain;
// 0x1000c4a7c; encoding: B16@0:8
+ (BOOL)isGetDomainSuccess;
// 0x1000c4a88; encoding: v24@0:8B16B20
+ (void)initDomain:(BOOL)arg1 isFirstRequest:(BOOL)arg2;
// 0x1000c4d1c; encoding: v24@0:8@16
+ (void)judgeDomains:(id)arg1;
// 0x1000c4d6c; encoding: v32@0:8@16q24
+ (void)judgeSingleDomain:(id)arg1 index:(long long)arg2;
// 0x1000c4f6c; encoding: v24@0:8@16
+ (void)domainSuccess:(id)arg1;

@end
