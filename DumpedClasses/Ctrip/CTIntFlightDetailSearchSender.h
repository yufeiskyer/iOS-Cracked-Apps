//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSender.h"

@interface CTIntFlightDetailSearchSender : CTSender
{
}

+ (id)getUID;
+ (id)getInstance;
- (id)sendFlightDetailSearchInMiddlePageWith:(id)arg1;
- (id)sendMoreCabinSearchInMiddlePageWith:(id)arg1;
- (void)sendMoreCabinSearchInMiddlePageHelper:(id)arg1 withCacheBean:(id)arg2;
- (void)setFlightPolicyInfoList:(id)arg1 withCacheBean:(id)arg2;
- (id)sendIntFlightDetailWithIntFlightOrderCacheBean:(id)arg1 selectedInfoItemModel:(id)arg2 intFlightFilterModel:(id)arg3 uuid:(id)arg4;
- (void)sendIntFlightDetailHelper:(id)arg1 withCacheBean:(id)arg2;
- (void)sendIntFlightDetailSuccessBlockHelper:(id)arg1 withIntFlightOrderCacheBean:(id)arg2;

@end

