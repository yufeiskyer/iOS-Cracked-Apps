//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FBStorylineRendererVideoAssetsLoader : NSObject
{
    NSMutableDictionary *_assetsForVideoURL;
}

+ (id)sharedVideoAssetsLoader;
- (void).cxx_destruct;
- (void)dealloc;
- (id)assertForVideoURL:(id)arg1;
- (void)tearDown;
- (void)addVideoAsset:(id)arg1 assetLocation:(id)arg2;
- (void)setupWithVideoAssets:(id)arg1;
- (id)init;

@end
