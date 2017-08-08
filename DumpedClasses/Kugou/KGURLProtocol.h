//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

#import "ASIHTTPRequestDelegate.h"
#import "KGURLConnectionDelegate.h"

@class KGURLConnection, NSString;

@interface KGURLProtocol : NSURLProtocol <KGURLConnectionDelegate, ASIHTTPRequestDelegate>
{
    KGURLConnection *_connection;
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
@property(retain, nonatomic) KGURLConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)KGConnection:(id)arg1 didFailWithError:(id)arg2;
- (void)KGConnectionDidFinishLoading:(id)arg1;
- (void)KGConnection:(id)arg1 didReceiveData:(id)arg2;
- (void)KGConnection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)stopLoading;
- (void)startLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
