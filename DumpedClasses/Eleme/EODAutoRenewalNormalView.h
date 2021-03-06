//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class EODVipRenewal, UILabel;

@interface EODAutoRenewalNormalView : UIView
{
    CDUnknownBlockType _closeAction;
    CDUnknownBlockType _renewAction;
    EODVipRenewal *_renewal;
    UILabel *_priceLabel;
    UILabel *_originalPriceLabel;
}

@property(retain, nonatomic) UILabel *originalPriceLabel; // @synthesize originalPriceLabel=_originalPriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) EODVipRenewal *renewal; // @synthesize renewal=_renewal;
@property(copy, nonatomic) CDUnknownBlockType renewAction; // @synthesize renewAction=_renewAction;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
- (void).cxx_destruct;
- (id)labelWithTitle:(id)arg1 textColor:(id)arg2 font:(id)arg3;
- (void)configViews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

