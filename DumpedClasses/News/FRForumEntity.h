//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseEntity.h"

@class NSString;

@interface FRForumEntity : FRBaseEntity
{
    long long _forum_id;
    NSString *_forum_name;
    long long _onlookers_count;
    NSString *_avatar_url;
    long long _talk_count;
    long long _like_time;
    NSString *_forum_hot_header;
    NSString *_desc;
    long long _status;
    NSString *_banner_url;
    long long _follower_count;
    long long _participant_count;
    NSString *_share_url;
    NSString *_introdution_url;
    unsigned long long _showEtStatus;
    long long _article_count;
}

+ (void)initForumTable;
+ (id)genForumWithForumItemStruct:(id)arg1 needUpdate:(_Bool)arg2;
+ (id)genForumWithForumStruct:(id)arg1 needUpdate:(_Bool)arg2;
+ (id)genForumEntityWithConcernForumStruct:(id)arg1 needUpdate:(_Bool)arg2;
+ (id)getForumEntityWithForumId:(long long)arg1;
@property(nonatomic) long long article_count; // @synthesize article_count=_article_count;
@property(nonatomic) unsigned long long showEtStatus; // @synthesize showEtStatus=_showEtStatus;
@property(retain, nonatomic) NSString *introdution_url; // @synthesize introdution_url=_introdution_url;
@property(retain, nonatomic) NSString *share_url; // @synthesize share_url=_share_url;
@property(nonatomic) long long participant_count; // @synthesize participant_count=_participant_count;
@property(nonatomic) long long follower_count; // @synthesize follower_count=_follower_count;
@property(retain, nonatomic) NSString *banner_url; // @synthesize banner_url=_banner_url;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *forum_hot_header; // @synthesize forum_hot_header=_forum_hot_header;
@property(nonatomic) long long like_time; // @synthesize like_time=_like_time;
@property(nonatomic) long long talk_count; // @synthesize talk_count=_talk_count;
@property(retain, nonatomic) NSString *avatar_url; // @synthesize avatar_url=_avatar_url;
@property(nonatomic) long long onlookers_count; // @synthesize onlookers_count=_onlookers_count;
@property(retain, nonatomic) NSString *forum_name; // @synthesize forum_name=_forum_name;
@property(nonatomic) long long forum_id; // @synthesize forum_id=_forum_id;
- (void).cxx_destruct;
- (void)receiveForumLikeChangedNotification:(id)arg1;
- (void)updateWithForum:(id)arg1;
- (void)updateWithConcernForum:(id)arg1;
- (void)updateWithForumItem:(id)arg1;
- (id)initWithForumItemStruct:(id)arg1;
- (id)initWithForumStruct:(id)arg1;
- (id)initWithForumConcernForumStruct:(id)arg1;
- (id)init;
- (void)dealloc;

@end
