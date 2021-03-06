//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

#import "NSCopying.h"

@class NSDate, NSString;

@interface KTV_SongInfo : KTVObjectModel <NSCopying>
{
    _Bool _isAccompany;
    _Bool _isFavorite;
    _Bool _hasScore;
    _Bool _isTranKrc;
    _Bool _hasOriginal;
    _Bool _hasLrc;
    _Bool _isHQ;
    _Bool _hasPitch;
    int _singerId;
    int _playTime;
    int _songFileSize;
    int _LocalSelCount;
    int _fromType;
    int _bitRate;
    int _enterType;
    int _songKind;
    int _referenceCount;
    NSString *_songName;
    long long _songId;
    NSString *_singerName;
    NSString *_hashKey;
    NSString *_originHashKey;
    NSString *_suitHash;
    NSString *_composeHash;
    NSString *_singerImg;
    NSString *_songUrl;
    NSString *_remark;
    NSString *_songExtName;
    NSDate *_updateTime;
    long long _krcId;
    NSString *_albumURL;
    long long _song_id;
    long long _uploadCount;
    long long _songsingNum;
    long long _songVoteNum;
    NSDate *_createDate;
    NSDate *_updateDate;
    long long _scid;
    NSString *_multiSongStr;
    NSString *_fmh;
}

+ (id)getPrimaryKey;
+ (id)keyMapper;
@property(retain, nonatomic) NSString *fmh; // @synthesize fmh=_fmh;
@property(retain, nonatomic) NSString *multiSongStr; // @synthesize multiSongStr=_multiSongStr;
@property(nonatomic) long long scid; // @synthesize scid=_scid;
@property(retain, nonatomic) NSDate *updateDate; // @synthesize updateDate=_updateDate;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(nonatomic) int referenceCount; // @synthesize referenceCount=_referenceCount;
@property(nonatomic) int songKind; // @synthesize songKind=_songKind;
@property(nonatomic) long long songVoteNum; // @synthesize songVoteNum=_songVoteNum;
@property(nonatomic) long long songsingNum; // @synthesize songsingNum=_songsingNum;
@property(nonatomic) long long uploadCount; // @synthesize uploadCount=_uploadCount;
@property(nonatomic) long long song_id; // @synthesize song_id=_song_id;
@property(nonatomic) int enterType; // @synthesize enterType=_enterType;
@property(copy, nonatomic) NSString *albumURL; // @synthesize albumURL=_albumURL;
@property(nonatomic) int bitRate; // @synthesize bitRate=_bitRate;
@property(nonatomic) _Bool hasPitch; // @synthesize hasPitch=_hasPitch;
@property(nonatomic) _Bool isHQ; // @synthesize isHQ=_isHQ;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(nonatomic) long long krcId; // @synthesize krcId=_krcId;
@property(nonatomic) _Bool hasLrc; // @synthesize hasLrc=_hasLrc;
@property(nonatomic) int LocalSelCount; // @synthesize LocalSelCount=_LocalSelCount;
@property(retain, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *songExtName; // @synthesize songExtName=_songExtName;
@property(nonatomic) int songFileSize; // @synthesize songFileSize=_songFileSize;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *songUrl; // @synthesize songUrl=_songUrl;
@property(retain, nonatomic) NSString *singerImg; // @synthesize singerImg=_singerImg;
@property(nonatomic) _Bool hasOriginal; // @synthesize hasOriginal=_hasOriginal;
@property(nonatomic) _Bool isTranKrc; // @synthesize isTranKrc=_isTranKrc;
@property(nonatomic) _Bool hasScore; // @synthesize hasScore=_hasScore;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(nonatomic) _Bool isAccompany; // @synthesize isAccompany=_isAccompany;
@property(retain, nonatomic) NSString *composeHash; // @synthesize composeHash=_composeHash;
@property(retain, nonatomic) NSString *suitHash; // @synthesize suitHash=_suitHash;
@property(retain, nonatomic) NSString *originHashKey; // @synthesize originHashKey=_originHashKey;
@property(retain, nonatomic) NSString *hashKey; // @synthesize hashKey=_hashKey;
@property(nonatomic) int playTime; // @synthesize playTime=_playTime;
@property(retain, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(nonatomic) int singerId; // @synthesize singerId=_singerId;
@property(nonatomic) long long songId; // @synthesize songId=_songId;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
- (void).cxx_destruct;
- (id)getTheMaxMachHash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

