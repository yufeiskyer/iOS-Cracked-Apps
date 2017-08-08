//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBComposerPickerController-Protocol.h"
#import "FBFacecastBroadcastViewControllerDelegate-Protocol.h"

@class FBComposerScope, FBFacecastBroadcastViewController, FBUserSession, NSString;

@interface FBComposerFacecastPickerController : NSObject <FBFacecastBroadcastViewControllerDelegate, FBComposerPickerController>
{
    FBComposerScope *_composerScope;
    FBUserSession *_userSession;
    FBFacecastBroadcastViewController *_viewController;
}

- (void).cxx_destruct;
- (void)facecastViewControllerDidFinishRecordingSession:(id)arg1;
- (void)facecastViewControllerDidCancelRecordingSession:(id)arg1;
- (void)popoverWantsPickerToCloseItself;
- (unsigned long long)popoverStyle;
- (struct CGSize)popoverContentSizeForOrientation:(long long)arg1;
- (id)presentableViewControllerWithNavigationPayload:(id)arg1;
- (id)initWithUserSession:(id)arg1 composerScope:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
