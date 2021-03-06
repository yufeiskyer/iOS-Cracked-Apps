//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KTVImagePlayerViewDelegate.h"

@class KGThemeImageView, KTVCompetitionItem, KTVCompetitionRecordBar, KTVImagePlayerView, NSArray, NSString, UIButton;

@interface KTVCompetitionBanner : UIView <KTVImagePlayerViewDelegate>
{
    id <KTVCompetitionBannerDelegate> _delegate;
    KTVImagePlayerView *_imagePlayerView;
    KTVCompetitionRecordBar *_bottomBar;
    KTVCompetitionItem *_c;
    NSArray *_imageInfo;
    UIButton *_ruleButton;
    KGThemeImageView *_arrowImageView;
}

@property(retain, nonatomic) KGThemeImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIButton *ruleButton; // @synthesize ruleButton=_ruleButton;
@property(retain, nonatomic) NSArray *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(retain, nonatomic) KTVCompetitionItem *c; // @synthesize c=_c;
@property(retain, nonatomic) KTVCompetitionRecordBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) KTVImagePlayerView *imagePlayerView; // @synthesize imagePlayerView=_imagePlayerView;
@property(nonatomic) id <KTVCompetitionBannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imagePlayerView:(id)arg1 didTapAtIndex:(long long)arg2;
- (void)imagePlayerView:(id)arg1 loadImageForImageView:(id)arg2 index:(long long)arg3;
- (long long)numberOfItems;
- (void)handleTapGesture:(id)arg1;
- (void)ruleAction;
- (void)addBottom;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

