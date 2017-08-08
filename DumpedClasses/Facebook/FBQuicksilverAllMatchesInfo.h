//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class FBQuicksilverPlayerInfo, NSArray;

@interface FBQuicksilverAllMatchesInfo : FBValueObject <NSCopying>
{
    FBQuicksilverPlayerInfo *_viewerPlayerInfo;
    NSArray *_existingMatchups;
    NSArray *_suggestedMatchups;
}

@property(readonly, copy, nonatomic) NSArray *suggestedMatchups; // @synthesize suggestedMatchups=_suggestedMatchups;
@property(readonly, copy, nonatomic) NSArray *existingMatchups; // @synthesize existingMatchups=_existingMatchups;
@property(readonly, copy, nonatomic) FBQuicksilverPlayerInfo *viewerPlayerInfo; // @synthesize viewerPlayerInfo=_viewerPlayerInfo;
- (void).cxx_destruct;
- (id)initWithViewerPlayerInfo:(id)arg1 existingMatchups:(id)arg2 suggestedMatchups:(id)arg3;

@end
