//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSArray, NSString;

@interface WPShowsPriceModel : GWObject
{
    _Bool _isSelected;
    NSString *_priceID;
    long long _priceType;
    long long _priceStatus;
    NSString *_priceLevel;
    NSString *_priceDisplayName;
    NSString *_basicPriceID;
    long long _price;
    NSString *_priceColor;
    long long _stockNumber;
    long long _ticketNumber;
    long long _ticketPrice;
    long long _suiteTicketLimitType;
    NSString *_suiteTicketLimitTip;
    long long _orderLimitBuyNum;
    NSString *_remark;
    long long _ticketCount;
    long long _basicTicketPrice;
    NSArray *_packages;
    long long _discountAmount;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(nonatomic) long long discountAmount; // @synthesize discountAmount=_discountAmount;
@property(copy, nonatomic) NSArray *packages; // @synthesize packages=_packages;
@property(nonatomic) long long basicTicketPrice; // @synthesize basicTicketPrice=_basicTicketPrice;
@property(nonatomic) long long ticketCount; // @synthesize ticketCount=_ticketCount;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) long long orderLimitBuyNum; // @synthesize orderLimitBuyNum=_orderLimitBuyNum;
@property(copy, nonatomic) NSString *suiteTicketLimitTip; // @synthesize suiteTicketLimitTip=_suiteTicketLimitTip;
@property(nonatomic) long long suiteTicketLimitType; // @synthesize suiteTicketLimitType=_suiteTicketLimitType;
@property(nonatomic) long long ticketPrice; // @synthesize ticketPrice=_ticketPrice;
@property(nonatomic) long long ticketNumber; // @synthesize ticketNumber=_ticketNumber;
@property(nonatomic) long long stockNumber; // @synthesize stockNumber=_stockNumber;
@property(copy, nonatomic) NSString *priceColor; // @synthesize priceColor=_priceColor;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *basicPriceID; // @synthesize basicPriceID=_basicPriceID;
@property(copy, nonatomic) NSString *priceDisplayName; // @synthesize priceDisplayName=_priceDisplayName;
@property(copy, nonatomic) NSString *priceLevel; // @synthesize priceLevel=_priceLevel;
@property(nonatomic) long long priceStatus; // @synthesize priceStatus=_priceStatus;
@property(nonatomic) long long priceType; // @synthesize priceType=_priceType;
@property(copy, nonatomic) NSString *priceID; // @synthesize priceID=_priceID;
- (void).cxx_destruct;

@end

