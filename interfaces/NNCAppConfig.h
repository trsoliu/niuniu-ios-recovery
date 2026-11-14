// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c6430
@interface NNCAppConfig : NSObject <NSCoding>

// property noParseRuleList: T@"NSMutableArray",&,N,V_noParseRuleList
// property defaultAvatars: T@"NSMutableArray",&,N,V_defaultAvatars
// property parserList: T@"NSMutableArray",&,N,V_parserList
// property regQuestionList: T@"NSMutableArray",&,N,V_regQuestionList
// property pwdList: T@"NSMutableArray",&,N,V_pwdList
// property hotSearchWords: T@"NSMutableArray",&,N,V_hotSearchWords
// property shareInfo: T@"Share",&,N,V_shareInfo
// property notice: T@"Notice",&,N,V_notice
// property update: T@"Notice",&,N,V_update
// property adRootModel: T@"NNCGGRootModel",&,N,V_adRootModel
// property defaultComment: T@"NSString",C,N,V_defaultComment
// property src1: T@"NNCSourceParams",&,N,V_src1
// property src2: T@"NNCSourceParams",&,N,V_src2
// property src7: T@"NNCSourceParams",&,N,V_src7
// property src3: T@"NNCSource2Params",&,N,V_src3
// property src4: T@"NNCSource2Params",&,N,V_src4
// property src5: T@"NNCSource2Params",&,N,V_src5
// property src6: T@"NNCSource2Params",&,N,V_src6
// property versionCheck: T@"NNCVersionCheck",&,N,V_versionCheck

// 0x1000e76f4; encoding: @24@0:8@16
- (id)getParserName:(id)arg1;
// 0x1000e7868; encoding: @24@0:8@16
- (id)getParserDesc:(id)arg1;
// 0x1000e8360; encoding: @24@0:8@16
- (id)initWithCoder:(id)arg1;
// 0x1000e8728; encoding: v24@0:8@16
- (void)encodeWithCoder:(id)arg1;
// 0x1000e8b8c; encoding: @16@0:8
- (id)noParseRuleList;
// 0x1000e8b94; encoding: v24@0:8@16
- (void)setNoParseRuleList:(id)arg1;
// 0x1000e8ba0; encoding: @16@0:8
- (id)defaultAvatars;
// 0x1000e8ba8; encoding: v24@0:8@16
- (void)setDefaultAvatars:(id)arg1;
// 0x1000e8bb4; encoding: @16@0:8
- (id)parserList;
// 0x1000e8bbc; encoding: v24@0:8@16
- (void)setParserList:(id)arg1;
// 0x1000e8bc8; encoding: @16@0:8
- (id)regQuestionList;
// 0x1000e8bd0; encoding: v24@0:8@16
- (void)setRegQuestionList:(id)arg1;
// 0x1000e8bdc; encoding: @16@0:8
- (id)pwdList;
// 0x1000e8be4; encoding: v24@0:8@16
- (void)setPwdList:(id)arg1;
// 0x1000e8bf0; encoding: @16@0:8
- (id)hotSearchWords;
// 0x1000e8bf8; encoding: v24@0:8@16
- (void)setHotSearchWords:(id)arg1;
// 0x1000e8c04; encoding: @16@0:8
- (id)shareInfo;
// 0x1000e8c0c; encoding: v24@0:8@16
- (void)setShareInfo:(id)arg1;
// 0x1000e8c18; encoding: @16@0:8
- (id)notice;
// 0x1000e8c20; encoding: v24@0:8@16
- (void)setNotice:(id)arg1;
// 0x1000e8c2c; encoding: @16@0:8
- (id)update;
// 0x1000e8c34; encoding: v24@0:8@16
- (void)setUpdate:(id)arg1;
// 0x1000e8c40; encoding: @16@0:8
- (id)adRootModel;
// 0x1000e8c48; encoding: v24@0:8@16
- (void)setAdRootModel:(id)arg1;
// 0x1000e8c54; encoding: @16@0:8
- (id)defaultComment;
// 0x1000e8c5c; encoding: v24@0:8@16
- (void)setDefaultComment:(id)arg1;
// 0x1000e8c64; encoding: @16@0:8
- (id)src1;
// 0x1000e8c6c; encoding: v24@0:8@16
- (void)setSrc1:(id)arg1;
// 0x1000e8c78; encoding: @16@0:8
- (id)src2;
// 0x1000e8c80; encoding: v24@0:8@16
- (void)setSrc2:(id)arg1;
// 0x1000e8c8c; encoding: @16@0:8
- (id)src7;
// 0x1000e8c94; encoding: v24@0:8@16
- (void)setSrc7:(id)arg1;
// 0x1000e8ca0; encoding: @16@0:8
- (id)src3;
// 0x1000e8ca8; encoding: v24@0:8@16
- (void)setSrc3:(id)arg1;
// 0x1000e8cb4; encoding: @16@0:8
- (id)src4;
// 0x1000e8cbc; encoding: v24@0:8@16
- (void)setSrc4:(id)arg1;
// 0x1000e8cc8; encoding: @16@0:8
- (id)src5;
// 0x1000e8cd0; encoding: v24@0:8@16
- (void)setSrc5:(id)arg1;
// 0x1000e8cdc; encoding: @16@0:8
- (id)src6;
// 0x1000e8ce4; encoding: v24@0:8@16
- (void)setSrc6:(id)arg1;
// 0x1000e8cf0; encoding: @16@0:8
- (id)versionCheck;
// 0x1000e8cf8; encoding: v24@0:8@16
- (void)setVersionCheck:(id)arg1;
// 0x1000e8d04; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000e7580; encoding: @16@0:8
+ (id)currentConfig;
// 0x1000e7664; encoding: v24@0:8@16
+ (void)saveConfig:(id)arg1;
// 0x1000e79dc; encoding: @24@0:8@16
+ (id)configWithDict:(id)arg1;
// 0x1000e8abc; encoding: @16@0:8
+ (id)defaultConfigDict;

@end
