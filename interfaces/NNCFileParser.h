// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c3e88
@interface NNCFileParser : NSObject

// 0x1000711a8; encoding: B24@0:8@16
+ (BOOL)isThreeStepSource:(id)arg1;
// 0x10007122c; encoding: @24@0:8@16
+ (id)getThreeStepSrc:(id)arg1;
// 0x100071360; encoding: B24@0:8@16
+ (BOOL)nncisXM3U8OriPlayer:(id)arg1;
// 0x10007136c; encoding: B24@0:8@16
+ (BOOL)nncisXM3U8CopyPlayer:(id)arg1;
// 0x100071378; encoding: B24@0:8@16
+ (BOOL)isHeMaPlayer:(id)arg1;
// 0x100071384; encoding: B16@0:8
+ (BOOL)currentIsXM3U8OriPlayer;
// 0x100071398; encoding: B16@0:8
+ (BOOL)currentIsXM3U8CopyPlayer;
// 0x1000713ac; encoding: B16@0:8
+ (BOOL)currentIsHEMAPlayer;
// 0x1000713c0; encoding: v16@0:8
+ (void)resetPlayerData;
// 0x100071450; encoding: v24@0:8@16
+ (void)filterVideoBeanSource:(id)arg1;
// 0x100071808; encoding: v68@0:8@16@24@32B40@?44@?52@?60
+ (void)parseUrlWithUrl:(id)arg1 idFlag:(id)arg2 playerId:(id)arg3 isForPlay:(BOOL)arg4 success:(id /* block signature unavailable */)arg5 needVerify:(id /* block signature unavailable */)arg6 error:(id /* block signature unavailable */)arg7;
// 0x1000719a0; encoding: v68@0:8@16@24@32B40@?44@?52@?60
+ (void)parseSpUrlWithUrl:(id)arg1 idFlag:(id)arg2 playerId:(id)arg3 isForPlay:(BOOL)arg4 success:(id /* block signature unavailable */)arg5 needVerify:(id /* block signature unavailable */)arg6 error:(id /* block signature unavailable */)arg7;
// 0x1000723f4; encoding: v72@0:8@16@24@32@40@48@?56@?64
+ (void)dealCKAndVodUrlWithUrl:(id)arg1 idFlag:(id)arg2 playerId:(id)arg3 ck:(id)arg4 m3u8Url:(id)arg5 success:(id /* block signature unavailable */)arg6 error:(id /* block signature unavailable */)arg7;
// 0x10007297c; encoding: v60@0:8@16@24@32@?40@?48B56
+ (void)parseNormalUrlWithUrl:(id)arg1 idFlag:(id)arg2 playerId:(id)arg3 success:(id /* block signature unavailable */)arg4 error:(id /* block signature unavailable */)arg5 isUseBackupParser:(BOOL)arg6;
// 0x100073254; encoding: @24@0:8@16
+ (id)getParserByPlayerId:(id)arg1;
// 0x1000733c8; encoding: @24@0:8@16
+ (id)nncgetSpTsUrlStringForPlayWithTsUrl:(id)arg1;
// 0x100073928; encoding: @24@0:8@16
+ (id)nncgetSpEncryptUrlStringForPlayWithKey:(id)arg1;
// 0x100073da0; encoding: @48@0:8@16@24@32@40
+ (id)nncgetSpTsUrlStringForDownloadWithPlayerId:(id)arg1 oriUrl:(id)arg2 m3u8Url:(id)arg3 tsUrl:(id)arg4;
// 0x1000743b0; encoding: @48@0:8@16@24@32@40
+ (id)nncgetSpEncryptUrlStringForDownloadWithPlayerId:(id)arg1 oriUrl:(id)arg2 m3u8Url:(id)arg3 tsUrl:(id)arg4;

@end
