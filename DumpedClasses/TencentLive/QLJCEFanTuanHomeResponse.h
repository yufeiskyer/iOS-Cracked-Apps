//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSDictionary, NSString, QLJCEFanInvolveItem, QLJCEShareItem;

@interface QLJCEFanTuanHomeResponse : JceObjectV2
{
    _Bool jcev2_p_7_o_hasNextPage;
    int jcev2_p_0_r_errCode;
    QLJCEFanInvolveItem *jcev2_p_1_r_fanInfo;
    NSArray *jcev2_p_2_o_mainData__b0x9i_VOQLJCETempletLine;
    NSArray *jcev2_p_3_o_uiData__b0x9i_VOQLJCETempletLine;
    NSDictionary *jcev2_p_4_o_coverDataMap__b0x9i_M09ONSStringOQLJCECoverDataList;
    NSDictionary *jcev2_p_5_o_actorDataMap__b0x9i_M09ONSStringOQLJCEActorList;
    NSString *jcev2_p_6_o_pageContext;
    NSString *jcev2_p_8_o_postDataKey;
    QLJCEShareItem *jcev2_p_9_o_shareItem;
    NSArray *jcev2_p_10_o_tabModuleList__b0x9i_VOQLJCELiveTabModuleInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_tabModuleList, setter=setJce_tabModuleList:) NSArray *jcev2_p_10_o_tabModuleList__b0x9i_VOQLJCELiveTabModuleInfo; // @synthesize jcev2_p_10_o_tabModuleList__b0x9i_VOQLJCELiveTabModuleInfo;
@property(retain, nonatomic, getter=jce_shareItem, setter=setJce_shareItem:) QLJCEShareItem *jcev2_p_9_o_shareItem; // @synthesize jcev2_p_9_o_shareItem;
@property(retain, nonatomic, getter=jce_postDataKey, setter=setJce_postDataKey:) NSString *jcev2_p_8_o_postDataKey; // @synthesize jcev2_p_8_o_postDataKey;
@property(nonatomic, getter=jce_hasNextPage, setter=setJce_hasNextPage:) _Bool jcev2_p_7_o_hasNextPage; // @synthesize jcev2_p_7_o_hasNextPage;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_6_o_pageContext; // @synthesize jcev2_p_6_o_pageContext;
@property(retain, nonatomic, getter=jce_actorDataMap, setter=setJce_actorDataMap:) NSDictionary *jcev2_p_5_o_actorDataMap__b0x9i_M09ONSStringOQLJCEActorList; // @synthesize jcev2_p_5_o_actorDataMap__b0x9i_M09ONSStringOQLJCEActorList;
@property(retain, nonatomic, getter=jce_coverDataMap, setter=setJce_coverDataMap:) NSDictionary *jcev2_p_4_o_coverDataMap__b0x9i_M09ONSStringOQLJCECoverDataList; // @synthesize jcev2_p_4_o_coverDataMap__b0x9i_M09ONSStringOQLJCECoverDataList;
@property(retain, nonatomic, getter=jce_uiData, setter=setJce_uiData:) NSArray *jcev2_p_3_o_uiData__b0x9i_VOQLJCETempletLine; // @synthesize jcev2_p_3_o_uiData__b0x9i_VOQLJCETempletLine;
@property(retain, nonatomic, getter=jce_mainData, setter=setJce_mainData:) NSArray *jcev2_p_2_o_mainData__b0x9i_VOQLJCETempletLine; // @synthesize jcev2_p_2_o_mainData__b0x9i_VOQLJCETempletLine;
@property(retain, nonatomic, getter=jce_fanInfo, setter=setJce_fanInfo:) QLJCEFanInvolveItem *jcev2_p_1_r_fanInfo; // @synthesize jcev2_p_1_r_fanInfo;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

