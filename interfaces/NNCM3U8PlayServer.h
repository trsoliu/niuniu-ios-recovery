// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2100
@interface NNCM3U8PlayServer : NSObject

// property httpServer: T@"HTTPServer",R,N,V_httpServer
// property port: TS,N,V_port
// property serverURL: T@"NSURL",&,N,V_serverURL

// 0x10000759c; encoding: @16@0:8
- (id)init;
// 0x10000765c; encoding: @24@0:8@16
- (id)getLocalPUrlByUrl:(id)arg1;
// 0x10000777c; encoding: B16@0:8
- (BOOL)isServerRunning;
// 0x100007784; encoding: v16@0:8
- (void)start;
// 0x100007884; encoding: v16@0:8
- (void)stop;
// 0x100007888; encoding: B24@0:8^@16
- (BOOL)_start:(id *)arg1;
// 0x100007890; encoding: v16@0:8
- (void)_stop;
// 0x100007898; encoding: @16@0:8
- (id)httpServer;
// 0x1000078a0; encoding: S16@0:8
- (unsigned short)port;
// 0x1000078a8; encoding: v20@0:8S16
- (void)setPort:(unsigned short)arg1;
// 0x1000078b0; encoding: @16@0:8
- (id)serverURL;
// 0x1000078b8; encoding: v24@0:8@16
- (void)setServerURL:(id)arg1;
// 0x1000078c4; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000074fc; encoding: @16@0:8
+ (id)sharedInstance;

@end
