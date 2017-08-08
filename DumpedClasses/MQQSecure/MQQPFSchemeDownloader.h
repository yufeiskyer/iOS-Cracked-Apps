//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQHttpRequest, NSMutableArray;

@interface MQQPFSchemeDownloader : NSObject
{
    _Bool _isRunning;
    NSMutableArray *_tasks;
    MQQHttpRequest *_downloadRequest;
}

+ (id)defaultDownloader;
@property(retain, nonatomic) MQQHttpRequest *downloadRequest; // @synthesize downloadRequest=_downloadRequest;
@property(retain, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
- (void)downloadRequestFailed:(id)arg1;
- (void)downloadRequestFinished:(id)arg1;
- (void)_stop;
- (void)_start;
- (_Bool)isSchemeInDownloadQueue:(id)arg1;
- (id)md5OfURL:(id)arg1;
- (_Bool)addTaskWithModel:(id)arg1 scheme:(id)arg2;
- (void)dealloc;
- (id)init;

@end
