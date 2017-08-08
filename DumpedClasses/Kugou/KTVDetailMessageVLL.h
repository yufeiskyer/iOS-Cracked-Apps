//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KTVDetailMessageViewDataSource.h"
#import "KTVDetailMessageViewEventDelegate.h"

@class KTVDetailMessageVM, NSString;

@interface KTVDetailMessageVLL : NSObject <KTVDetailMessageViewDataSource, KTVDetailMessageViewEventDelegate>
{
    KTVDetailMessageVM *_viewModel;
    id <KTVDetailMessageVLLDelegate> _delegate;
}

@property(nonatomic) __weak id <KTVDetailMessageVLLDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KTVDetailMessageVM *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)goChorusRecommendList;
- (void)goToH5PageWithSendUrl:(id)arg1;
- (void)goToListenWorkWithOpusId:(long long)arg1;
- (void)goChorusOpusList:(id)arg1;
- (void)goMyJudge:(long long)arg1;
- (void)goUserComRecord:(int)arg1;
- (void)goCompetition;
- (id)getLocation;
- (id)getLbsPlayerslistWithMsgId:(long long)arg1;
- (void)goToUserSpace:(long long)arg1;
- (void)goNearInvitePage;
- (void)goToDetailPage:(id)arg1 nickName:(id)arg2;
- (void)ktvfocus:(id)arg1 curFocusStatus:(id)arg2;
- (void)ktvdel:(id)arg1;
- (void)lookRank:(long long)arg1 andPlayerId:(long long)arg2;
- (void)lookCity:(long long)arg1 andOpusId:(long long)arg2;
- (void)ktvlisten:(id)arg1;
- (void)ktvlook:(id)arg1;
- (void)myMessageListViewShouldLoadMoreData;
- (void)myMessageListViewShouldReflashData;
- (long long)getOldRefreshTime;
- (_Bool)haveMoreDataDynamicMessage;
- (void)addMyMessageItems:(id)arg1;
- (void)deleteMyMessageItemAtIndex:(long long)arg1;
- (id)myMessageItemAtIndex:(long long)arg1;
- (long long)numberOfMyMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
