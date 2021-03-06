//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString, ResponseHead;

@interface HotelOpRedResponse : CTBusinessBean
{
    _Bool _isNewSession;
    int _result;
    ResponseHead *_head;
    NSString *_resultMessage;
    NSString *_groupId;
    NSMutableArray *_opInfo;
    long long _sessionId;
    NSString *_threadId;
    long long _featureFlag;
}

@property(nonatomic) long long featureFlag; // @synthesize featureFlag=_featureFlag;
@property(copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(nonatomic) long long sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSMutableArray *opInfo; // @synthesize opInfo=_opInfo;
@property(nonatomic) _Bool isNewSession; // @synthesize isNewSession=_isNewSession;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int result; // @synthesize result=_result;
@property(retain, nonatomic) ResponseHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

