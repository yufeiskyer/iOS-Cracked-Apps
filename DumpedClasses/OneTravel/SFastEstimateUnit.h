//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSCarEstimateUnit.h"

@interface SFastEstimateUnit : SSCarEstimateUnit
{
    _Bool _hasDefaultHighlighted;
    _Bool _isInCarpoolPackageGuideDuration;
}

@property(nonatomic) _Bool isInCarpoolPackageGuideDuration; // @synthesize isInCarpoolPackageGuideDuration=_isInCarpoolPackageGuideDuration;
@property(nonatomic) _Bool hasDefaultHighlighted; // @synthesize hasDefaultHighlighted=_hasDefaultHighlighted;
- (id)estimatePrice;
- (void)showSelectCarTypeTips;
- (void)changeCarpoolPackageGuideEstimateStatus;
- (void)requestEstimateDidFinish:(_Bool)arg1;
- (id)dataSource;
- (void)showLoginView:(CDUnknownBlockType)arg1;
- (void)doLoginAction;
- (id)containerView;
- (_Bool)checkNeedLogin;
- (void)showEstimateDetailPage;
- (void)gotoEstimateDetailPage;
- (id)getPriceTagsDesc:(id)arg1;
- (void)triggerEvent:(unsigned long long)arg1 params:(id)arg2;
- (id)formCellModelForRegion;
- (id)formCellModelForNormal;

@end
