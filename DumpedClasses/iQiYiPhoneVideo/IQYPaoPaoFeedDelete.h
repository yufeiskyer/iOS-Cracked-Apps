//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataLoadManager.h"

@class NSString;

@interface IQYPaoPaoFeedDelete : DataLoadManager
{
    NSString *_authcookie;
    NSString *_business_type;
    NSString *_wallId;
    NSString *_feedId;
}

@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) NSString *wallId; // @synthesize wallId=_wallId;
@property(retain, nonatomic) NSString *business_type; // @synthesize business_type=_business_type;
@property(retain, nonatomic) NSString *authcookie; // @synthesize authcookie=_authcookie;
- (void).cxx_destruct;
- (_Bool)parse:(id)arg1;
- (id)urlStl;
- (id)init;

@end

