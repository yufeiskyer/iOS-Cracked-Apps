//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "RCTInvalidating-Protocol.h"
#import "RCTURLRequestHandler-Protocol.h"

@class NSMapTable, NSString, NSURLSession, RCTBridge;
@protocol OS_dispatch_queue;

@interface RCTHTTPRequestHandler : NSObject <NSURLSessionDataDelegate, RCTURLRequestHandler, RCTInvalidating>
{
    NSMapTable *_delegates;
    NSURLSession *_session;
    RCTBridge *_bridge;
}

+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)cancelRequest:(id)arg1;
- (id)sendRequest:(id)arg1 withDelegate:(id)arg2;
- (_Bool)canHandleRequest:(id)arg1;
- (_Bool)isValid;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

