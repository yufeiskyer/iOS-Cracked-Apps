//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol FMRTCNetDelegate <NSObject>
- (void)rtcOperation:(NSString *)arg1 sessionID:(NSString *)arg2 roomID:(NSString *)arg3 rtcType:(int)arg4 callBack:(void (^)(_Bool))arg5;
- (void)rtcLogQuality:(NSString *)arg1 roomID:(NSString *)arg2 meCaller:(_Bool)arg3 startTimeStamp:(unsigned long long)arg4 callBack:(void (^)(_Bool))arg5;
- (void)rtcLog:(NSString *)arg1 sessionID:(NSString *)arg2 roomID:(NSString *)arg3 rtcType:(int)arg4 networkType:(NSString *)arg5 callBack:(void (^)(_Bool))arg6;
- (void)rtcTypeSwitch:(NSString *)arg1 roomID:(NSString *)arg2 rtcType:(int)arg3 callBack:(void (^)(_Bool))arg4;
- (void)sendICEMessage:(NSString *)arg1 token:(NSString *)arg2 sessionID:(NSString *)arg3 roomID:(NSString *)arg4 callBack:(void (^)(_Bool))arg5;
- (void)refuseInvite:(NSString *)arg1 roomID:(NSString *)arg2 rejectType:(int)arg3 rtcType:(int)arg4 callBack:(void (^)(_Bool, NSString *))arg5;
- (void)leaveRoom:(NSString *)arg1 roomID:(NSString *)arg2 rtcType:(int)arg3 leaveType:(int)arg4 callBack:(void (^)(_Bool))arg5;
- (void)joinRoom:(NSString *)arg1 sessionID:(NSString *)arg2 roomID:(NSString *)arg3 rtcType:(int)arg4 callBack:(void (^)(_Bool, NSString *))arg5;
- (void)createRoom:(int)arg1 sessionID:(NSString *)arg2 rtcType:(int)arg3 roomID:(NSString *)arg4 callBack:(void (^)(_Bool, NSString *))arg5;
@end
