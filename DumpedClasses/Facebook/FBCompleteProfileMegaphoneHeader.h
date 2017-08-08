//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class FBCompleteProfileMegaphoneConfigurator, NSNumber, UILabel, UIProgressView, UIView;

@interface FBCompleteProfileMegaphoneHeader : UITableViewHeaderFooterView
{
    UIProgressView *_progressBarView;
    UILabel *_completeTextView;
    FBCompleteProfileMegaphoneConfigurator *_configurator;
    UIView *_thumbnailView;
    UILabel *_promptView;
    NSNumber *_completePercentage;
}

@property(nonatomic) NSNumber *completePercentage; // @synthesize completePercentage=_completePercentage;
@property(retain, nonatomic) UILabel *promptView; // @synthesize promptView=_promptView;
@property(retain, nonatomic) UIView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (void).cxx_destruct;
- (void)_layoutWithoutThumbnail;
- (void)_layoutWithThumbnail;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 configurator:(id)arg2;

@end
