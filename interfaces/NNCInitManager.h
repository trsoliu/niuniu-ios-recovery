// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c65e8
@interface NNCInitManager : NSObject <UIAlertViewDelegate>

// property database: T@"JQFMDB",&,N,V_database
// property stopPlayTimer: T@"NSTimer",&,N,V_stopPlayTimer
// property timerCloseEnum: TQ,N,V_timerCloseEnum
// property dateForamtter: T@"NSDateFormatter",&,N,V_dateForamtter
// property dateForamtter2: T@"NSDateFormatter",&,N,V_dateForamtter2
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x1000ec3a4; encoding: @16@0:8
- (id)init;
// 0x1000ec3f4; encoding: v16@0:8
- (void)dealloc;
// 0x1000ec45c; encoding: v16@0:8
- (void)setup;
// 0x1000ec568; encoding: v16@0:8
- (void)setupAppearance;
// 0x1000eca58; encoding: v24@0:8@16
- (void)statusBarOrientationChange:(id)arg1;
// 0x1000eca5c; encoding: v24@0:8@16
- (void)setupTopHeight:(id)arg1;
// 0x1000ecb48; encoding: @16@0:8
- (id)database;
// 0x1000ecbcc; encoding: i16@0:8
- (int)getStoreVideoCount;
// 0x1000ecc10; encoding: @24@0:8q16
- (id)getItemByVid:(long long)arg1;
// 0x1000eccec; encoding: v24@0:8@16
- (void)deleteSingle:(id)arg1;
// 0x1000ecd94; encoding: v28@0:8@16B24
- (void)nncinsertOrUpdateVideo:(id)arg1 useOriInsertTime:(BOOL)arg2;
// 0x1000ed1a8; encoding: @20@0:8i16
- (id)getHistoryList:(int)arg1;
// 0x1000ed1b0; encoding: @24@0:8i16B20
- (id)getHistoryList:(int)arg1 judgeTeen:(BOOL)arg2;
// 0x1000ed28c; encoding: v24@0:8Q16
- (void)setTimerCloseEnum:(unsigned long long)arg1;
// 0x1000ed368; encoding: v16@0:8
- (void)stopTimer;
// 0x1000ed3d0; encoding: v24@0:8@16
- (void)timerSelector:(id)arg1;
// 0x1000ed41c; encoding: Q16@0:8
- (unsigned long long)timerCloseEnum;
// 0x1000ed424; encoding: @16@0:8
- (id)dateForamtter;
// 0x1000ed42c; encoding: v24@0:8@16
- (void)setDateForamtter:(id)arg1;
// 0x1000ed438; encoding: @16@0:8
- (id)dateForamtter2;
// 0x1000ed440; encoding: v24@0:8@16
- (void)setDateForamtter2:(id)arg1;
// 0x1000ed44c; encoding: v24@0:8@16
- (void)setDatabase:(id)arg1;
// 0x1000ed458; encoding: @16@0:8
- (id)stopPlayTimer;
// 0x1000ed460; encoding: v24@0:8@16
- (void)setStopPlayTimer:(id)arg1;
// 0x1000ed46c; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x1000ec244; encoding: @16@0:8
+ (id)sharedInstance;
// 0x1000ec2e4; encoding: @24@0:8^{_NSZone=}16
// Unrendered runtime method: class allocWithZone:
// 0x1000ec394; encoding: v16@0:8
+ (void)destroyInstance;

@end
