//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQConfigUpdater, NSArray;

@interface MQQRedEventManager : NSObject
{
    NSArray *_applicationArray;
    NSArray *_eventArray;
    MQQConfigUpdater *_updater;
    double _lastUpdateTime;
}

+ (id)defaultManager;
@property(nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) MQQConfigUpdater *updater; // @synthesize updater=_updater;
@property(retain, nonatomic) NSArray *eventArray; // @synthesize eventArray=_eventArray;
@property(retain, nonatomic) NSArray *applicationArray; // @synthesize applicationArray=_applicationArray;
- (void)downloadIconIfNeeded:(id)arg1;
- (id)downloadedIconPathForApplication:(id)arg1;
- (void)updateCalendarInfoFromData:(id)arg1;
- (void)updateConfig;
- (void)checkForUpdates;
- (void)dealloc;
- (id)init;

@end

