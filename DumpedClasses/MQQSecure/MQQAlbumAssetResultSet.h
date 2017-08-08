//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MQQAlbumAssetResultSet : NSObject
{
    NSArray *_albumAssetsSets;
    NSString *_filterName;
    long long _numberOfAssets;
    long long _filterType;
}

+ (id)itemWithFilterType:(long long)arg1 albumAssetsSets:(id)arg2 numberOfAssets:(long long)arg3 filterName:(id)arg4;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(nonatomic) long long numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(retain, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(retain, nonatomic) NSArray *albumAssetsSets; // @synthesize albumAssetsSets=_albumAssetsSets;
- (id)initWithFilterType:(long long)arg1 albumAssetsSets:(id)arg2 numberOfAssets:(long long)arg3 filterName:(id)arg4;
- (void)dealloc;

@end
