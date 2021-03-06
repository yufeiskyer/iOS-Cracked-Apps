//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWPageScrollViewController.h"

#import "GWBottomToolBarViewControllerDelegate-Protocol.h"
#import "GWPilotAnimationViewDelegate-Protocol.h"
#import "GWScrollTabViewDelegate-Protocol.h"

@class GWBottomToolBarView, GWBottomToolBarViewController, GWPilotAnimationView, GWScrollTabView, NSString, UIButton;
@protocol GWMoviePageScrollViewControllerDelegate;

@interface GWMoviePageScrollViewController : GWPageScrollViewController <GWPilotAnimationViewDelegate, GWBottomToolBarViewControllerDelegate, GWScrollTabViewDelegate>
{
    double _minScrollHeight;
    _Bool _stickTopViewWhenScrollToTop;
    _Bool _useAnimationForTitleLabel;
    _Bool _scrollViewDragAvailable;
    _Bool _isVisibleViewController;
    GWBottomToolBarView *_bottomBar;
    GWBottomToolBarViewController *_bottomController;
    GWPilotAnimationView *_pilotView;
    GWScrollTabView *_tabView;
    double _aboveContenVerticalInset;
    unsigned long long _floatingViewAttachType;
    double _floatingViewBeginOffsetY;
    double _scrollViewBeginOffsetY;
    UIButton *_singleBackButton;
}

@property(nonatomic) _Bool isVisibleViewController; // @synthesize isVisibleViewController=_isVisibleViewController;
@property(retain, nonatomic) UIButton *singleBackButton; // @synthesize singleBackButton=_singleBackButton;
@property(nonatomic) double scrollViewBeginOffsetY; // @synthesize scrollViewBeginOffsetY=_scrollViewBeginOffsetY;
@property(nonatomic) double floatingViewBeginOffsetY; // @synthesize floatingViewBeginOffsetY=_floatingViewBeginOffsetY;
@property(nonatomic) unsigned long long floatingViewAttachType; // @synthesize floatingViewAttachType=_floatingViewAttachType;
@property(nonatomic) _Bool scrollViewDragAvailable; // @synthesize scrollViewDragAvailable=_scrollViewDragAvailable;
@property(nonatomic) _Bool useAnimationForTitleLabel; // @synthesize useAnimationForTitleLabel=_useAnimationForTitleLabel;
@property(nonatomic) _Bool stickTopViewWhenScrollToTop; // @synthesize stickTopViewWhenScrollToTop=_stickTopViewWhenScrollToTop;
@property(nonatomic) double aboveContenVerticalInset; // @synthesize aboveContenVerticalInset=_aboveContenVerticalInset;
@property(readonly, nonatomic) GWScrollTabView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) GWPilotAnimationView *pilotView; // @synthesize pilotView=_pilotView;
@property(retain, nonatomic) GWBottomToolBarViewController *bottomController; // @synthesize bottomController=_bottomController;
@property(retain, nonatomic) GWBottomToolBarView *bottomBar; // @synthesize bottomBar=_bottomBar;
- (void).cxx_destruct;
- (id)scollTab:(id)arg1 flagViewWithIndex:(unsigned long long)arg2;
- (id)scollTab:(id)arg1 subTitleWithIndex:(unsigned long long)arg2;
- (id)scollTab:(id)arg1 titleWithIndex:(unsigned long long)arg2;
- (unsigned long long)scollTabNumberOfTitle:(id)arg1;
- (void)onTabClicked:(long long)arg1;
- (_Bool)blockTabClicked:(long long)arg1;
- (void)onBackBtnClicked;
- (id)floatingView;
- (double)floatingViewOffset:(id)arg1;
- (void)pageViewDidEndScrollAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1 scrollView:(id)arg2 reviseOffset:(struct CGPoint)arg3;
- (void)scrollViewDidEndScroll:(id)arg1 scrollView:(id)arg2 reviseOffset:(struct CGPoint)arg3;
- (void)scrollViewDidBeginDragging:(id)arg1 scrollView:(id)arg2 reviseOffset:(struct CGPoint)arg3;
- (void)attachTopViewToController:(id)arg1;
- (void)controller:(id)arg1 attachTopViewToController:(id)arg2;
- (void)layoutFloatingViewWithOffset:(struct CGPoint)arg1;
- (double)minScrollHeight;
- (void)controllerWillCreate:(id)arg1;
- (void)setFocusIndex:(unsigned long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)showTabWithIndex:(long long)arg1 withAnimate:(_Bool)arg2;
- (void)adjTabBarButtonInterval;
- (void)changeStatusBarColorIfNeed;
- (void)setGWStatusBarDefaultIfNeed;
- (void)setGWStatusBarLightContentIfNeed;
- (void)resetScrollView:(id)arg1;
- (double)floatingViewOffset;
- (void)calcFloatingType;
- (unsigned long long)currentFloatingViewAttachType;
- (double)naviHeight;
- (void)reloadData;
- (void)attachFloatingIfCan;
- (void)setNaviBarShow:(_Bool)arg1 withAnimation:(_Bool)arg2;
- (void)configScrollView:(id)arg1;
- (struct UIEdgeInsets)refreshViewEdge;
- (struct UIEdgeInsets)contentInsetWithScrollView:(id)arg1;
- (void)focusOnTop;
- (void)createBottomBar;
- (void)setTitle:(id)arg1;
- (void)clearViewController;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <GWMoviePageScrollViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

