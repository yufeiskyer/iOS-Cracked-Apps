//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTVAudioRotatePlayer;

@protocol KTVAudioRotatePlayerDelegate <NSObject>
- (void)rotatePlayer:(KTVAudioRotatePlayer *)arg1 updatePlayTimePoint:(double)arg2;
- (void)rotatePlayer:(KTVAudioRotatePlayer *)arg1 statusChange:(int)arg2 subState:(int)arg3;
@end
