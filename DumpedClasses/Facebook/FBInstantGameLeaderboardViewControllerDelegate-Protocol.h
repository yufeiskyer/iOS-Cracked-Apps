//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBInstantGameLeaderboardCellViewModel, FBInstantGameLeaderboardViewController, FBQuicksilverPlayerInfo, UIScrollView;

@protocol FBInstantGameLeaderboardViewControllerDelegate <NSObject>
- (FBInstantGameLeaderboardCellViewModel *)gameLeaderboardViewController:(FBInstantGameLeaderboardViewController *)arg1 leaderboardCellModelForViewerSection:(FBQuicksilverPlayerInfo *)arg2 viewerRank:(unsigned long long)arg3;
- (void)gameLeaderboardViewDidScroll:(UIScrollView *)arg1;
@end
