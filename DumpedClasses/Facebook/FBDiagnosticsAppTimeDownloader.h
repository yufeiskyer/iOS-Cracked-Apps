//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPowerLogsDownloadServiceDelegate-Protocol.h"

@class FBDiagnosticsPerformanceMetricsTimedLogger, FBPowerLogsDownloadService, NSString;

@interface FBDiagnosticsAppTimeDownloader : NSObject <FBPowerLogsDownloadServiceDelegate>
{
    FBPowerLogsDownloadService *_downloadService;
    CDUnknownBlockType _completionBlock;
    FBDiagnosticsPerformanceMetricsTimedLogger *_performanceTimedLogger;
    _Bool _allApps;
}

- (void).cxx_destruct;
- (void)powerLogDownloadService:(id)arg1 didFailWithError:(id)arg2;
- (void)powerLogDownloadService:(id)arg1 didFinishWithSQLLogFiles:(id)arg2;
- (void)_completeAndClearCompletionBlockWithResults:(id)arg1;
- (void)downloadAppTimeIntervalsForAllApps:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

