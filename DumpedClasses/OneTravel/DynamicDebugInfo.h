//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface DynamicDebugInfo : JceObjectV2
{
    int jcev2_p_0_r_old_eta;
    int jcev2_p_1_r_eta_new;
    int jcev2_p_5_r_event_id;
    int jcev2_p_6_r_event_sx;
    int jcev2_p_7_r_event_sy;
    int jcev2_p_8_r_event_ex;
    int jcev2_p_9_r_event_ey;
    NSString *jcev2_p_2_r_url;
    NSString *jcev2_p_3_r_old_coors;
    NSString *jcev2_p_4_r_coors_new;
    long long jcev2_p_10_r_old_route_id;
    long long jcev2_p_11_r_route_id_new;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=route_id_new, setter=setRoute_id_new:) long long jcev2_p_11_r_route_id_new; // @synthesize jcev2_p_11_r_route_id_new;
@property(nonatomic, getter=old_route_id, setter=setOld_route_id:) long long jcev2_p_10_r_old_route_id; // @synthesize jcev2_p_10_r_old_route_id;
@property(nonatomic, getter=event_ey, setter=setEvent_ey:) int jcev2_p_9_r_event_ey; // @synthesize jcev2_p_9_r_event_ey;
@property(nonatomic, getter=event_ex, setter=setEvent_ex:) int jcev2_p_8_r_event_ex; // @synthesize jcev2_p_8_r_event_ex;
@property(nonatomic, getter=event_sy, setter=setEvent_sy:) int jcev2_p_7_r_event_sy; // @synthesize jcev2_p_7_r_event_sy;
@property(nonatomic, getter=event_sx, setter=setEvent_sx:) int jcev2_p_6_r_event_sx; // @synthesize jcev2_p_6_r_event_sx;
@property(nonatomic, getter=event_id, setter=setEvent_id:) int jcev2_p_5_r_event_id; // @synthesize jcev2_p_5_r_event_id;
@property(retain, nonatomic, getter=coors_new, setter=setCoors_new:) NSString *jcev2_p_4_r_coors_new; // @synthesize jcev2_p_4_r_coors_new;
@property(retain, nonatomic, getter=old_coors, setter=setOld_coors:) NSString *jcev2_p_3_r_old_coors; // @synthesize jcev2_p_3_r_old_coors;
@property(retain, nonatomic, getter=url, setter=setUrl:) NSString *jcev2_p_2_r_url; // @synthesize jcev2_p_2_r_url;
@property(nonatomic, getter=eta_new, setter=setEta_new:) int jcev2_p_1_r_eta_new; // @synthesize jcev2_p_1_r_eta_new;
@property(nonatomic, getter=old_eta, setter=setOld_eta:) int jcev2_p_0_r_old_eta; // @synthesize jcev2_p_0_r_old_eta;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

