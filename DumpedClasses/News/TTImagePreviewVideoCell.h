//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTImagePreviewBaseCell.h"

@class TTImagePreviewVideoManager, TTImagePreviewVideoView, UIButton;

@interface TTImagePreviewVideoCell : TTImagePreviewBaseCell
{
    TTImagePreviewVideoManager *_videoManager;
    TTImagePreviewVideoView *_videoView;
    UIButton *_playButton;
}

@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) TTImagePreviewVideoView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) __weak TTImagePreviewVideoManager *videoManager; // @synthesize videoManager=_videoManager;
- (void).cxx_destruct;
- (void)playButtonClick;
- (void)configPlayButton;
- (void)configMoviePlayer;
- (void)willDisplay;
- (void)configVideoView;

@end

