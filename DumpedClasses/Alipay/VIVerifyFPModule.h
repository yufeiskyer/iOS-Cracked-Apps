//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VIBioVerifyProxyBase.h"

#import "VIBioAuthDelegate.h"

@class NSString;

@interface VIVerifyFPModule : VIBioVerifyProxyBase <VIBioAuthDelegate>
{
}

- (void)cancelAnimated:(_Bool)arg1;
- (void)handleBioResponse:(id)arg1;
- (void)verify;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
