//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDateFormatter, NSString;

@interface ADYCard : NSObject
{
    NSDate *_generationtime;
    NSString *_number;
    NSString *_holderName;
    NSString *_cvc;
    NSString *_expiryMonth;
    NSString *_expiryYear;
}

+ (id)decode:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSString *expiryYear; // @synthesize expiryYear=_expiryYear;
@property(retain, nonatomic) NSString *expiryMonth; // @synthesize expiryMonth=_expiryMonth;
@property(retain, nonatomic) NSString *cvc; // @synthesize cvc=_cvc;
@property(retain, nonatomic) NSString *holderName; // @synthesize holderName=_holderName;
@property(retain, nonatomic) NSString *number; // @synthesize number=_number;
@property(retain, nonatomic) NSDate *generationtime; // @synthesize generationtime=_generationtime;
- (void).cxx_destruct;
@property(readonly) NSDateFormatter *dateFormatter;
- (id)encode;

@end
