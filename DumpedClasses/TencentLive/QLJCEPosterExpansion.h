//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEPosterExpansion : JceObjectV2
{
    int jcev2_p_0_o_operationType;
    NSString *jcev2_p_1_o_tagType;
    NSString *jcev2_p_2_o_tagId;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_tagId, setter=setJce_tagId:) NSString *jcev2_p_2_o_tagId; // @synthesize jcev2_p_2_o_tagId;
@property(retain, nonatomic, getter=jce_tagType, setter=setJce_tagType:) NSString *jcev2_p_1_o_tagType; // @synthesize jcev2_p_1_o_tagType;
@property(nonatomic, getter=jce_operationType, setter=setJce_operationType:) int jcev2_p_0_o_operationType; // @synthesize jcev2_p_0_o_operationType;
- (void).cxx_destruct;
- (id)init;

@end

