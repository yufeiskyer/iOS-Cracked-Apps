//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMRcmdUserRejectRequest : NMBaseRequest
{
    NSString *_rcmdUserId;
    NSString *_eventId;
}

@property(readonly, copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(readonly, copy, nonatomic) NSString *rcmdUserId; // @synthesize rcmdUserId=_rcmdUserId;
- (void).cxx_destruct;
- (id)initWithRcmdUser:(id)arg1 eventId:(id)arg2;

@end

