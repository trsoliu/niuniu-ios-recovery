// Recovered from Objective-C runtime metadata; not original source.
// Types preserve ABI encodings. Argument names are generated placeholders.
// Method implementations and source-level typedefs are unavailable here.
#import <UIKit/UIKit.h>

// class address: 0x1023c45e0
@interface NNCFileDownloadManager : NSObject <IVideoInfoListener, IVideoInfoParseListener, IDownloadTaskListener>

// property taskItemDict: T@"NSMutableDictionary",&,N,V_taskItemDict
// property downloadingTaskArray: T@"NSMutableArray",&,N,V_downloadingTaskArray
// property downloadTaskDict: T@"NSMutableDictionary",&,N,V_downloadTaskDict
// property isLoadFromDb: TB,N,V_isLoadFromDb
// property delegate: T@"<NNCDownloadRefreshDelegate>",W,N,V_delegate
// property hash: TQ,R
// property superclass: T#,R
// property description: T@"NSString",R,C
// property debugDescription: T@"NSString",?,R,C

// 0x100095a04; encoding: @16@0:8
- (id)init;
// 0x100095ad4; encoding: @16@0:8
- (id)getAllDownloadInfos;
// 0x100095d74; encoding: v24@0:8@16
- (void)startDownload:(id)arg1;
// 0x100095f9c; encoding: v28@0:8@16B24
- (void)startParseTaskItem:(id)arg1 isNewTask:(BOOL)arg2;
// 0x100095fa0; encoding: v24@0:8@16
- (void)parseNewTaskItem:(id)arg1;
// 0x100095fb0; encoding: v24@0:8@16
- (void)parseLocalM3U8TaskItem:(id)arg1;
// 0x100095fc0; encoding: v32@0:8@16@24
- (void)startNormalDownloadTask:(id)arg1 headers:(id)arg2;
// 0x10009616c; encoding: v40@0:8@16@24@32
- (void)startM3U8VideoDownloadTask:(id)arg1 m3u8:(id)arg2 headers:(id)arg3;
// 0x10009630c; encoding: v24@0:8@16
- (void)startDownloadTask:(id)arg1;
// 0x100096348; encoding: v24@0:8@16
- (void)saveTaskItem:(id)arg1;
// 0x10009639c; encoding: v16@0:8
- (void)notifyChange;
// 0x1000965a0; encoding: i16@0:8
- (int)getRunningTaskCount;
// 0x100096764; encoding: v16@0:8
- (void)pauseAllTaskItem;
// 0x1000969d0; encoding: v24@0:8@16
- (void)pauseTaskItem:(id)arg1;
// 0x100096b5c; encoding: v24@0:8@16
- (void)deleteTaskItemList:(id)arg1;
// 0x100096f98; encoding: v16@0:8
- (void)judgeShouldStartNextTask;
// 0x100097034; encoding: @16@0:8
- (id)getNextDownloadableTaskItem;
// 0x1000971ac; encoding: v32@0:8@16@24
- (void)onBaseVideoInfoFailed:(id)arg1 error:(id)arg2;
// 0x100097208; encoding: v32@0:8@16@24
- (void)onBaseVideoInfoSuccess:(id)arg1 headers:(id)arg2;
// 0x100097280; encoding: v32@0:8@16@24
- (void)onM3U8InfoFailed:(id)arg1 error:(id)arg2;
// 0x1000972dc; encoding: v40@0:8@16@24@32
- (void)onM3U8InfoSuccess:(id)arg1 m3u8:(id)arg2 headers:(id)arg3;
// 0x100097370; encoding: v32@0:8@16@24
- (void)onM3U8FileParseFailed:(id)arg1 error:(id)arg2;
// 0x100097374; encoding: v32@0:8@16@24
- (void)onM3U8FileParseSuccess:(id)arg1 m3u8:(id)arg2;
// 0x100097610; encoding: v24@0:8@16
- (void)onTaskStart:(id)arg1;
// 0x10009766c; encoding: v32@0:8@16@24
- (void)onTaskFailed:(id)arg1 error:(id)arg2;
// 0x1000976d0; encoding: v24@0:8@16
- (void)onTaskFinished:(id)arg1;
// 0x1000977a0; encoding: v24@0:8@16
- (void)onTaskPaused:(id)arg1;
// 0x100097878; encoding: v52@0:8@16f24q28i36i40q44
- (void)onTaskProgressForM3U8WithItem:(id)arg1 percent:(float)arg2 cachedSize:(long long)arg3 curTs:(int)arg4 totalTs:(int)arg5 speed:(long long)arg6;
// 0x10009798c; encoding: v52@0:8@16f24q28q36q44
- (void)onTaskProgressWithItem:(id)arg1 percent:(float)arg2 cachedSize:(long long)arg3 totalSize:(long long)arg4 speed:(long long)arg5;
// 0x100097a88; encoding: @16@0:8
- (id)delegate;
// 0x100097aa0; encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// 0x100097aac; encoding: @16@0:8
- (id)taskItemDict;
// 0x100097ab4; encoding: v24@0:8@16
- (void)setTaskItemDict:(id)arg1;
// 0x100097ac0; encoding: @16@0:8
- (id)downloadingTaskArray;
// 0x100097ac8; encoding: v24@0:8@16
- (void)setDownloadingTaskArray:(id)arg1;
// 0x100097ad4; encoding: @16@0:8
- (id)downloadTaskDict;
// 0x100097adc; encoding: v24@0:8@16
- (void)setDownloadTaskDict:(id)arg1;
// 0x100097ae8; encoding: B16@0:8
- (BOOL)isLoadFromDb;
// 0x100097af0; encoding: v20@0:8B16
- (void)setIsLoadFromDb:(BOOL)arg1;
// 0x100097af8; encoding: v16@0:8
// Unrendered runtime method: instance .cxx_destruct
// 0x100095964; encoding: @16@0:8
+ (id)sharedInstance;

@end
