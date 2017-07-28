//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

@class MSWeakTimer, NSDictionary, UIButton, UIImageView, XYPHSplashRoundProgressView;

@interface XYPHSplashViewController : XYPHBaseViewController
{
    float _times;
    float _total_times;
    NSDictionary *_splashActive;
    UIImageView *_backgroundImage;
    UIButton *_skipButton;
    XYPHSplashRoundProgressView *_progressView;
    MSWeakTimer *_progressTimer;
}

@property(nonatomic) float total_times; // @synthesize total_times=_total_times;
@property(nonatomic) float times; // @synthesize times=_times;
@property(retain, nonatomic) MSWeakTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) XYPHSplashRoundProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) UIImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSDictionary *splashActive; // @synthesize splashActive=_splashActive;
- (void).cxx_destruct;
- (void)skipButtonClicked;
- (void)updateTimer;
- (_Bool)prefersStatusBarHidden;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

@end
