//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSMobileSecurityResult.h"

@class MSQrcodeShareInfo, NSArray, NSString;

@interface MSQrcodeQueryRes : MSMobileSecurityResult
{
    NSString *_qrcodeImageUrl;
    NSArray *_qrcodeImageStyleList;
    NSString *_qrcodeTip;
    MSQrcodeShareInfo *_qrcodeShareInfo;
}

+ (Class)qrcodeImageStyleListElementClass;
@property(retain, nonatomic) MSQrcodeShareInfo *qrcodeShareInfo; // @synthesize qrcodeShareInfo=_qrcodeShareInfo;
@property(retain, nonatomic) NSString *qrcodeTip; // @synthesize qrcodeTip=_qrcodeTip;
@property(retain, nonatomic) NSArray *qrcodeImageStyleList; // @synthesize qrcodeImageStyleList=_qrcodeImageStyleList;
@property(retain, nonatomic) NSString *qrcodeImageUrl; // @synthesize qrcodeImageUrl=_qrcodeImageUrl;
- (void).cxx_destruct;

@end
