//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableURLRequest.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSString;

@interface XANRRequest : NSMutableURLRequest <NSURLSessionDelegate>
{
    NSString *_osver;
    NSString *_model;
    long long _type;
    long long _framework;
    NSString *_p1;
    NSString *_p2;
    NSString *_p3;
    NSString *_uid;
    NSString *_vipuid;
    NSString *_appkey;
    NSString *_appversion;
    NSString *_plugin;
}

@property(copy, nonatomic) NSString *plugin; // @synthesize plugin=_plugin;
@property(copy, nonatomic) NSString *appversion; // @synthesize appversion=_appversion;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(copy, nonatomic) NSString *vipuid; // @synthesize vipuid=_vipuid;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *p3; // @synthesize p3=_p3;
@property(copy, nonatomic) NSString *p2; // @synthesize p2=_p2;
@property(copy, nonatomic) NSString *p1; // @synthesize p1=_p1;
- (void).cxx_destruct;
- (void)post:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)compressData:(id)arg1;
- (id)url;
- (id)initWithPlatform:(long long)arg1 uid:(id)arg2 appKey:(id)arg3 appVersion:(id)arg4 vipUid:(id)arg5 plugin:(id)arg6 framework:(long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

