//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@interface QLJCEBanabaDMGetUserCfgResponse : JceObjectV2
{
    short jcev2_p_1_o_wUserStaus;
    int jcev2_p_0_r_errCode;
    int jcev2_p_2_o_dwPresentArea;
    int jcev2_p_3_o_dwFontSize;
    int jcev2_p_4_o_dwSpeed;
    int jcev2_p_5_o_dwAlpha;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_dwAlpha, setter=setJce_dwAlpha:) int jcev2_p_5_o_dwAlpha; // @synthesize jcev2_p_5_o_dwAlpha;
@property(nonatomic, getter=jce_dwSpeed, setter=setJce_dwSpeed:) int jcev2_p_4_o_dwSpeed; // @synthesize jcev2_p_4_o_dwSpeed;
@property(nonatomic, getter=jce_dwFontSize, setter=setJce_dwFontSize:) int jcev2_p_3_o_dwFontSize; // @synthesize jcev2_p_3_o_dwFontSize;
@property(nonatomic, getter=jce_dwPresentArea, setter=setJce_dwPresentArea:) int jcev2_p_2_o_dwPresentArea; // @synthesize jcev2_p_2_o_dwPresentArea;
@property(nonatomic, getter=jce_wUserStaus, setter=setJce_wUserStaus:) short jcev2_p_1_o_wUserStaus; // @synthesize jcev2_p_1_o_wUserStaus;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (id)init;

@end

