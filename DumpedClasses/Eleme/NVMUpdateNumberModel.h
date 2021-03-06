//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>, NSString;

@interface NVMUpdateNumberModel : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    NSString *_path;
    double _updateTimeInterval;
    CDUnknownBlockType _didUpdatedNumberBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didUpdatedNumberBlock; // @synthesize didUpdatedNumberBlock=_didUpdatedNumberBlock;
@property(nonatomic) double updateTimeInterval; // @synthesize updateTimeInterval=_updateTimeInterval;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)updateData;
- (void)updateNumberOnce;
- (void)stopUpdatingNumber;
- (void)startUpdatingNumber;
- (id)initWithPath:(id)arg1;

@end

