//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, PPPJCEPhoneQUA, PPPJCETVInfo;

@interface PPPJCERequestHead : JceObjectV2
{
    int jcev2_p_0_o_requestId;
    int jcev2_p_1_o_cmdId;
    PPPJCEPhoneQUA *jcev2_p_2_o_phoneQua;
    NSString *jcev2_p_3_o_appId;
    NSArray *jcev2_p_4_o_vecPhoneLoginToken__b0x9i_VOPPPJCEPhoneLoginToken;
    PPPJCETVInfo *jcev2_p_5_o_stTVInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_stTVInfo, setter=setJce_stTVInfo:) PPPJCETVInfo *jcev2_p_5_o_stTVInfo; // @synthesize jcev2_p_5_o_stTVInfo;
@property(retain, nonatomic, getter=jce_vecPhoneLoginToken, setter=setJce_vecPhoneLoginToken:) NSArray *jcev2_p_4_o_vecPhoneLoginToken__b0x9i_VOPPPJCEPhoneLoginToken; // @synthesize jcev2_p_4_o_vecPhoneLoginToken__b0x9i_VOPPPJCEPhoneLoginToken;
@property(retain, nonatomic, getter=jce_appId, setter=setJce_appId:) NSString *jcev2_p_3_o_appId; // @synthesize jcev2_p_3_o_appId;
@property(retain, nonatomic, getter=jce_phoneQua, setter=setJce_phoneQua:) PPPJCEPhoneQUA *jcev2_p_2_o_phoneQua; // @synthesize jcev2_p_2_o_phoneQua;
@property(nonatomic, getter=jce_cmdId, setter=setJce_cmdId:) int jcev2_p_1_o_cmdId; // @synthesize jcev2_p_1_o_cmdId;
@property(nonatomic, getter=jce_requestId, setter=setJce_requestId:) int jcev2_p_0_o_requestId; // @synthesize jcev2_p_0_o_requestId;
- (void).cxx_destruct;
- (id)init;

@end
