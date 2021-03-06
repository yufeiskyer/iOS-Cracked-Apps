//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, QYPPAudioView, QYPPFeedFundView, QYPPFeedMoodView, QYPPFeedPicturesView, QYPPFeedShareSourceFundView, QYPPFeedShareSourceLiveVideoView, QYPPFeedShareSourceMoodView, QYPPFeedShareSourceVideoView, QYPPFeedToolBar, QYPPFeedUserVideoView, QYPPFeedVideoView, QYPPFeedVoteView;

@protocol QYPPCircleFeedCellDelegate <NSObject>
- (void)handleAlbumPlayClick:(NSIndexPath *)arg1;
- (void)handleLinkClick:(NSIndexPath *)arg1 link:(NSString *)arg2;
- (void)handleSharerClick:(NSIndexPath *)arg1 sharerName:(NSString *)arg2;
- (void)handleFromWallNameClick:(NSIndexPath *)arg1 wallName:(NSString *)arg2;
- (void)handleWelfareClick:(NSIndexPath *)arg1 welfareName:(NSString *)arg2;
- (void)handleEventClick:(NSIndexPath *)arg1 eventName:(NSString *)arg2;
- (void)handleSendFailClick:(NSIndexPath *)arg1;
- (void)handleFeedUnfavoriteClick:(NSIndexPath *)arg1 feedBar:(QYPPFeedToolBar *)arg2;
- (void)handleFeedFavoriteClick:(NSIndexPath *)arg1 feedBar:(QYPPFeedToolBar *)arg2;
- (void)handleFeedCommentClick:(NSIndexPath *)arg1;
- (void)handleFeedShareClick:(NSIndexPath *)arg1;
- (void)handleMoreClick:(NSIndexPath *)arg1;
- (void)handleUserInfoClick:(NSIndexPath *)arg1;

@optional
- (void)handleGeniusButtonClick:(NSIndexPath *)arg1;
- (void)handleGeniusTipButtonClick:(NSIndexPath *)arg1;
- (void)handleShareUserInfoClick:(NSIndexPath *)arg1;
- (void)handleShareLinkClick:(NSIndexPath *)arg1 link:(NSString *)arg2;
- (void)handleShareWelfareClick:(NSIndexPath *)arg1 welfareName:(NSString *)arg2;
- (void)handleShareEventClick:(NSIndexPath *)arg1 eventName:(NSString *)arg2;
- (void)handleShareFundClick:(NSIndexPath *)arg1 shareFundView:(QYPPFeedShareSourceFundView *)arg2;
- (void)handleShareAudioClick:(NSIndexPath *)arg1 status:(int)arg2 audioView:(QYPPAudioView *)arg3;
- (void)handleShareMoodClick:(NSIndexPath *)arg1 shareMoodView:(QYPPFeedShareSourceMoodView *)arg2;
- (void)handleShareLiveVideoClick:(NSIndexPath *)arg1 liveVideoView:(QYPPFeedShareSourceLiveVideoView *)arg2;
- (void)handleShareVideoClick:(NSIndexPath *)arg1 videoView:(QYPPFeedShareSourceVideoView *)arg2;
- (void)handleShareImageClick:(NSIndexPath *)arg1 imageView:(QYPPFeedPicturesView *)arg2 focusIndex:(unsigned long long)arg3;
- (void)sendAdvertShareClickPingback:(NSIndexPath *)arg1;
- (void)handleAdvertButtonClick:(NSIndexPath *)arg1;
- (void)handleAdvertImageClick:(NSIndexPath *)arg1;
- (void)handleAdvertDescripeClick:(NSIndexPath *)arg1;
- (void)handleAdvertTitleClick:(NSIndexPath *)arg1;
- (void)handleAdvertUsernameClick:(NSIndexPath *)arg1;
- (void)handleAdvertPortraitClick:(NSIndexPath *)arg1;
- (void)handleHotEventShareClick:(NSIndexPath *)arg1;
- (void)handleLiveVideoClick:(NSIndexPath *)arg1;
- (void)handleOfficialVote:(NSIndexPath *)arg1;
- (void)handleVoteClick:(NSIndexPath *)arg1 voteView:(QYPPFeedVoteView *)arg2 selectedIndex:(long long)arg3;
- (void)handleMainSiteVideoClick:(NSIndexPath *)arg1;
- (void)handleFundClick:(NSIndexPath *)arg1 fundView:(QYPPFeedFundView *)arg2;
- (void)handleAudioClick:(NSIndexPath *)arg1 status:(int)arg2 audioView:(QYPPAudioView *)arg3;
- (void)handleVideoClick:(NSIndexPath *)arg1 videoView:(QYPPFeedVideoView *)arg2;
- (void)handleShareDeletedClick:(NSIndexPath *)arg1;
- (void)handleShareClick:(NSIndexPath *)arg1;
- (void)handleMoodClick:(NSIndexPath *)arg1 moodView:(QYPPFeedMoodView *)arg2;
- (void)handleUserVideoClick:(NSIndexPath *)arg1 userVideoView:(QYPPFeedUserVideoView *)arg2;
- (void)handleImageClick:(NSIndexPath *)arg1 imageView:(QYPPFeedPicturesView *)arg2 focusIndex:(unsigned long long)arg3;
- (void)handleStarCommentMore:(NSIndexPath *)arg1;
- (void)handleUnfavoriteStarCommentClick:(NSIndexPath *)arg1 commentCellIndex:(long long)arg2;
- (void)handleFavoriteStarCommentClick:(NSIndexPath *)arg1 commentCellIndex:(long long)arg2;
- (void)handleStarCommentOnAudioClick:(NSIndexPath *)arg1 commentCellIndex:(long long)arg2 status:(int)arg3 audioView:(QYPPAudioView *)arg4;
- (void)handleStarCommentAudioClick:(NSIndexPath *)arg1 commentCellIndex:(long long)arg2 status:(int)arg3 audioView:(QYPPAudioView *)arg4;
- (void)handleStarInteractionHeaderClick:(NSIndexPath *)arg1;
@end

