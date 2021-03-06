//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock;

@interface QQLeakMonitor : NSObject
{
    NSRecursiveLock *_lock;
    NSMutableDictionary *_localConfig;
    _Bool _needCloseCheckNextTime;
    double _totalSamplingInterval;
    double _lastSamplingRecordTime;
    unsigned long long _bgCheckedLeakNums;
}

+ (id)getInstance;
- (id)leakLogPath;
- (double)getQQLeakMemory;
- (id)QQLeakPath;
- (_Bool)isARM64CPU;
- (_Bool)isCheckInVersion;
- (void)setQQLeakSamplingEnableState:(_Bool)arg1;
- (_Bool)getQQLeakSamplingEnableState;
- (int)getQQLeakConfigVersion;
- (void)setQQLeakConfigVersion:(int)arg1;
- (void)setQQLeakEnableState:(_Bool)arg1;
- (_Bool)getQQLeakEnableState;
- (void)saveLocalConfig;
- (void)initLocalConfig;
- (id)getTopViewController;
- (void)showStopLoggingTips;
- (void)showMemoryWarningTips;
- (void)showStartLoggingTips;
- (void)showCheckingTips;
- (void)stopStackLogging;
- (void)startStackLogging;
- (id)getRdmUUid;
- (void)startLeakCheck:(CDUnknownBlockType)arg1;
- (void)appDidReceiveMemoryWarning;
- (void)leakCheckInbackground;
- (void)appEnterBackground;
- (void)appEnterForground;
- (void)startQQLeakSampling:(int)arg1;
- (void)appStart;
- (void)dealloc;
- (id)init;

@end

