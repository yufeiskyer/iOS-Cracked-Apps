//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBStorylineNarrativeEngine, NSArray, NSDictionary, NSString;

@protocol FBStorylineNarrativeEngineDelegate <NSObject>
- (void)narrativeEngine:(FBStorylineNarrativeEngine *)arg1 didReceiveAnimationDescriptor:(NSArray *)arg2 animationDescriptorID:(NSString *)arg3 isFirstInBatch:(_Bool)arg4 isLastInBatch:(_Bool)arg5;
- (void)narrativeEngine:(FBStorylineNarrativeEngine *)arg1 didReceiveShaderMap:(NSDictionary *)arg2;
- (void)narrativeEngine:(FBStorylineNarrativeEngine *)arg1 didReceiveAnimationDuration:(float)arg2;
- (void)narrativeEngine:(FBStorylineNarrativeEngine *)arg1 didReceiveAssetMetadata:(NSArray *)arg2;
@end

