//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SKReachabilityUtil : NSObject
{
}

+ (id)sharedInstance;
+ (void)load;
+ (_Bool)isReachable;
+ (void)stopNotifier;
+ (void)startNotifier;
- (void)dealloc;
- (void)reachabilityDidChanged:(id)arg1;
- (id)init;

@end
