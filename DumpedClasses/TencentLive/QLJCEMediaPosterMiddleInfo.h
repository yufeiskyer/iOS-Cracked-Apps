//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class QLJCEFeedVoteInfo, QLJCEMediaPoster, QLJCEONABulletinBoardV2;

@interface QLJCEMediaPosterMiddleInfo : JceObjectV2
{
    int jcev2_p_0_r_mediaType;
    QLJCEMediaPoster *jcev2_p_1_o_poster;
    QLJCEONABulletinBoardV2 *jcev2_p_2_o_bulletinBoard;
    QLJCEFeedVoteInfo *jcev2_p_3_o_voteInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_voteInfo, setter=setJce_voteInfo:) QLJCEFeedVoteInfo *jcev2_p_3_o_voteInfo; // @synthesize jcev2_p_3_o_voteInfo;
@property(retain, nonatomic, getter=jce_bulletinBoard, setter=setJce_bulletinBoard:) QLJCEONABulletinBoardV2 *jcev2_p_2_o_bulletinBoard; // @synthesize jcev2_p_2_o_bulletinBoard;
@property(retain, nonatomic, getter=jce_poster, setter=setJce_poster:) QLJCEMediaPoster *jcev2_p_1_o_poster; // @synthesize jcev2_p_1_o_poster;
@property(nonatomic, getter=jce_mediaType, setter=setJce_mediaType:) int jcev2_p_0_r_mediaType; // @synthesize jcev2_p_0_r_mediaType;
- (void).cxx_destruct;
- (id)init;

@end

