//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UploadSession, UploadSessionMgr;

@protocol UpSessionMgrDelegate <NSObject>

@optional
- (void)sessionMgrNotifyIpFind:(UploadSessionMgr *)arg1 session:(UploadSession *)arg2 info:(NSDictionary *)arg3;
- (void)sessionMgrNotifyApnChanged:(UploadSessionMgr *)arg1 session:(UploadSession *)arg2 info:(NSDictionary *)arg3;
- (void)sessionMgrNotifyProgress:(UploadSessionMgr *)arg1 session:(UploadSession *)arg2 info:(NSDictionary *)arg3;
- (void)sessionMgrNotifySendResultState:(UploadSessionMgr *)arg1 session:(UploadSession *)arg2 info:(NSDictionary *)arg3;
- (void)sessionMgrNotifyData:(UploadSessionMgr *)arg1 session:(UploadSession *)arg2 info:(NSDictionary *)arg3;
- (void)sessionMgrNotifyEvent:(UploadSessionMgr *)arg1 session:(UploadSession *)arg2 info:(NSDictionary *)arg3;
- (void)sessionMgrNotifyFail:(UploadSessionMgr *)arg1 session:(UploadSession *)arg2 info:(NSDictionary *)arg3;
- (void)sessionMgrNotifySuccess:(UploadSessionMgr *)arg1 session:(UploadSession *)arg2 info:(NSDictionary *)arg3;
@end
