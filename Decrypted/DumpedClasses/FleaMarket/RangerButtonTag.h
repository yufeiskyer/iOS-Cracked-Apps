//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RangerTagProtocol.h"

@class NSString;

@interface RangerButtonTag : NSObject <RangerTagProtocol>
{
    unsigned long long _type;
}

@property unsigned long long type; // @synthesize type=_type;
- (void)configTagAfterLayout:(id)arg1 view:(id)arg2;
- (void)configTagBeforeLayout:(id)arg1 view:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)configWithRangerAtributes:(id)arg1 view:(id)arg2;
- (unsigned long long)typeFromAtttribute:(id)arg1;
- (void)configButtonView:(id)arg1 attributes:(id)arg2 withState:(unsigned long long)arg3;
- (void)compatibleOldStyle:(id)arg1 view:(id)arg2;
- (id)fontWithSize:(float)arg1 bold:(_Bool)arg2;
- (id)viewForRangerTagWithAttributes:(id)arg1;
- (_Bool)isTagDisplayContent;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
