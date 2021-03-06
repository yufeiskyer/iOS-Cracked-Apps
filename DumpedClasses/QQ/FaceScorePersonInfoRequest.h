//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSBaseRequest.h"

#import "GSRequestProtocol.h"

@class NSString;

@interface FaceScorePersonInfoRequest : GSBaseRequest <GSRequestProtocol>
{
    int _isSuperLove;
    unsigned long long _tinyId;
}

@property(nonatomic) int isSuperLove; // @synthesize isSuperLove=_isSuperLove;
@property(nonatomic) unsigned long long tinyId; // @synthesize tinyId=_tinyId;
- (id)translateHeaderCode:(unsigned int)arg1;
- (id)parseResponseBodyString:(void *)arg1;
- (void *)getRequestBodyString;
- (unsigned int)serviceType;
- (unsigned int)serviceNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

