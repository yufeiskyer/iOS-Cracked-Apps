//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KTVNetReachability : NSObject
{
    CDUnknownBlockType _statusChangeBlock;
    CDUnknownBlockType _detailStatusChangeBlock;
}

+ (_Bool)canReachable;
+ (int)currentDetailReachabilityStatus;
+ (int)currentReachabilityStatus;
@property(copy, nonatomic) CDUnknownBlockType detailStatusChangeBlock; // @synthesize detailStatusChangeBlock=_detailStatusChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType statusChangeBlock; // @synthesize statusChangeBlock=_statusChangeBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)ktvReachabilityChanged:(id)arg1;
- (_Bool)canReachable;
- (int)currentDetailReachabilityStatus;
- (int)currentReachabilityStatus;
- (id)init;

@end
