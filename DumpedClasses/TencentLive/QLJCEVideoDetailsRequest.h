//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEVideoDetailsRequest : JceObjectV2
{
    NSString *jcev2_p_0_o_lid;
    NSString *jcev2_p_1_o_cid;
    NSString *jcev2_p_2_o_vid;
    NSString *jcev2_p_3_o_historyVid;
    NSString *jcev2_p_4_o_expansion;
    NSString *jcev2_p_5_o_outWebId;
    NSString *jcev2_p_6_o_sessionId;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_sessionId, setter=setJce_sessionId:) NSString *jcev2_p_6_o_sessionId; // @synthesize jcev2_p_6_o_sessionId;
@property(retain, nonatomic, getter=jce_outWebId, setter=setJce_outWebId:) NSString *jcev2_p_5_o_outWebId; // @synthesize jcev2_p_5_o_outWebId;
@property(retain, nonatomic, getter=jce_expansion, setter=setJce_expansion:) NSString *jcev2_p_4_o_expansion; // @synthesize jcev2_p_4_o_expansion;
@property(retain, nonatomic, getter=jce_historyVid, setter=setJce_historyVid:) NSString *jcev2_p_3_o_historyVid; // @synthesize jcev2_p_3_o_historyVid;
@property(retain, nonatomic, getter=jce_vid, setter=setJce_vid:) NSString *jcev2_p_2_o_vid; // @synthesize jcev2_p_2_o_vid;
@property(retain, nonatomic, getter=jce_cid, setter=setJce_cid:) NSString *jcev2_p_1_o_cid; // @synthesize jcev2_p_1_o_cid;
@property(retain, nonatomic, getter=jce_lid, setter=setJce_lid:) NSString *jcev2_p_0_o_lid; // @synthesize jcev2_p_0_o_lid;
- (void).cxx_destruct;
- (id)init;

@end
