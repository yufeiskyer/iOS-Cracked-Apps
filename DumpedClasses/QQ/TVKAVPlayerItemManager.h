//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TVKAVPlayerItemManager : NSObject
{
    NSMutableArray *_playerItemArr;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableArray *playerItemArr; // @synthesize playerItemArr=_playerItemArr;
- (void).cxx_destruct;
- (void)adjustAllPlayerItemToReleaseModel:(long long)arg1;
- (void)processInBackground;
- (void)enterBackground:(id)arg1;
- (void)adjustItemArr;
- (void)addPlayerItem:(id)arg1 cacheItem:(id)arg2;
- (void)dealloc;
- (id)init;

@end

