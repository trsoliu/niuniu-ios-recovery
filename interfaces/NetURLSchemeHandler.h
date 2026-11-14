// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c3f00
@interface NetURLSchemeHandler : NSObject <WKURLSchemeHandler>

// property hashTable: T@"NSHashTable",&,N,V_hashTable
// property delegate: T@"<NetWebViewDelegate>",W,N,V_delegate
// property webView: T@"NetWebView",W,N,V_webView
// property type: Ti,N,V_type
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x100080bc4; encoding: @16@0:8
- (id)init;
// 0x100080c34; encoding: v32@0:8@16@24
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
// 0x100081688; encoding: v32@0:8@16@24
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
// 0x10008170c; encoding: @16@0:8
- (id)hashTable;
// 0x100081714; encoding: v24@0:8@16
- (void)setHashTable:(id)arg1;
// 0x100081720; encoding: @16@0:8
- (id)delegate;
// 0x100081738; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x100081744; encoding: @16@0:8
- (id)webView;
// 0x10008175c; encoding: v24@0:8@16
- (void)setWebView:(id)arg1;
// 0x100081768; encoding: i16@0:8
- (int)type;
// 0x100081770; encoding: v20@0:8i16
- (void)setType:(int)arg1;
// 0x100081778; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct

@end
