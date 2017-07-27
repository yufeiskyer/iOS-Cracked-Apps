//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLHomeChannelListDataModel.h"

@class MoabCache, NSString, QLJCEGameDownloadItemData, QLJCEShareItem, QLJCEVideoAttentItem;

@interface QLOperationPageDataModel : QLHomeChannelListDataModel
{
    MoabCache *_cahce;
    QLJCEShareItem *_shareItem;
    QLJCEVideoAttentItem *_attentionItem;
    QLJCEGameDownloadItemData *_downloadItem;
    long long _targetPos;
    long long _pageUiType;
    NSString *_titleBarImage;
    NSString *_reportParams;
    NSString *_payAID;
    long long _barButtonType;
    NSString *_type;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long barButtonType; // @synthesize barButtonType=_barButtonType;
@property(copy, nonatomic) NSString *payAID; // @synthesize payAID=_payAID;
@property(copy, nonatomic) NSString *reportParams; // @synthesize reportParams=_reportParams;
@property(copy, nonatomic) NSString *titleBarImage; // @synthesize titleBarImage=_titleBarImage;
@property(nonatomic) long long pageUiType; // @synthesize pageUiType=_pageUiType;
@property(nonatomic) long long targetPos; // @synthesize targetPos=_targetPos;
@property(retain, nonatomic) QLJCEGameDownloadItemData *downloadItem; // @synthesize downloadItem=_downloadItem;
@property(retain, nonatomic) QLJCEVideoAttentItem *attentionItem; // @synthesize attentionItem=_attentionItem;
@property(retain, nonatomic) QLJCEShareItem *shareItem; // @synthesize shareItem=_shareItem;
- (void).cxx_destruct;
- (_Bool)processResponce:(id)arg1 isCache:(_Bool)arg2 error:(id *)arg3;
- (id)getJCERequestObject;
- (Class)getJCEResponseClass;
- (long long)getJCERequestCMD;
- (id)getMoabCacheKey;
- (id)getMoabCacheName;
- (void)setTypeAndDataKey:(id)arg1 dataKey:(id)arg2;
- (id)initWithType:(id)arg1 dataKey:(id)arg2;

@end
