//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBGroupsInfoTagsDataSource;
@protocol FBIntentHandler;

@interface FBGroupTagCollectionComponent : CKCompositeComponent
{
    id <FBIntentHandler> _intentHandler;
    FBGroupsInfoTagsDataSource *_dataSource;
}

+ (id)newWithTags:(id)arg1 intentHandler:(id)arg2 session:(id)arg3;
- (void).cxx_destruct;

@end
