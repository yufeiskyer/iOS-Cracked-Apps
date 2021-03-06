//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, QYPlayerPreloadingController, QYPlayerViewController, SPActivityIndicatorView, UIImageView, UILabel;

@interface QYProgressAlertView : UIView
{
    double _viewWidth;
    double _viewHeight;
    double _currentPlayingTime;
    double _playerDuration;
    NSString *_l_iconName;
    NSString *_r_iconName;
    _Bool _isPushed;
    _Bool _isAdd;
    _Bool _needImg;
    int _type;
    UIImageView *_iconView;
    UILabel *_totalLabel;
    UILabel *_timeLabel;
    UIView *_timeView;
    UIImageView *_preImgView;
    UIView *_preImgViewBack;
    SPActivityIndicatorView *_loadingActView;
    QYPlayerViewController *_playerViewController;
    QYPlayerPreloadingController *_preloadingController;
}

@property(nonatomic) __weak QYPlayerPreloadingController *preloadingController; // @synthesize preloadingController=_preloadingController;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool needImg; // @synthesize needImg=_needImg;
@property(nonatomic) _Bool isAdd; // @synthesize isAdd=_isAdd;
@property(nonatomic) __weak QYPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(retain, nonatomic) SPActivityIndicatorView *loadingActView; // @synthesize loadingActView=_loadingActView;
@property(retain, nonatomic) UIView *preImgViewBack; // @synthesize preImgViewBack=_preImgViewBack;
@property(retain, nonatomic) UIImageView *preImgView; // @synthesize preImgView=_preImgView;
@property(retain, nonatomic) UIView *timeView; // @synthesize timeView=_timeView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *totalLabel; // @synthesize totalLabel=_totalLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) double playerDuration; // @synthesize playerDuration=_playerDuration;
@property(nonatomic) double currentPlayingTime; // @synthesize currentPlayingTime=_currentPlayingTime;
- (void).cxx_destruct;
- (void)updateAlertViewImgWithIsAdd:(_Bool)arg1;
- (void)updateTextWithCurPlayTime:(double)arg1;
- (void)updateTextWithCurPlayTime:(double)arg1 type:(_Bool)arg2;
- (void)updateText:(double)arg1 type:(_Bool)arg2;
- (void)setPreloadingImg:(id)arg1;
- (void)configSubviewsNoImg;
- (void)configSubviewsWithImg;
- (void)configSubviewsNeedImg:(_Bool)arg1;
- (id)initWithFrameAndData:(struct CGRect)arg1 curTime:(double)arg2 duration:(double)arg3 currentMode:(int)arg4;
- (id)initWithFrameAndData:(struct CGRect)arg1 curTime:(double)arg2 duration:(double)arg3 currentMode:(int)arg4 isPushed:(_Bool)arg5;
- (id)initWithFrameAndData:(struct CGRect)arg1 curTime:(double)arg2 duration:(double)arg3 currentMode:(int)arg4 andPlayerViewController:(id)arg5;

@end

