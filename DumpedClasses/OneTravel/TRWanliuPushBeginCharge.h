//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSString<Optional>;

@interface TRWanliuPushBeginCharge : TRBaseModel
{
    NSString<Optional> *_id;
    NSString<Optional> *_phone;
    NSString<Optional> *_recommond_type;
    NSString<Optional> *_recommond_msg;
}

@property(retain, nonatomic) NSString<Optional> *recommond_msg; // @synthesize recommond_msg=_recommond_msg;
@property(retain, nonatomic) NSString<Optional> *recommond_type; // @synthesize recommond_type=_recommond_type;
@property(retain, nonatomic) NSString<Optional> *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString<Optional> *id; // @synthesize id=_id;
- (void).cxx_destruct;

@end

