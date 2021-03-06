//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYAdView.h"

@class UIControl, UIImageView, UIView;
@protocol QYAdViewDelegate;

@interface QYClarityAdView : QYAdView
{
    UIControl *_adContentView;
    UIView *_adsLogoView;
    UIImageView *_adImageView;
    id <QYAdViewDelegate> _delegate;
}

@property(nonatomic) __weak id <QYAdViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) UIView *adsLogoView; // @synthesize adsLogoView=_adsLogoView;
@property(retain, nonatomic) UIControl *adContentView; // @synthesize adContentView=_adContentView;
- (void).cxx_destruct;
- (void)closeSelf;
- (void)setAdModel:(id)arg1;
- (void)reloadAd;
- (id)getAvailablebleClarityAdView;
- (id)getAdModel;
- (void)adClick:(id)arg1;
- (void)parseModel;
- (void)layoutSubviews;
- (id)init;

@end

