//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@interface FBTimelineNavTilesFriendsFollowersConfiguration : FBValueObject <NSCopying>
{
    _Bool _shouldShowFollowersButton;
    _Bool _shouldShowFriendsButton;
    _Bool _shouldFetchSubscribers;
}

@property(readonly, nonatomic) _Bool shouldFetchSubscribers; // @synthesize shouldFetchSubscribers=_shouldFetchSubscribers;
@property(readonly, nonatomic) _Bool shouldShowFriendsButton; // @synthesize shouldShowFriendsButton=_shouldShowFriendsButton;
@property(readonly, nonatomic) _Bool shouldShowFollowersButton; // @synthesize shouldShowFollowersButton=_shouldShowFollowersButton;
- (id)initWithShouldShowFollowersButton:(_Bool)arg1 shouldShowFriendsButton:(_Bool)arg2 shouldFetchSubscribers:(_Bool)arg3;

@end
