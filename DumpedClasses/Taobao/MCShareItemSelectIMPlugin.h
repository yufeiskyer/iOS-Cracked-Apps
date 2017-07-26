//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCShareItemSelectPlugin.h"

@class NSString;

@interface MCShareItemSelectIMPlugin : MCShareItemSelectPlugin
{
    int _serviceType;
    NSString *_sessionId;
    id <TBIMSessionServiceAdapter> _sessionSrv;
    id <TBIMMessageServiceAdapter> _messageSvr;
}

@property(nonatomic) __weak id <TBIMMessageServiceAdapter> messageSvr; // @synthesize messageSvr=_messageSvr;
@property(nonatomic) __weak id <TBIMSessionServiceAdapter> sessionSrv; // @synthesize sessionSrv=_sessionSrv;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (void)shareItemSelectComponent:(id)arg1 commitShareItems:(id)arg2 attrs:(id)arg3;
- (void)shareItemSelectComponent:(id)arg1 commitShareItems:(id)arg2;
- (id)initWitSesssionID:(id)arg1 serviceType:(int)arg2;

@end
