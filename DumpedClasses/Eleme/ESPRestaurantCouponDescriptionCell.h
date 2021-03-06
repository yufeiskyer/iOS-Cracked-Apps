//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class NSString, NVMSeparatorView, UIImageView, UILabel;

@interface ESPRestaurantCouponDescriptionCell : NVMTableViewCell
{
    NSString *_couponDescription;
    UIImageView *_iconView;
    UILabel *_descriptionLabel;
    NVMSeparatorView *_dash;
}

+ (double)cellHeight;
@property(retain, nonatomic) NVMSeparatorView *dash; // @synthesize dash=_dash;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) NSString *couponDescription; // @synthesize couponDescription=_couponDescription;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

