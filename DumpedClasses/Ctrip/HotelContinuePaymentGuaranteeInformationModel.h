//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelContinuePaymentGuaranteeInformationModel : CTBusinessBean
{
    int _flagBitMap;
    int _payGuranteeIntegral;
    NSString *_guranteeRemark;
}

@property(copy, nonatomic) NSString *guranteeRemark; // @synthesize guranteeRemark=_guranteeRemark;
@property(nonatomic) int payGuranteeIntegral; // @synthesize payGuranteeIntegral=_payGuranteeIntegral;
@property(nonatomic) int flagBitMap; // @synthesize flagBitMap=_flagBitMap;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

