//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SingerListenFansModel : NSObject
{
    NSString *_username;
    long long _playcount;
    long long _rank;
    NSString *_userid;
    NSString *_avatar;
}

+ (id)fansModelWithDic:(id)arg1;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *userid; // @synthesize userid=_userid;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(nonatomic) long long playcount; // @synthesize playcount=_playcount;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;

@end

