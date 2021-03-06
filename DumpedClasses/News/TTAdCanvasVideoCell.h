//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTAdCanvasBaseCell.h"

#import "TTADMovieViewDelegate.h"

@class ExploreArticleMovieViewDelegate, NSDate, NSString, SSThemedButton, TTADMovieView, TTAdCanvasLayoutModel, TTImageView;

@interface TTAdCanvasVideoCell : TTAdCanvasBaseCell <TTADMovieViewDelegate>
{
    _Bool _pauseByEvent;
    TTADMovieView *_videoView;
    ExploreArticleMovieViewDelegate *_movieViewDelegate;
    TTImageView *_logoView;
    SSThemedButton *_playButton;
    NSDate *_startDate;
    TTAdCanvasLayoutModel *_model;
}

+ (double)heightForModel:(id)arg1 inWidth:(double)arg2;
@property(retain, nonatomic) TTAdCanvasLayoutModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool pauseByEvent; // @synthesize pauseByEvent=_pauseByEvent;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) SSThemedButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) TTImageView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) __weak ExploreArticleMovieViewDelegate *movieViewDelegate; // @synthesize movieViewDelegate=_movieViewDelegate;
@property(retain, nonatomic) TTADMovieView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)trackMute;
- (void)trackBreak;
- (void)trackPause;
- (void)trackResume;
- (void)trackFinish;
- (void)trackStart;
- (void)trackShow;
- (void)playButtonClicked:(id)arg1;
- (void)muteButtonClicked:(id)arg1;
- (void)removeVideoNotification;
- (void)videoFinishNotification:(id)arg1;
- (void)registerVideoNotification;
- (void)setMuteButton;
- (void)retryButtonClickedStatus:(long long)arg1;
- (void)replayButtonClicked;
- (void)breakVideo;
- (void)startVideo;
- (void)stopRemainMedias;
- (void)cellMediaPlay:(id)arg1;
- (void)cellBreakByEvent;
- (void)cellPauseByEvent;
- (void)cellResumeByEvent;
- (void)canvasCell:(id)arg1 showStatus:(unsigned long long)arg2 itemIndex:(long long)arg3;
- (void)refreshWithModel:(id)arg1;
- (void)setSubViews;
- (id)initWithWidth:(double)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

