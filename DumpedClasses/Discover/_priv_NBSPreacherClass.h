//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSURL;

@interface _priv_NBSPreacherClass : NSObject <NSCopying>
{
    NSURL *_redirectURL;
}

@property(readonly) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
- (void).cxx_destruct;
- (void)nbs_performRedirect;
- (void)nbs_updateUploadProgress;
- (unsigned long long)totalBytesSent;
- (void)nbs_updateDownloadProgress;
- (unsigned long long)totalBytesRead;
- (void)nbs_passOnReceivedData:(id)arg1;
- (void)nbs_cancel;
- (void)nbs_failWithError:(id)arg1;
- (void)nbs_requestFinished;
- (void)nbs_requestReceivedResponseHeaders:(id)arg1;
- (void)nbs_startRequest;
- (void)nbs_buildRequestHeaders;
- (id)postBodyReadStream;
- (id)HTTPBodyStream;
- (id)requestMethod;
- (id)HTTPMethod;
- (id)requestHeaders;
- (id)allHTTPHeaderFields;
- (id)postBody;
- (id)HTTPBody;
@property(readonly) long long statusCode;
- (void)addRequestHeader:(id)arg1 value:(id)arg2;
- (int)responseStatusCode;
- (id)allHeaderFields;
- (id)responseHeaders;
@property(readonly) NSURL *URL;
- (id)url;
- (id)rawResponseData;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
