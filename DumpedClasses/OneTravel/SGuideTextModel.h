//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface SGuideTextModel : JSONModel
{
    NSString<Optional> *_title;
    NSString<Optional> *_fee_info;
    NSString<Optional> *_eta_info;
    NSString<Optional> *_text;
    NSString<Optional> *_text_new;
    NSString<Optional> *_address;
    NSString<Optional> *_cancel_button_title;
    NSString<Optional> *_confirm_button_title;
}

@property(copy, nonatomic) NSString<Optional> *confirm_button_title; // @synthesize confirm_button_title=_confirm_button_title;
@property(copy, nonatomic) NSString<Optional> *cancel_button_title; // @synthesize cancel_button_title=_cancel_button_title;
@property(copy, nonatomic) NSString<Optional> *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString<Optional> *text_new; // @synthesize text_new=_text_new;
@property(copy, nonatomic) NSString<Optional> *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString<Optional> *eta_info; // @synthesize eta_info=_eta_info;
@property(copy, nonatomic) NSString<Optional> *fee_info; // @synthesize fee_info=_fee_info;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

