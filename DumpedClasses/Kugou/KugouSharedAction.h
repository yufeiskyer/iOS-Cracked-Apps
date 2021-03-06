//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserActionRecord.h"

@class NSString;

@interface KugouSharedAction : UserActionRecord
{
    _Bool isSuccess;
    NSString *fromSource;
    NSString *shareType;
    unsigned long long errorCode;
    NSString *shareWhat;
    NSString *mediaHash;
    NSString *singerName;
    NSString *mediaName;
    NSString *CDTitle;
    NSString *CDTitleID;
    unsigned long long mediaType;
    unsigned long long fileQuality;
    NSString *_sourceSongHash;
}

@property(copy, nonatomic) NSString *sourceSongHash; // @synthesize sourceSongHash=_sourceSongHash;
@property(nonatomic) unsigned long long fileQuality; // @synthesize fileQuality;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType;
@property(copy, nonatomic) NSString *CDTitleID; // @synthesize CDTitleID;
@property(copy, nonatomic) NSString *CDTitle; // @synthesize CDTitle;
@property(copy, nonatomic) NSString *mediaName; // @synthesize mediaName;
@property(copy, nonatomic) NSString *singerName; // @synthesize singerName;
@property(copy, nonatomic) NSString *mediaHash; // @synthesize mediaHash;
@property(copy, nonatomic) NSString *shareWhat; // @synthesize shareWhat;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess;
@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode;
@property(copy, nonatomic) NSString *shareType; // @synthesize shareType;
@property(copy, nonatomic) NSString *fromSource; // @synthesize fromSource;
- (void)dealloc;
- (void)coding;

@end

