//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQSharkBaseRequest.h"

@class MQQUnifiedAccountInfo, NSDictionary, NSString;

@interface MQQGPGamePlayerRequest : MQQSharkBaseRequest
{
    NSDictionary *_playerDict;
    NSString *_playerMsg;
    _Bool _isWXAccount;
    MQQUnifiedAccountInfo *_currentAccountInfo;
    NSString *_bundleID;
    NSString *_partition;
}

@property(nonatomic) _Bool isWXAccount; // @synthesize isWXAccount=_isWXAccount;
@property(retain, nonatomic) NSString *partition; // @synthesize partition=_partition;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) MQQUnifiedAccountInfo *currentAccountInfo; // @synthesize currentAccountInfo=_currentAccountInfo;
@property(readonly, nonatomic) NSString *playerMsg; // @synthesize playerMsg=_playerMsg;
@property(readonly, nonatomic) NSDictionary *playerDict; // @synthesize playerDict=_playerDict;
- (void)didSharkDataFailInAccessLayer;
- (void)didSharkDataFail:(const vector_aa1d262e *)arg1 errCode:(long long)arg2;
- (void)didSharkDataFinish:(const vector_aa1d262e *)arg1;
- (_Bool)getCmdId:(int *)arg1 requestData:(vector_aa1d262e *)arg2;
- (void)sendAsyncWithBundleID:(id)arg1 partition:(id)arg2 accountInfo:(id)arg3 isWXAccount:(_Bool)arg4;
- (void)dealloc;
- (id)init;

@end
