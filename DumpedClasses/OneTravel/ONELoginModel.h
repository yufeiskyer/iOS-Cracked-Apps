//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface ONELoginModel : JSONModel
{
    NSString<Optional> *_token;
    NSNumber<Optional> *_push_adduser;
    NSString<Optional> *_uid;
    NSString<Optional> *_pid;
}

@property(retain, nonatomic) NSString<Optional> *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString<Optional> *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSNumber<Optional> *push_adduser; // @synthesize push_adduser=_push_adduser;
@property(retain, nonatomic) NSString<Optional> *token; // @synthesize token=_token;
- (void).cxx_destruct;

@end
