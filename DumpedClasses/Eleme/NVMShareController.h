//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, NSDictionary, NSString, UILabel, UIView, UIWindow;

@interface NVMShareController : UIViewController
{
    UIViewController *_viewController;
    NSString *_trackerPageName;
    UIWindow *_window;
    UIView *_backgroundView;
    UIView *_shareView;
    UILabel *_titleLabel;
    UIView *_alternativeTitleView;
    NSArray *_shareInfoArray;
    NSDictionary *_extraParams;
}

+ (id)controllerWithParameters:(id)arg1;
+ (id)shareinfosFromInfo:(id)arg1;
+ (void)shareWithInfo:(id)arg1 inController:(id)arg2;
@property(retain, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(retain, nonatomic) NSArray *shareInfoArray; // @synthesize shareInfoArray=_shareInfoArray;
@property(retain, nonatomic) UIView *alternativeTitleView; // @synthesize alternativeTitleView=_alternativeTitleView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(copy, nonatomic) NSString *trackerPageName; // @synthesize trackerPageName=_trackerPageName;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)updateWithTitleView:(id)arg1;
- (void)showInViewController:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)trackWithShareInfo:(id)arg1;
- (void)share:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)hide;
- (void)hideWithAnimate;
- (void)addGestureToBackground;
- (id)buttonWithimageName:(id)arg1 title:(id)arg2 index:(long long)arg3;
- (void)show;
- (void)loadUI;
- (void)viewDidLoad;
- (id)initWithShareInfos:(id)arg1;

@end
