//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NMDjRadioPlayInfoSqliteAccessService : NSObject
{
}

+ (id)sharedInstance;
- (id)getAllDjProgram:(id)arg1;
- (id)getDjProgramByProgramId:(id)arg1 databaseQueue:(id)arg2;
- (id)getDjProgramByRadioId:(id)arg1 databaseQueue:(id)arg2;
- (_Bool)addDjRadioPlayInfo:(id)arg1 lastPlayTime:(double)arg2 isRadioEnd:(_Bool)arg3 database:(id)arg4;
- (_Bool)addDjRadioPlayInfo:(id)arg1 lastPlayTime:(double)arg2 isRadioEnd:(_Bool)arg3 databaseQueue:(id)arg4;

@end

