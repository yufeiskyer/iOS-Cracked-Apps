//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBaseComProtocol.h"

@class NSDictionary, SOrderActCom;

@protocol SOrderActComDelegate <SBaseComProtocol>
- (void)orderActCom:(SOrderActCom *)arg1 didClickItemWithType:(long long)arg2;

@optional
- (NSDictionary *)orderActCom:(SOrderActCom *)arg1 omgParamsForType:(long long)arg2;
@end

