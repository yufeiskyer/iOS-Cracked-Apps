//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"
#import "NetworkCheckerDelegate.h"
#import "QLP2PDownloadListenerDelegate.h"
#import "QLSDownloadIndicatorDelegate.h"

@class AVAudioPlayer, NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSTimer, QLDownloadDB, QLP2PDownloadListener, QLSDownloadQueue;

@interface QLSDownloadManager : NSObject <QLSDownloadIndicatorDelegate, NetworkCheckerDelegate, AVAudioPlayerDelegate, QLP2PDownloadListenerDelegate>
{
    NSMutableArray *_tasks;
    NSMutableArray *_taskGroupList;
    NSMutableArray *_taskRemovingQueue;
    _Bool _initializing;
    _Bool _initialized;
    float _loadingProgress;
    _Bool _bLoadingProgress;
    _Bool _suspending;
    _Bool _networkPaused;
    _Bool _autoPauseIn3GFirst;
    NSOperationQueue *_loadTasksQueue;
    QLSDownloadQueue *_downloadQueue;
    NSTimer *_speedCalcTimer;
    NSTimer *_serializeTimer;
    NSMutableDictionary *_pendingInfoList;
    NSMutableDictionary *_sendingInfoList;
    NSMutableDictionary *_changeResolutionInfoList;
    AVAudioPlayer *_audioPlayer;
    NSTimer *_audioDetectingTimer;
    id <QLSDownloadDeletingProgressDelegate> _deletingProgressDelegate;
    unsigned long long _batchDeletingCount;
    NSMutableArray *_suspendedTaskUniqueIDs;
    QLDownloadDB *_downloadDb;
    NSMutableArray *_aryDownloadBasicInfo;
    _Bool _batchDeleting;
    NSTimer *_wwanBytesTimer;
    unsigned long long _wwanBytesBeforeBegin;
    NSTimer *_resumeDownloadTimer;
    NSMutableArray *_finishedQueue;
    int _downloadClickState;
    int _downloadResult;
    int _settingFlag;
    QLP2PDownloadListener *_p2pDownloadLinsener;
    _Bool _p2pIntialized;
    NSTimer *_tryAddDownloadSpeedTimer;
    int _tryUseAcclerateSecond;
    _Bool _hadShowBatteryLevelTip;
    _Bool _isP2pUpdateStart;
    _Bool _suspendWhenBackgroudInvalid;
    _Bool _suspendWhenBattaryLow;
    _Bool _wwanBytesIsUnusual;
    _Bool _needResumeDownload;
    _Bool _showedDownloadAndPlayPush;
    _Bool _tryUseAcclerate;
    _Bool _needReplayWhileP2pDeinit;
    _Bool _isNeedRestrictMaxDownloadCount;
    NSArray *_willDownloadInfos;
    CDUnknownBlockType _finishedInitializeBlock;
    unsigned long long _maxDownloadCount;
}

