// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2150
@interface PublicFunction : NSObject

// 0x1000078f4; encoding: @24@0:8@16
+ (id)getImageViewWithView:(id)arg1;
// 0x10000795c; encoding: @32@0:8@16d24
+ (id)blurryImage:(id)arg1 withBlurLevel:(double)arg2;
// 0x100007b28; encoding: v64@0:8@16Q24d32@40d48@56
+ (void)setupRoundedCornersWithView:(id)arg1 cutCorners:(unsigned long long)arg2 cornersRadio:(double)arg3 borderColor:(id)arg4 borderWidth:(double)arg5 viewColor:(id)arg6;
// 0x100007c10; encoding: @24@0:8@16
+ (id)imageWithOriginalImage:(id)arg1;
// 0x100007d54; encoding: @40@0:8@16d24d32
+ (id)imageCompressWithImage:(id)arg1 targetHeight:(double)arg2 targetWidth:(double)arg3;
// 0x100007dcc; encoding: @32@0:8@16Q24
+ (id)compressImage:(id)arg1 withMaxLength:(unsigned long long)arg2;
// 0x100007f84; encoding: B24@0:8@16
+ (BOOL)isVideoUrlString:(id)arg1;
// 0x100007fe0; encoding: B32@0:8d16d24
+ (BOOL)isSameDay:(double)arg1 date2:(double)arg2;
// 0x10000811c; encoding: @24@0:8d16
+ (id)timeToDate:(double)arg1;
// 0x100008144; encoding: @24@0:8@16
+ (id)thousandDivideString:(id)arg1;
// 0x100008284; encoding: q32@0:8@16@24
+ (long long)orderCharsString1:(id)arg1 string2:(id)arg2;
// 0x10000834c; encoding: @24@0:8@16
+ (id)pinyinString:(id)arg1;
// 0x1000084f4; encoding: B24@0:8@16
+ (BOOL)isAllChineseCharacters:(id)arg1;
// 0x100008594; encoding: B24@0:8@16
+ (BOOL)isPwdFormat:(id)arg1;
// 0x100008610; encoding: @24@0:8Q16
+ (id)tenThousand:(unsigned long long)arg1;
// 0x100008684; encoding: v32@0:8@16Q24
+ (void)limitTextFieldLength:(id)arg1 length:(unsigned long long)arg2;
// 0x1000087b0; encoding: B24@0:8@16
+ (BOOL)isPhoneNum:(id)arg1;
// 0x1000087d0; encoding: B24@0:8@16
+ (BOOL)isWechatString:(id)arg1;
// 0x100008950; encoding: B24@0:8@16
+ (BOOL)isPassword:(id)arg1;
// 0x1000089a8; encoding: B24@0:8@16
+ (BOOL)isContainsLetterAndNumber:(id)arg1;
// 0x100008a38; encoding: B24@0:8@16
+ (BOOL)isValidateEmail:(id)arg1;
// 0x100008abc; encoding: B24@0:8@16
+ (BOOL)verifyIDCardNumber:(id)arg1;
// 0x100009070; encoding: @24@0:8@16
+ (id)phoneFormat:(id)arg1;
// 0x100009174; encoding: @20@0:8f16
+ (id)customfont:(float)arg1;
// 0x100009184; encoding: s28@0:8*16i24
+ (short)byteArrayToShort:(char *)arg1 index:(int)arg2;
// 0x100009194; encoding: s28@0:8*16i24
+ (short)byteArrayToUnsigenShort:(char *)arg1 index:(int)arg2;
// 0x1000091a4; encoding: q28@0:8*16i24
+ (long long)byteArrayTolong:(char *)arg1 index:(int)arg2;
// 0x1000091cc; encoding: i28@0:8*16i24
+ (int)byteArrayToInt:(char *)arg1 index:(int)arg2;
// 0x1000091f0; encoding: @32@0:8q16@24
+ (id)time:(long long)arg1 format:(id)arg2;
// 0x1000092c8; encoding: @24@0:8q16
+ (id)time:(long long)arg1;
// 0x100009380; encoding: @24@0:8q16
+ (id)openTime:(long long)arg1;
// 0x100009438; encoding: @16@0:8
+ (id)getNSUUID;
// 0x1000094e4; encoding: v32@0:8@16@24
+ (void)setKV:(id)arg1 values:(id)arg2;
// 0x10000955c; encoding: @24@0:8@16
+ (id)getKValue:(id)arg1;
// 0x1000095cc; encoding: {CGSize=dd}44@0:8@16i24{CGSize=dd}28
+ (CGSize)getTextSize:(id)arg1 font:(int)arg2 maxSize:(CGSize)arg3;
// 0x1000096e4; encoding: @24@0:8q16
+ (id)getWeekDay:(long long)arg1;
// 0x100009838; encoding: @24@0:8q16
+ (id)getSurplusTime:(long long)arg1;
// 0x100009978; encoding: i20@0:8i16
+ (int)getFactorial:(int)arg1;
// 0x1000099b0; encoding: @24@0:8@16
+ (id)getSecretSubStr:(id)arg1;
// 0x100009cd0; encoding: @32@0:8@16@24
+ (id)getSecretSubStr:(id)arg1 appendStr:(id)arg2;
// 0x10000a034; encoding: @24@0:8@16
+ (id)timeToString:(id)arg1;
// 0x10000a2e4; encoding: @24@0:8@16
+ (id)msgTimeToString:(id)arg1;
// 0x10000a664; encoding: @24@0:8q16
+ (id)week:(long long)arg1;
// 0x10000a688; encoding: @24@0:8q16
+ (id)shortWeek:(long long)arg1;
// 0x10000a6ac; encoding: @24@0:8@16
+ (id)publishTimeToString:(id)arg1;
// 0x10000a850; encoding: @24@0:8@16
+ (id)subTimeToString:(id)arg1;
// 0x10000a8cc; encoding: @24@0:8@16
+ (id)completeTimeToString:(id)arg1;
// 0x10000a948; encoding: @24@0:8@16
+ (id)getMD5WithData:(id)arg1;
// 0x10000aa58; encoding: @32@0:8q16@24
+ (id)subStringForUnicodeLenght:(long long)arg1 origin:(id)arg2;
// 0x10000ab2c; encoding: v32@0:8q16@24
+ (void)subStringForUnicodeLenght:(long long)arg1 textField:(id)arg2;
// 0x10000ac58; encoding: @16@0:8
+ (id)getMacAddress;
// 0x10000adcc; encoding: @32@0:8@16@24
+ (id)getOrderStr:(id)arg1 appendStr:(id)arg2;
// 0x10000b0f8; encoding: @24@0:8@16
+ (id)sha256:(id)arg1;
// 0x10000b220; encoding: @24@0:8d16
+ (id)convertTime:(double)arg1;
// 0x10000b2d0; encoding: @24@0:8@16
+ (id)stringToColor:(id)arg1;
// 0x10000b3ac; encoding: B24@0:8@16
+ (BOOL)isPureInt:(id)arg1;
// 0x10000b410; encoding: @24@0:8@16
+ (id)ballContent:(id)arg1;
// 0x10000b49c; encoding: Q32@0:8Q16Q24
+ (unsigned long long)cSmall:(unsigned long long)arg1 Big:(unsigned long long)arg2;
// 0x10000b4e8; encoding: @32@0:8@16Q24
+ (id)totalPermutation:(id)arg1 perCount:(unsigned long long)arg2;
// 0x10000b84c; encoding: v40@0:8@16@24q32
+ (void)totalIndexPermutation:(id)arg1 currentIndex:(id)arg2 totalCount:(long long)arg3;
// 0x10000b8d0; encoding: @32@0:8@16q24
+ (id)nextIndexArrayWithIndexArray:(id)arg1 totalCount:(long long)arg2;
// 0x10000ba5c; encoding: q24@0:8Q16
+ (long long)factorial:(unsigned long long)arg1;
// 0x10000ba88; encoding: @24@0:8@16
+ (id)numArrayToString:(id)arg1;
// 0x10000bc04; encoding: @24@0:8@16
+ (id)stringArrayToString:(id)arg1;
// 0x10000bd7c; encoding: B24@0:8@16
+ (BOOL)isNum:(id)arg1;
// 0x10000be00; encoding: f16@0:8
+ (float)getSpaceHeight;
// 0x10000bf18; encoding: @24@0:8@16
+ (id)dictionaryToJson:(id)arg1;
// 0x10000bf78; encoding: @24@0:8@16
+ (id)moneyStringWithCount:(id)arg1;
// 0x10000c17c; encoding: @24@0:8Q16
+ (id)subMoneyStringWithCount:(unsigned long long)arg1;
// 0x10000c4b0; encoding: @32@0:8Q16Q24
+ (id)random:(unsigned long long)arg1 fromRange:(unsigned long long)arg2;
// 0x10000c5dc; encoding: @16@0:8
+ (id)getNetWorkStates;
// 0x10000c7a8; encoding: v36@0:8@16B24d28
+ (void)buttonRelayout:(id)arg1 isTextLeft:(BOOL)arg2 middleMargin:(double)arg3;
// 0x10000cae0; encoding: @40@0:8@16{CGSize=dd}24
+ (id)image:(id)arg1 scaleToSize:(CGSize)arg2;
// 0x10000cb88; encoding: @24@0:8@16
+ (id)cityStringShort:(id)arg1;
// 0x10000ce44; encoding: @24@0:8q16
+ (id)int2Time:(long long)arg1;
// 0x10000ce94; encoding: @16@0:8
+ (id)cityString;
// 0x10000cea0; encoding: @24@0:8q16
+ (id)getHotString:(long long)arg1;
// 0x10000cf0c; encoding: @16@0:8
+ (id)getPlayingGif;
// 0x10000cffc; encoding: @24@0:8q16
+ (id)timeString:(long long)arg1;

@end
