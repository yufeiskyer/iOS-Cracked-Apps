//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class MSWeakTimer, NSDate, NSError, NSMutableArray, NSMutableDictionary, NSString, XYPHPostModelLocation, XYPHRedPacket;

@interface XYPHPostModel : XYRKModel
{
    MSWeakTimer *weakTimer;
    NSMutableDictionary *_metaData;
    NSMutableArray *_atUser;
    NSMutableArray *_hashTag;
    NSString *_localIdentifier;
    NSString *_remoteId;
    NSString *_title;
    NSString *_desc;
    XYPHPostModelLocation *_location;
    NSDate *_createdDate;
    NSDate *_updatedDate;
    unsigned long long _createdFrom;
    unsigned long long _status;
    NSMutableArray *_sharePlatform;
    unsigned long long _sharePlatforms;
    XYPHRedPacket *_redPacket;
    NSString *_version;
    NSError *_postError;
}

+ (id)bridgeFromNote:(id)arg1;
+ (void)requestSpamWords;
+ (void)fetchSpamWordsIfNeeded;
+ (id)spamWords;
@property(retain, nonatomic) NSError *postError; // @synthesize postError=_postError;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) XYPHRedPacket *redPacket; // @synthesize redPacket=_redPacket;
@property(nonatomic) unsigned long long sharePlatforms; // @synthesize sharePlatforms=_sharePlatforms;
@property(retain, nonatomic) NSMutableArray *sharePlatform; // @synthesize sharePlatform=_sharePlatform;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long createdFrom; // @synthesize createdFrom=_createdFrom;
@property(copy, nonatomic) NSDate *updatedDate; // @synthesize updatedDate=_updatedDate;
@property(copy, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(copy, nonatomic) XYPHPostModelLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *remoteId; // @synthesize remoteId=_remoteId;
@property(copy, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
- (void).cxx_destruct;
- (void)autoSaveDraft;
- (void)stopAutoSave;
- (void)startAutoSave;
- (id)coverImageOrImageUrl;
- (void)endPostSession;
- (void)startPostSession;
@property(retain, nonatomic) NSMutableArray *hashTag; // @synthesize hashTag=_hashTag;
@property(retain, nonatomic) NSMutableArray *atUser; // @synthesize atUser=_atUser;
@property(retain, nonatomic) NSMutableDictionary *metaData; // @synthesize metaData=_metaData;
- (void)dealloc;
- (id)init;
- (_Bool)removeDraft:(id *)arg1;
- (_Bool)saveToDraft:(id *)arg1;
- (_Bool)canSaveToDraft:(id *)arg1;
- (id)postNotesCachedDirectory;
- (void)removeHashTag:(id)arg1;
- (void)removeAtUser:(id)arg1;
- (_Bool)isEmpty;
- (_Bool)canPost:(id *)arg1;
- (void)postToServer:(CDUnknownBlockType)arg1;
- (void)finishPost;

@end

