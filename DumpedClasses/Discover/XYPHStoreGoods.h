//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSArray, NSString, XYPHStoreCountDown;

@interface XYPHStoreGoods : XYRKModel
{
    _Bool _buyable;
    _Bool _soldout;
    _Bool _preview;
    _Bool _isNewArriving;
    float _discountPriceNumber;
    NSString *_image;
    long long _width;
    long long _height;
    NSString *_title;
    NSString *_desc;
    NSString *_content;
    NSString *_price;
    NSString *_discountPrice;
    NSString *_discount;
    NSString *_link;
    NSString *_goodsId;
    NSString *_categoryId;
    NSString *_extraInfo;
    NSString *_recommendTrackType;
    NSArray *_tagIds;
    long long _sortIndex;
    XYPHStoreCountDown *_countdown;
    NSString *_track_id;
    NSString *_cursor_score;
    unsigned long long _stockStaus;
    NSString *_promotionText;
    unsigned long long _promotionStyle;
    NSString *_stockShortage;
    NSString *_vendorIcon;
}

+ (id)countdownJSONTransformer;
+ (id)cursor_scoreJSONTransformer;
+ (id)discountPriceJSONTransformer;
+ (id)priceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *vendorIcon; // @synthesize vendorIcon=_vendorIcon;
@property(retain, nonatomic) NSString *stockShortage; // @synthesize stockShortage=_stockShortage;
@property(nonatomic) _Bool isNewArriving; // @synthesize isNewArriving=_isNewArriving;
@property(nonatomic) unsigned long long promotionStyle; // @synthesize promotionStyle=_promotionStyle;
@property(retain, nonatomic) NSString *promotionText; // @synthesize promotionText=_promotionText;
@property(nonatomic) unsigned long long stockStaus; // @synthesize stockStaus=_stockStaus;
@property(retain, nonatomic) NSString *cursor_score; // @synthesize cursor_score=_cursor_score;
@property(retain, nonatomic) NSString *track_id; // @synthesize track_id=_track_id;
@property(retain, nonatomic) XYPHStoreCountDown *countdown; // @synthesize countdown=_countdown;
@property(nonatomic) long long sortIndex; // @synthesize sortIndex=_sortIndex;
@property(nonatomic) float discountPriceNumber; // @synthesize discountPriceNumber=_discountPriceNumber;
@property(nonatomic) _Bool preview; // @synthesize preview=_preview;
@property(nonatomic) _Bool soldout; // @synthesize soldout=_soldout;
@property(nonatomic) _Bool buyable; // @synthesize buyable=_buyable;
@property(retain, nonatomic) NSArray *tagIds; // @synthesize tagIds=_tagIds;
@property(retain, nonatomic) NSString *recommendTrackType; // @synthesize recommendTrackType=_recommendTrackType;
@property(retain, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSString *goodsId; // @synthesize goodsId=_goodsId;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *discount; // @synthesize discount=_discount;
@property(retain, nonatomic) NSString *discountPrice; // @synthesize discountPrice=_discountPrice;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end
