//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class ESPHomeActivity, ESPHomeActivityView, ESPHomeHeaderPinView, ESPHomeHeaderViewModel, ESPHomeHotSearchView, ESPHomeOrderDeliveringStatus, ESPHomeOrderView, ESPHomeSearchView, ESPHomeTitleView, ESPHomeWeatherView, ESPHomeWelcomeView, ESPWeatherInfo, MASConstraint, UIImageView, UIView;

@interface ESPHomeNavigationHeaderView : UICollectionReusableView
{
    _Bool _needShowWelcome;
    _Bool _needTrack;
    ESPHomeHeaderViewModel *_headerViewModel;
    ESPHomeHotSearchView *_hotSearchView;
    UIView *_topContainerView;
    UIImageView *_containerView;
    UIView *_containBackgroundView;
    ESPHomeTitleView *_titleView;
    ESPHomeSearchView *_searchView;
    ESPHomeWelcomeView *_welcomeView;
    UIView *_sceneContainerView;
    UIImageView *_defaultSceneView;
    ESPHomeWeatherView *_weatherView;
    ESPHomeActivityView *_activityView;
    ESPHomeOrderView *_orderView;
    ESPHomeHeaderPinView *_pinHeaderView;
    ESPWeatherInfo *_weatherInfo;
    ESPHomeActivity *_activityInfo;
    ESPHomeOrderDeliveringStatus *_orderStatus;
    MASConstraint *_pinTopConstraint;
}

+ (double)heightForViewModel:(id)arg1;
@property(nonatomic) _Bool needTrack; // @synthesize needTrack=_needTrack;
@property(retain, nonatomic) MASConstraint *pinTopConstraint; // @synthesize pinTopConstraint=_pinTopConstraint;
@property(nonatomic) _Bool needShowWelcome; // @synthesize needShowWelcome=_needShowWelcome;
@property(retain, nonatomic) ESPHomeOrderDeliveringStatus *orderStatus; // @synthesize orderStatus=_orderStatus;
@property(retain, nonatomic) ESPHomeActivity *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(retain, nonatomic) ESPWeatherInfo *weatherInfo; // @synthesize weatherInfo=_weatherInfo;
@property(retain, nonatomic) ESPHomeHeaderPinView *pinHeaderView; // @synthesize pinHeaderView=_pinHeaderView;
@property(retain, nonatomic) ESPHomeOrderView *orderView; // @synthesize orderView=_orderView;
@property(retain, nonatomic) ESPHomeActivityView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) ESPHomeWeatherView *weatherView; // @synthesize weatherView=_weatherView;
@property(retain, nonatomic) UIImageView *defaultSceneView; // @synthesize defaultSceneView=_defaultSceneView;
@property(retain, nonatomic) UIView *sceneContainerView; // @synthesize sceneContainerView=_sceneContainerView;
@property(retain, nonatomic) ESPHomeWelcomeView *welcomeView; // @synthesize welcomeView=_welcomeView;
@property(retain, nonatomic) ESPHomeSearchView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) ESPHomeTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *containBackgroundView; // @synthesize containBackgroundView=_containBackgroundView;
@property(retain, nonatomic) UIImageView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *topContainerView; // @synthesize topContainerView=_topContainerView;
@property(retain, nonatomic) ESPHomeHotSearchView *hotSearchView; // @synthesize hotSearchView=_hotSearchView;
@property(retain, nonatomic) ESPHomeHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (id)themeImageForTransition;
- (id)hotSearchViewForTransition;
- (id)currentSearchBarViewForTransition;
- (id)topContainerViewForTransition;
- (id)themeImage;
- (double)offsetForChangeAlpha;
- (_Bool)showActivity;
- (void)showLocationFailView;
- (void)showNetWorkErrorView;
- (void)setupOrderView;
- (void)setupActivityView;
- (void)setupWeatherView;
- (void)hideOrderView;
- (void)updateSceneWithOrder:(id)arg1;
- (void)updateSceneWithWeather:(id)arg1 activity:(id)arg2 needRefresh:(_Bool)arg3;
- (void)loadDefaultSceneView;
- (void)updateWithHomeHotSearches:(id)arg1;
- (void)trackHomeHotSearch;
- (void)updateWithOffset:(double)arg1;
- (void)updateWithWishesInfo:(id)arg1;
- (void)setupHotSearchView;
- (void)updateWithNoWelcome;
- (void)updateWithWelcome;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