+ (_Bool)freeModeBackGroundDownloadEnable;
+ (long long)calcDownloadEstimateSizeWithLength:(unsigned long long)arg1;
+ (_Bool)shouldFlowOccurs;
+ (_Bool)shouldDownloadOrNot;
+ (_Bool)shouldDownloadOrNotVia3GSetting;
+ (_Bool)shouldNoticeFirstDownloadBy3G;
+ (_Bool)shouldDownloadBy3GOrNot;
+ (id)sharedInstance;
@property(nonatomic) _Bool isNeedRestrictMaxDownloadCount; // @synthesize isNeedRestrictMaxDownloadCount=_isNeedRestrictMaxDownloadCount;
@property(nonatomic) unsigned long long maxDownloadCount; // @synthesize maxDownloadCount=_maxDownloadCount;
@property(copy, nonatomic) CDUnknownBlockType finishedInitializeBlock; // @synthesize finishedInitializeBlock=_finishedInitializeBlock;
@property(nonatomic) int downloadClickState; // @synthesize downloadClickState=_downloadClickState;
@property(retain, nonatomic) NSArray *willDownloadInfos; // @synthesize willDownloadInfos=_willDownloadInfos;
@property(nonatomic) _Bool needReplayWhileP2pDeinit; // @synthesize needReplayWhileP2pDeinit=_needReplayWhileP2pDeinit;
@property(nonatomic) _Bool tryUseAcclerate; // @synthesize tryUseAcclerate=_tryUseAcclerate;
@property(nonatomic) _Bool showedDownloadAndPlayPush; // @synthesize showedDownloadAndPlayPush=_showedDownloadAndPlayPush;
@property(nonatomic) _Bool needResumeDownload; // @synthesize needResumeDownload=_needResumeDownload;
@property(readonly, nonatomic) _Bool p2pIntialized; // @synthesize p2pIntialized=_p2pIntialized;
@property(readonly, retain, nonatomic) QLP2PDownloadListener *p2pDownloadLinsener; // @synthesize p2pDownloadLinsener=_p2pDownloadLinsener;
@property(nonatomic) _Bool wwanBytesIsUnusual; // @synthesize wwanBytesIsUnusual=_wwanBytesIsUnusual;
@property(nonatomic) _Bool bLoadingProgress; // @synthesize bLoadingProgress=_bLoadingProgress;
@property(retain, nonatomic) NSMutableArray *aryDownloadBasicInfo; // @synthesize aryDownloadBasicInfo=_aryDownloadBasicInfo;
@property _Bool suspendWhenBattaryLow; // @synthesize suspendWhenBattaryLow=_suspendWhenBattaryLow;
@property _Bool suspendWhenBackgroudInvalid; // @synthesize suspendWhenBackgroudInvalid=_suspendWhenBackgroudInvalid;
@property(readonly) _Bool suspending; // @synthesize suspending=_suspending;
@property float loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property _Bool initializing; // @synthesize initializing=_initializing;
@property(readonly) _Bool initialized; // @synthesize initialized=_initialized;
- (void).cxx_destruct;
- (_Bool)shouldShowP2pUpdateTips;
- (_Bool)isP2pUpdateStart;
- (void)finishedP2pUdate;
- (void)startP2pUpdate;
- (void)deInitP2pModel;
- (void)delayShowAPPPromp:(id)arg1;
- (void)showAPPPromp:(id)arg1 withState:(int)arg2;
- (void)didUpdateToken:(id)arg1;
- (void)vipStateChanged:(id)arg1;
- (id)getP2PDownloadRecordIDWithVideoID:(id)arg1;
- (void)onDownloadUpdate:(id)arg1;
- (void)onDownloadFailedToRemove:(id)arg1;
- (void)flushTaskWihleP2pReady;
- (void)onRecordsLoaded;
- (void)createP2PDownloadRecordWithInfo:(id)arg1;
- (void)beginTryAddDownLoadSpeedTimeSecond:(double)arg1;
- (void)synOfflineCacheInfoListToAds:(id)arg1 type:(int)arg2;
- (double)getDurationOfTask:(id)arg1;
- (void)setBatteryLowTenPercentTipsInvalid:(_Bool)arg1;
- (_Bool)batteryLowTenPercentTipsInvalid;
- (_Bool)isEmptyTasks;
- (_Bool)isAddCurrentTaskSize:(id)arg1;
- (_Bool)isExistTask:(id)arg1;
- (_Bool)isTaskExistWithUniqueInfo:(id)arg1;
- (_Bool)isPostResumeDownloadNotification;
- (void)resumeDownloadAfterSettingResolution:(id)arg1;
- (void)resumeWillDownloadInfosWithSizeDictionary:(id)arg1;
- (void)addWillDownloadTask:(id)arg1;
- (_Bool)isDelayAddDownloadTaskWithSource:(unsigned long long)arg1;
- (unsigned long long)getTaskNumberWithVideoID:(id)arg1;
- (void)clearFinishedQueue;
- (_Bool)isPostNotificationWithRemoveTask:(id)arg1;
- (_Bool)isFinishedDownloadToPostNotification;
- (_Bool)isPostNotificationWithAddTask:(id)arg1;
- (_Bool)reCalculateTaskSizeWithWithTask:(id)arg1 withDeleteTaskSize:(long long)arg2;
- (void)resumePreviousTasks;
- (_Bool)isShowResolutionSetting:(id)arg1 withFullFlag:(int)arg2 withState:(int)arg3;
- (void)showDownloadTipsAfterSettingResolution:(id)arg1;
- (void)setDelayShowDownloadToast:(int)arg1 withFullFlag:(int)arg2 withState:(int)arg3;
- (void)showBatteryLowToast:(id)arg1;
- (void)delayshowBatteryLowToast:(id)arg1 afterDelay:(long long)arg2;
- (void)setShowResolutionSettingFlag:(_Bool)arg1;
- (_Bool)getShowResolutionSettingFlag;
- (void)updateDownLoadTaskSizeWithVideoSize:(id)arg1 withVideoSize:(unsigned long long)arg2 withLoadState:(_Bool)arg3;
- (void)handleUpdateConfig:(id)arg1;
- (void)updateCurrentViewController:(id)arg1;
- (_Bool)getvInfoEnabled;
- (_Bool)getvKeyEnabled;
- (_Bool)cdnStrategyEnabled;
- (_Bool)ignoreDataVerifingFailure;
- (unsigned long long)retryCountOnGettingData;
- (unsigned long long)retryCountOnGettingInfo;
- (double)httpTimeoutInterval;
- (void)checkBattery;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)batteryLevelDidChange:(id)arg1;
- (void)reachabilityChanged;
- (void)networkCheckerUpdateFinish;
- (void)didDownloadBytes:(unsigned long long)arg1 indicator:(id)arg2;
- (void)didDownloadStateChanged:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)onResumeDownloadTimerFire;
- (void)stopResumeDownloadTimer;
- (void)startResumeDownloadTimer;
- (void)checkWWANBytes;
- (void)stopWWANBytesTimer;
- (void)startWWANBytesTimer;
- (void)delaySendJsonRequest:(id)arg1;
- (void)activatePendingInfoList;
- (void)onSpeedCalc:(id)arg1;
- (void)stopSerizlizeTimer;
- (void)startSerializeTimer;
- (void)autoSerializeToFile;
- (void)flushTaskGroupList;
- (void)delayFlushTaskGroupList;
- (void)updateTaskListWhenNetworkChanged;
- (void)applyNetworkPausedSetting:(_Bool)arg1;
- (void)activateTaskList;
- (float)getProgressPercentWithTask:(id)arg1 vidIndex:(unsigned long long)arg2;
- (unsigned long long)getTotalSizeWithTask:(id)arg1;
- (unsigned long long)getDownloadedSizeWithTask:(id)arg1;
- (void)removeFilesWithTask:(id)arg1;
- (void)clearOpeartionsWithTask:(id)arg1;
- (unsigned long long)getOperationsCountWithTask:(id)arg1;
- (void)onDownloadingingOperation:(id)arg1 withTask:(id)arg2;
- (void)onEndingOperation:(id)arg1 withTask:(id)arg2;
- (void)cancelOperationsWithTask:(id)arg1;
- (id)requestOperationsWithTask:(id)arg1;
- (id)getActiveTasks;
- (unsigned long long)getActiveTaskCount;
- (void)serializeToFile;
- (void)updateTaskToDB:(id)arg1;
- (void)serializeToDB;
- (void)loadFromFile;
- (_Bool)loadFromDB;
- (_Bool)isExistP2PTask;
- (void)readdRecordToP2pDownload;
- (void)didLoadFromFile;
- (void)doAsyncLoadFromFile:(id)arg1;
- (void)asyncLoadFromFile;
- (void)downloadAndPlaySwitch;
- (void)setMaxDownloadCountForP2p:(unsigned long long)arg1;
- (_Bool)initP2PDownload;
- (_Bool)transferDownloadData;
- (void)createDownloadDirectory;
- (void)createDownloadTasks:(id)arg1 fromDB:(_Bool)arg2;
- (id)createDownloadTaskWithInfo:(id)arg1;
- (id)createDownloadTaskWithInfo:(id)arg1 fromDB:(_Bool)arg2;
- (_Bool)startTaskWith3GDownloadSetting:(id)arg1;
- (_Bool)check3GFirstDownloalPermitBeforeStart;
- (_Bool)isTaskExistWithInfo:(id)arg1;
- (void)updateTaskJumpEndTime:(double)arg1 withVideoID:(id)arg2;
- (void)updateTaskPlayedTime:(double)arg1 withVideoID:(id)arg2;
- (void)updateServerPerformanceWithDic:(id)arg1;
- (_Bool)isServerPerformance:(id)arg1 betterThan:(id)arg2;
- (id)getValidDownloadServerPerformanceInfoWithAddress:(id)arg1;
- (unsigned long long)getPreferredIndexWithServersInfo:(id)arg1 referenceIndex:(unsigned long long)arg2;
- (_Bool)isUserChangeResolution;
- (void)userChangedResolution;
- (void)applyConfigResolution:(id)arg1;
- (void)willApplicationTerminate;
- (void)willApplicationEnterBackground;
- (void)willApplicationEnterForeground;
- (void)willBackgroudTaskInvalid;
- (void)restrictMaxDownloadCount:(_Bool)arg1;
- (void)flushDownloadTasksAfterSettingMaxDownloadCount;
- (_Bool)isVipMaxDownloadCountSetting:(unsigned long long)arg1;
- (id)getMaxDownloadCountSettingName;
- (void)setMaxDownloadCountSetting:(unsigned long long)arg1;
- (unsigned long long)getMaxDownloadCountSetting;
- (id)getResolutionSettingName;
- (void)setResolutionSetting:(int)arg1;
- (int)getResolutionSetting;
- (void)set3GDownloadFirstAutoPause:(_Bool)arg1;
- (void)set3GDownloadFirstNotice:(_Bool)arg1;
- (void)set3GDownload:(_Bool)arg1;
- (id)getFilePathsWithVid:(id)arg1 subName:(id)arg2 ext:(id)arg3;
- (id)getFilePathsWithVid:(id)arg1 coverID:(id)arg2 subName:(id)arg3 ext:(id)arg4;
- (unsigned long long)getDownloadResolutionWithVid:(id)arg1 coverID:(id)arg2;
- (id)getFilePathWithVid:(id)arg1 coverID:(id)arg2 subName:(id)arg3 ext:(id)arg4;
- (_Bool)isTaskExsistWithCID:(id)arg1;
- (void)audioPlayerEndInterruption:(id)arg1;
- (void)audioPlayerEndInterruption:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)audioPlayerEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)disableInfiniteBackgroundTask;
- (void)enableInfiniteBackgroundTask;
- (_Bool)restartPlayer;
- (void)onAudioDetecting;
- (void)stopAudioDetectingTimer;
- (void)startAudioDetectingTimer;
- (void)checkScreenBright;
- (unsigned long long)getDownloadFolderSize;
- (unsigned long long)getFinishedTasksTotalSize;
- (_Bool)isReadyForPlayWithMovieID:(id)arg1;
- (_Bool)isReadyForPlayWithUniqueid:(id)arg1;
- (unsigned long long)getUnfinishedTaskCountWithColumnID:(unsigned long long)arg1;
- (unsigned long long)getUnfinishedTaskCountWithMovieid:(id)arg1;
- (unsigned long long)getUnfinishedTaskCount;
- (_Bool)isExistPreCacheTask;
- (id)getPreCacheTaskList;
- (id)getOnTimePreCacheTaskListForTime:(double)arg1;
- (id)getFinishedTaskList;
- (id)getActiviteTaskList;
- (unsigned long long)getTaskCountWithMovieID:(id)arg1;
- (unsigned long long)getTaskCount;
- (id)getGroupWithTaskIndicator:(id)arg1;
- (id)getTasksWithGroupIndicator:(id)arg1;
- (id)getTaskGroupList;
- (id)getTasksWithMovieID:(id)arg1;
- (id)getTaskWithPrecacheKey:(id)arg1;
- (id)getTaskWithMovieID:(id)arg1;
- (id)getTaskWithVideoID:(id)arg1;
- (id)getTaskWithUniqueID:(id)arg1;
- (id)getIndicatorWithUniqueID:(id)arg1;
- (void)tryAcclerateSpeed;
- (long long)accleratedSecond;
- (void)destoryAccelerateTimer;
- (_Bool)hasTaskDownLoading;
- (void)setTryAccelerate:(_Bool)arg1;
- (unsigned long long)resolutionWithSetting:(int)arg1;
- (unsigned long long)defaultResolution;
- (id)cachedJSONDirectory;
- (id)downloadDirectory;
- (id)documentDirectory;
- (id)downloadListFile;
- (_Bool)isRunning;
- (_Bool)isCurrentContainDownloadingTask;
- (_Bool)isP2PModeDownloadingVideo;
- (id)getDownloadingTasks;
- (id)getDownloadingTask;
- (_Bool)isDownloading;
- (_Bool)isDownloadingData;
- (void)resumeDownload;
- (_Bool)shouldInitP2pDownload;
- (void)suspendDownload;
- (void)didBatchRemoveIndicators;
- (void)willBatchRemoveIndicators;
- (void)requestRemoveAllWithDelegate:(id)arg1;
- (unsigned long long)showTaskRemovingQueueCount;
- (void)requestRemoveWithIndicators:(id)arg1 delegate:(id)arg2;
- (void)requestRemoveWithIndicator:(id)arg1;
- (void)requestPauseAll;
- (void)requestPauseWithIndicator:(id)arg1;
- (_Bool)isAllTaskPause;
- (void)requestStartAll;
- (void)requestStartWithIndicator:(id)arg1;
- (void)removeTaskInAsyncQueue:(id)arg1;
- (_Bool)isTaskInAsyncQueueWithMovieID:(id)arg1;
- (_Bool)isTaskInAsyncQueue:(id)arg1;
- (void)asyncAddTaskWithInfo:(id)arg1;
- (unsigned long long)batchStartDownloadWithInfos:(id)arg1 source:(unsigned long long)arg2;
- (int)startDownloadWithInfo:(id)arg1 source:(unsigned long long)arg2;
- (int)startDownloadWithInfo:(id)arg1;
- (void)initializeDownload;
- (void)dealloc;
- (void)cookieForDownloadNotification:(id)arg1;
- (id)init;
- (id)operationQueue;
- (void)handleTryUpdatePlayTimeOperation:(id)arg1 downLoadFinishWithClipIndex:(unsigned long long)arg2 clipFilePath:(id)arg3;
- (void)handleOperation:(id)arg1 downLoadFinishWithClipIndex:(unsigned long long)arg2 clipFilePath:(id)arg3 withTask:(id)arg4;
- (void)onEndingOperation:(id)arg1 downLoadFinishWithClipIndex:(unsigned long long)arg2 clipFilePath:(id)arg3 withTask:(id)arg4;
- (void)downloadAndPlay:(_Bool)arg1;
- (void)updateCurrentPlayTime;
- (_Bool)shouldShowPlayBtnWithHttpLoadTaskInfo:(id)arg1 vid:(id)arg2;
- (_Bool)shouldShowPlayBtnWithP2PLoadTaskInfo:(id)arg1 vid:(id)arg2;
- (void)updateDownLoadTaskCanPlayTimeWithVid:(id)arg1;
- (_Bool)isDownLoadUnfinishAndCanPlayCurrentVideoWithVID:(id)arg1;
- (_Bool)shouldShowPlayBtnCurrentVideoWithVID:(id)arg1;
- (void)launchAppUpdateCanPlayTimeWithTask:(id)arg1;
- (id)getDownloadUnFinishFilePathsWithVid:(id)arg1 subName:(id)arg2 ext:(id)arg3;
- (void)updateCurrentCanPlayTimeDictionaryWithVid:(id)arg1 time:(double)arg2;
- (id)dictionForVideoCanplayTime;
- (double)currentCanPlayTimeWithVid:(id)arg1;
- (void)deleteTaskCanPlayTimeWithVid:(id)arg1;
- (double)timeForShowPlayBtnTargetPoint;
- (void)setCurrentCanPlayTimeDictionary:(id)arg1;
- (id)currentCanPlayTimeDictionary;
- (id)getTaskGroupUniqueID:(id)arg1;
- (void)downloadDidFinishedWithIndicators:(id)arg1;
- (void)downloadDurationTimeCanPlay:(id)arg1;
- (_Bool)shouldShowDownloadAndPlayPush;
- (void)saveNotification:(id)arg1;
- (void)tryToRemoveDownloadAndPlayPushWithVid:(id)arg1;
- (void)deleteDownloadAndPlayPushWithVID:(id)arg1;
- (void)downloadDidFinished:(id)arg1;
- (id)fetchTitleBy:(id)arg1;
- (id)makeFakeKKVideoInfoByQLSDownloadIndicator:(id)arg1;
- (_Bool)isUnTimeScheduled;
- (_Bool)isRunningOnBackgroundApp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

