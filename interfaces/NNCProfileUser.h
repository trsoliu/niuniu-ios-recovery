// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c2a10
@interface NNCProfileUser : NSObject <NSCoding>

// property sid: T@"NSString",&,N,V_sid
// property userID: T@"NSString",&,N,V_userID
// property nickname: T@"NSString",&,N,V_nickname
// property avatar: T@"NSString",&,N,V_avatar
// property phoneNum: T@"NSString",&,N,V_phoneNum
// property question: T@"NSString",&,N,V_question

// 0x1000297b8; encoding: v24@0:8@16
- (void)setValueWithInfo:(id)arg1;
// 0x1000299c8; encoding: B16@0:8
- (BOOL)isLogin;
// 0x100029a08; encoding: @24@0:8@16
- (id)initWithCoder:(id)arg1;
// 0x100029b90; encoding: v24@0:8@16
- (void)encodeWithCoder:(id)arg1;
// 0x100029ce4; encoding: @16@0:8
- (id)sid;
// 0x100029cec; encoding: v24@0:8@16
- (void)setSid:(id)arg1;
// 0x100029cf8; encoding: @16@0:8
- (id)userID;
// 0x100029d00; encoding: v24@0:8@16
- (void)setUserID:(id)arg1;
// 0x100029d0c; encoding: @16@0:8
- (id)nickname;
// 0x100029d14; encoding: v24@0:8@16
- (void)setNickname:(id)arg1;
// 0x100029d20; encoding: @16@0:8
- (id)avatar;
// 0x100029d28; encoding: v24@0:8@16
- (void)setAvatar:(id)arg1;
// 0x100029d34; encoding: @16@0:8
- (id)phoneNum;
// 0x100029d3c; encoding: v24@0:8@16
- (void)setPhoneNum:(id)arg1;
// 0x100029d48; encoding: @16@0:8
- (id)question;
// 0x100029d50; encoding: v24@0:8@16
- (void)setQuestion:(id)arg1;
// 0x100029d5c; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000296a0; encoding: @16@0:8
+ (id)currentUser;
// 0x1000296ac; encoding: v24@0:8@16
+ (void)setCurrentUser:(id)arg1;
// 0x1000296bc; encoding: v16@0:8
+ (void)saveUser;

@end
