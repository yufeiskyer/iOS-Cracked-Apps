//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WloginProtocolBuff-Protocol.h"

@class NSData, NSMutableDictionary, NSString;

@interface RegisterCmd : NSObject <WloginProtocolBuff>
{
    unsigned short wVer;
    unsigned short wCmd;
    unsigned char cReplayCode;
    unsigned short wResultCode;
    NSData *tokenData;
    NSData *picData;
    NSData *picSigData;
    NSString *upSmsNo;
    NSString *upSmsMsg;
    NSString *jumpUrl;
    NSString *noticeInfo;
    NSString *returnInfo;
    NSData *jsonData;
    NSMutableDictionary *regInfoDict;
    unsigned short wAppType;
}

@property unsigned short wAppType; // @synthesize wAppType;
@property(retain) NSMutableDictionary *regInfoDict; // @synthesize regInfoDict;
@property(retain) NSData *jsonData; // @synthesize jsonData;
@property unsigned short wVer; // @synthesize wVer;
@property(copy) NSString *returnInfo; // @synthesize returnInfo;
@property(copy) NSString *noticeInfo; // @synthesize noticeInfo;
@property unsigned short wResultCode; // @synthesize wResultCode;
@property unsigned char cReplayCode; // @synthesize cReplayCode;
@property(retain) NSData *picSigData; // @synthesize picSigData;
@property(retain) NSData *tokenData; // @synthesize tokenData;
@property(retain) NSString *upSmsMsg; // @synthesize upSmsMsg;
@property(retain) NSString *upSmsNo; // @synthesize upSmsNo;
@property(retain) NSData *picData; // @synthesize picData;
@property(copy) NSString *jumpUrl; // @synthesize jumpUrl;
@property unsigned short wCmd; // @synthesize wCmd;
- (int)encode:(id)arg1;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (int)decodeRegisterCmdHeadJsonData:(char *)arg1 andBuffLen:(int)arg2;
- (int)decodeJsonData:(char **)arg1 andBuffLen:(int *)arg2;
- (int)decodeReturnInfo:(char **)arg1 andBuffLen:(int *)arg2;
- (int)decodeNoticeInfo:(char **)arg1 andBuffLen:(int *)arg2;
- (int)decodeUrl:(char **)arg1 andBuffLen:(int *)arg2;
- (int)decodeUpSms:(char **)arg1 andBuffLen:(int *)arg2;
- (int)decodeToken:(char **)arg1 andBuffLen:(int *)arg2;
- (int)decodePic:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encodeRegHead:(id)arg1 withPkgLen:(unsigned short)arg2;
- (int)decodeRegHead:(char **)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
