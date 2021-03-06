//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBAccountChangedProtocol.h"

@class NSString, QQTroopRemarkTableOperation;

@interface QQTroopRemarkTable : NSObject <DBAccountChangedProtocol>
{
    QQTroopRemarkTableOperation *_dbOperation;
}

- (void).cxx_destruct;
- (_Bool)removeRemarkWith:(id)arg1 memUin:(id)arg2 userdata:(id)arg3 callback:(id)arg4;
- (id)getRemarkModelWith:(id)arg1 memUin:(id)arg2;
- (void)onDBChanged:(id)arg1;
- (int)asynInsertTroopRemarkListBatch:(id)arg1 userdata:(id)arg2 callback:(id)arg3;
- (id)getTroopRemarkList:(id)arg1;
- (void)insertTroopRemarkListBatch:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

