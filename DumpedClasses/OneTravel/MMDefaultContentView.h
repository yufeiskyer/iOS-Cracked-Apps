//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface MMDefaultContentView : UIView
{
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIImageView *_imageView;
    UIImageView *_bgView;
}

@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configTitle:(id)arg1 detail:(id)arg2 image:(id)arg3;
- (id)initDefaultContentView;

@end

