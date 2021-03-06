//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBPlatformShareDialogViewControllerBase.h"

#import "FBInspirationControllerListener-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class FBPlatformActionProcessor, NSString, UIAlertView;

@interface FBPlatformCameraDialogViewController : FBPlatformShareDialogViewControllerBase <FBInspirationControllerListener, UIAlertViewDelegate>
{
    FBPlatformActionProcessor *_processor;
    UIAlertView *_alertView;
}

- (void).cxx_destruct;
- (id)_inspirationLogger;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)inspirationControllerDidUpdateInitialAssetSelection:(id)arg1 session:(id)arg2;
- (void)inspirationControllerDidUpdateDisplayContentsForEffectTray:(id)arg1;
- (void)inspirationControllerDidUpdatePreviousModel:(id)arg1 toCurrentModel:(id)arg2;
- (void)inspirationControllerDidUpdateDeeplinkEffects:(id)arg1;
- (id)composerTraits;
- (void)dismiss;
- (id)bootstrapContent;
- (id)composerStartingStyleContext;
- (_Bool)validateAction;
- (id)processor;
- (id)initWithAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

