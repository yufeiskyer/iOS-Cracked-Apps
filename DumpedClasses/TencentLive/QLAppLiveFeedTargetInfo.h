//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QLAppLiveFeedTargetInfo : NSObject
{
    int _status;
    int _checktype;
    long long _orgcommentnum;
    long long _commentnum;
    long long _city;
}

+ (id)targetInfoWith:(id)arg1;
@property(nonatomic) int checktype; // @synthesize checktype=_checktype;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) long long city; // @synthesize city=_city;
@property(nonatomic) long long commentnum; // @synthesize commentnum=_commentnum;
@property(nonatomic) long long orgcommentnum; // @synthesize orgcommentnum=_orgcommentnum;

@end

