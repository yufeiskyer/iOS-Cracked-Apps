//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SResetPosCom.h"

@interface SDriverResetPosUnit : SResetPosCom
{
}

- (id)mapEntrance;
- (void)resetActionForInService;
- (void)resetActionForWaitRsp;
- (_Bool)needDriverInsideForReset:(long long)arg1;
- (struct CLLocationCoordinate2D)destAddrCoorForScene:(long long)arg1;
- (struct CLLocationCoordinate2D)startAddrCoorForScene:(long long)arg1;

@end

