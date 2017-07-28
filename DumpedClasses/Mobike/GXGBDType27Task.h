//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GXGBDTypeTask.h"

#import "GXGBDTaskItemManagerDelegate.h"

@class NSString;

@interface GXGBDType27Task : GXGBDTypeTask <GXGBDTaskItemManagerDelegate>
{
    unsigned long long _lastIndex;
}

+ (_Bool)isReportEnable;
+ (void)gtp_destroy;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long lastIndex; // @synthesize lastIndex=_lastIndex;
- (void)taskItemManagerTaskFinishWithSuccess:(_Bool)arg1;
- (_Bool)isStopTask;
- (_Bool)isContinueTimer;
- (id)buildPostBodyDataForUserInfo:(id)arg1;
- (void)hwScanDidSuccessNotification:(id)arg1;
- (void)startTaskWithBuildBodyStrCallback:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)destroyPrivateObjects;
- (void)gtp_start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
