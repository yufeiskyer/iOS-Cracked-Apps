//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray;

@interface SDDJOrderCancelDuty : JSONModel
{
    _Bool _cancelRule;
    unsigned long long _iconId;
    NSArray *_dutyList;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSArray *dutyList; // @synthesize dutyList=_dutyList;
@property(nonatomic) unsigned long long iconId; // @synthesize iconId=_iconId;
@property(nonatomic) _Bool cancelRule; // @synthesize cancelRule=_cancelRule;
- (void).cxx_destruct;

@end
