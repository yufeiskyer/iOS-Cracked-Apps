//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QYPlayerJustLookAtHerHeadImgViewDelegate-Protocol.h"
#import "QYProgressBarDelegate-Protocol.h"

@class LOTAnimationView, NSString, QYFadeMaskView, QYPlayerJustLookAtHerHeadImgView, QYPlayerViewController, QYProgressBar, QYStackLayout, QYTouchButton, UIButton, UILabel;
@protocol QYFullPlayControlBottomViewDelegate;

@interface QYFullPlayControlBottomView : UIView <QYPlayerJustLookAtHerHeadImgViewDelegate, QYProgressBarDelegate>
{
    QYPlayerViewController *_playerViewController;
    UIView *_progressBgView;
    QYFadeMaskView *_maskView;
    QYTouchButton *_playBtn;
    UIButton *_nextBtn;
    UILabel *_timeLabel;
    QYStackLayout *_rightLayout;
    QYTouchButton *_greenForwardButton;
    QYTouchButton *_dolbyButton;
    UIButton *_gyroSwitchBtn;
    UIButton *_soundTrackBtn;
    UIButton *_clarityBtn;
    QYTouchButton *_episodeBtn;
    QYTouchButton *_flowLightImg;
    QYPlayerJustLookAtHerHeadImgView *_justLookAtHerBtn;
    UIButton *_sendMessageBtn;
    UIButton *_giftBtn;
    UIButton *_videoCutoutBtn;
    id <QYFullPlayControlBottomViewDelegate> _delegate;
    QYProgressBar *_progressBar;
    LOTAnimationView *_lotAnimatedPlayPauseView;
}

@property(retain, nonatomic) LOTAnimationView *lotAnimatedPlayPauseView; // @synthesize lotAnimatedPlayPauseView=_lotAnimatedPlayPauseView;
@property(retain, nonatomic) UIButton *clarityBtn; // @synthesize clarityBtn=_clarityBtn;
@property(retain, nonatomic) QYProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(nonatomic) __weak id <QYFullPlayControlBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoCut:(id)arg1;
- (_Bool)removeVideoCutoutBtn;
- (void)showVideoCutoutBtn;
- (void)giftBtnLiveClick:(id)arg1;
- (_Bool)hideLiveGiftBtn;
- (void)showLiveGiftBtn;
- (void)sendMessageLiveClick:(id)arg1;
- (_Bool)hideLiveSendMessageBtn;
- (void)showLiveSendMessageBtn;
- (void)setCurSoundTrack:(id)arg1;
- (void)updatePushControlViewsByscreenMode:(int)arg1 isResBtn:(_Bool)arg2 isXiaomiplay:(_Bool)arg3;
- (void)updateTimeLabel:(id)arg1 andRightTime:(id)arg2;
- (void)sendWatchMessage:(id)arg1;
- (void)showWatchCollectionGuideView:(id)arg1;
- (void)showToastWithText:(id)arg1;
- (void)updateBroadcastViewIsShow:(id)arg1;
- (_Bool)isDragEnableForBroadcast:(id)arg1;
- (_Bool)isShowProgressForBroadcast:(id)arg1;
- (void)updateBroadcastView:(id)arg1 rect:(struct CGRect)arg2;
- (void)progressChange:(id)arg1 data:(id)arg2;
- (void)updateJustLookAtHerBtnState:(id)arg1 shouldShow:(_Bool)arg2;
- (void)tapHeadImgView;
- (void)soundTackClicked:(id)arg1;
- (void)episodeClick:(id)arg1;
- (void)clarityClick:(id)arg1;
- (void)updateNextBtnUpdate:(_Bool)arg1;
- (void)nextPlay:(id)arg1;
- (id)getProgressBg;
- (void)_animatePlayPause:(_Bool)arg1;
- (void)_setPlayButtonState:(_Bool)arg1;
- (void)setPlayButtonState:(_Bool)arg1;
- (void)switchPlayOnOff:(id)arg1;
- (void)resetGryoAndForward;
- (void)updateControlViewBtnFrame:(_Bool)arg1 isUpdateAll:(_Bool)arg2 isSupportForward:(_Bool)arg3 isSurportDolby:(_Bool)arg4 isSurportMultipleSoundTrack:(_Bool)arg5 isSupportJustLookAtHer:(_Bool)arg6;
- (void)handleTopView:(int)arg1 sender:(id)arg2;
- (void)setGreenForwardSelect:(_Bool)arg1;
- (void)greenForwardAction:(id)arg1;
- (void)showDolbyTurnOnAnimation;
- (struct CGPoint)getDolbyOrigin;
- (void)showDolbyBreatheAnimation;
- (void)setDolbyEnabled:(_Bool)arg1 withValid:(_Bool)arg2 withSwitchON:(_Bool)arg3 withAnimated:(_Bool)arg4;
- (void)doblytAction:(id)arg1;
- (void)setGyroHidden:(_Bool)arg1;
- (void)gyroSwitchBtnImageUpdate:(_Bool)arg1;
- (void)gyroSwitchBtnClick:(id)arg1;
- (void)updateEpisodeBtnShowOrHidden:(_Bool)arg1;
- (void)updateAllFrames:(struct CGRect)arg1 isBroadcast:(_Bool)arg2 _isMultipleEpisodes:(_Bool)arg3 isSupportDolby:(_Bool)arg4 isSupportForward:(_Bool)arg5 isSupportJustLookAtHer:(_Bool)arg6;
- (void)createMaskView;
- (void)loadUI:(struct CGRect)arg1;
- (struct CGRect)getHorizonBounds;
- (void)setDefaultState;
- (id)initWithFrame:(struct CGRect)arg1 withPlayerViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

