//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QRCacheManager : NSObject
{
}

+ (id)requestConfigureMap;
+ (id)sharedInstance;
- (id)identityForRequest:(id)arg1 option:(id)arg2;
- (id)cacheOptionForRequest:(id)arg1;
- (id)keyForRequest:(id)arg1;
- (_Bool)writeCache:(id)arg1 forKey:(id)arg2;
- (_Bool)writeCache:(id)arg1 forRequest:(id)arg2;
- (id)cacheForKey:(id)arg1;

@end

