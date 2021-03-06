//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableDictionary, NSString, QQLockDictionary;

@interface QQGroupForbidMsgHelper : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_tempOpenForbidGroup;
    QQLockDictionary *_retryGroupCount;
}

+ (id)getInstance;
- (void)resetForbidGroupWhenRecvMsg:(id)arg1;
- (void)setTempOpenForbidGroup:(id)arg1 flag:(_Bool)arg2;
- (_Bool)isTempOpenForbidGroup:(id)arg1;
- (void)cmdError;
- (_Bool)parsePbBufferInner:(id)arg1;
- (void)parsePbBuffer:(char *)arg1 size:(int)arg2;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (_Bool)requestSetTemporaryForbidGroup:(id)arg1 flag:(_Bool)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

