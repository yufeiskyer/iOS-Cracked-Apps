//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ASIHTTPRequest, NSDictionary, NSError, NSString;

@interface IQYDownLoadManager : NSObject
{
    ASIHTTPRequest *_connection;
    _Bool _isShouldResume;
    double _timeout;
    NSString *_url;
    NSDictionary *_dictHeader;
    NSDictionary *_paraments;
    NSString *_destination;
    NSString *_tempLocalPath;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _failedBlock;
    CDUnknownBlockType _bytesReceivedBlock;
    CDUnknownBlockType _headersReceivedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType headersReceivedBlock; // @synthesize headersReceivedBlock=_headersReceivedBlock;
@property(copy, nonatomic) CDUnknownBlockType bytesReceivedBlock; // @synthesize bytesReceivedBlock=_bytesReceivedBlock;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool isShouldResume; // @synthesize isShouldResume=_isShouldResume;
@property(retain, nonatomic) NSString *tempLocalPath; // @synthesize tempLocalPath=_tempLocalPath;
@property(retain, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSDictionary *paraments; // @synthesize paraments=_paraments;
@property(retain, nonatomic) NSDictionary *dictHeader; // @synthesize dictHeader=_dictHeader;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
- (void)base_makeRequestHeader;
- (void)setTimeout;
@property(readonly, nonatomic) NSError *error;
- (void)cancel;
- (void)doDownload;
- (void)downloadWithProcessBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;

@end

