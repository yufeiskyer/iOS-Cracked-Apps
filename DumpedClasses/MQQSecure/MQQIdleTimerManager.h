//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MQQIdleTimerManager : NSObject
{
    NSMutableDictionary *_objectListDictionary;
}

+ (id)shareManager;
- (void)setIdleTimerDisabled:(_Bool)arg1 withObject:(id)arg2;
@property(readonly, nonatomic) _Bool idleTimerDisabled;
- (void)dealloc;
- (id)init;

@end

