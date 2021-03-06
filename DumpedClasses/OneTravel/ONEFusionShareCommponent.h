//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ONEShareControllerDelegate.h"

@class NSString, ONEShareController;

@interface ONEFusionShareCommponent : NSObject <ONEShareControllerDelegate>
{
    NSString *_url;
    id <ONEFusionShareCommponentDelegate> _delegate;
    CDUnknownBlockType _shareCallback;
    ONEShareController *_shareController;
}

+ (id)eventMap;
+ (id)sharedComponent;
@property(retain, nonatomic) ONEShareController *shareController; // @synthesize shareController=_shareController;
@property(copy, nonatomic) CDUnknownBlockType shareCallback; // @synthesize shareCallback=_shareCallback;
@property(nonatomic) __weak id <ONEFusionShareCommponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)shareCallbackFromChannel:(long long)arg1 resultType:(long long)arg2;
- (void)shareControllerShareCanceled:(long long)arg1;
- (void)shareControllerShareFailed:(long long)arg1 withError:(id)arg2;
- (void)shareControllerShareSuccess:(long long)arg1;
- (id)additionalViewData;
- (id)defaultAdditionalViewData;
- (id)getShareData:(id)arg1;
- (void)shareData:(id)arg1 toChannel:(long long)arg2;
- (void)eventShareWindowSW:(id)arg1;
- (void)processClickItemInAdditionalView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

