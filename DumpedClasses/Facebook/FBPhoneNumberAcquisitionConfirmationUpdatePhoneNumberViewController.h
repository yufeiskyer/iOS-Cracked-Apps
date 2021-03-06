//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBPhoneInputHandlerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class FBPhoneInputHandler, FBPhoneNumberAcquisitionConfirmationUpdatePhoneNumberView, FBPhoneNumberAcquisitionFunnelLogger, FBUserSession, NSString, UIAlertView;
@protocol FBPhoneNumber, FBPhoneNumberAcquisitionConfirmationUpdatePhoneNumberViewControllerDelegate;

@interface FBPhoneNumberAcquisitionConfirmationUpdatePhoneNumberViewController : UIViewController <UIAlertViewDelegate, FBPhoneInputHandlerDelegate>
{
    NSString *_qpId;
    NSString *_promotionType;
    FBPhoneNumberAcquisitionFunnelLogger *_funnelLogger;
    NSString *_funnelPhoneNumber;
    FBUserSession *_session;
    id <FBPhoneNumberAcquisitionConfirmationUpdatePhoneNumberViewControllerDelegate> _delegate;
    FBPhoneInputHandler *_inputHandler;
    FBPhoneNumberAcquisitionConfirmationUpdatePhoneNumberView *_updatePhoneNumberView;
    id <FBPhoneNumber> _currentPhoneNumber;
    UIAlertView *_errorAlertView;
}

@property(retain, nonatomic) UIAlertView *errorAlertView; // @synthesize errorAlertView=_errorAlertView;
@property(retain, nonatomic) id <FBPhoneNumber> currentPhoneNumber; // @synthesize currentPhoneNumber=_currentPhoneNumber;
@property(retain, nonatomic) FBPhoneNumberAcquisitionConfirmationUpdatePhoneNumberView *updatePhoneNumberView; // @synthesize updatePhoneNumberView=_updatePhoneNumberView;
@property(retain, nonatomic) FBPhoneInputHandler *inputHandler; // @synthesize inputHandler=_inputHandler;
@property(nonatomic) __weak id <FBPhoneNumberAcquisitionConfirmationUpdatePhoneNumberViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)_funnelLogger;
- (void)phoneInputHandlerDidReceiveReturnPress:(id)arg1;
- (void)phoneInputHandlerDidClearInput:(id)arg1;
- (void)phoneInputHandler:(id)arg1 didReceiveValidPhoneNumber:(id)arg2;
- (void)phoneInputHandler:(id)arg1 didReceiveInvalidInput:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_displayErrorWithTitle:(id)arg1 message:(id)arg2;
- (void)_addPhoneNumberAddAttemptEventToFunnelWithPhoneNumber:(id)arg1;
- (id)_newPhoneNumber;
- (void)_addFunnelAction:(id)arg1 errorCode:(id)arg2;
- (void)_handleError:(id)arg1 withButton:(id)arg2 withButtonTitle:(id)arg3 withSpinner:(id)arg4;
- (void)_handleAddContactpointSuccessWithPhoneNumber:(id)arg1;
- (void)_handleSubmitNewPhoneNumber;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)becomeFirstResponder;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithCurrentPhoneNumber:(id)arg1 promotionId:(id)arg2 promotionType:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

