//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBStorylineVideoActionView;

@protocol FBStorylineVideoActionViewDelegate <NSObject>
- (void)storylineVideoActionView:(FBStorylineVideoActionView *)arg1 playButtonTapped:(_Bool)arg2;
- (void)storylineVideoActionView:(FBStorylineVideoActionView *)arg1 scrubToProgress:(float)arg2;
- (void)storylineVideoActionViewScrubDidEnd:(FBStorylineVideoActionView *)arg1;
- (void)storylineVideoActionViewScrubDidStart:(FBStorylineVideoActionView *)arg1;
@end

