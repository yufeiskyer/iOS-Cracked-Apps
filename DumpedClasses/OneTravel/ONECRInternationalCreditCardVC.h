//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONECRBaseComponentVC.h"

#import "ONEGestureBackInteractionDelegate.h"

@class NSArray, NSString, ONECRInternationalCreditCardComponentParams, ONECRInternationalCreditCardInfo, ONECRInternationalCreditCardTableFooterView, TPKeyboardAvoidingTableView, TRTopNavgationView;

@interface ONECRInternationalCreditCardVC : ONECRBaseComponentVC <ONEGestureBackInteractionDelegate>
{
    ONECRInternationalCreditCardComponentParams *_internationalCreditCardComponentParams;
    CDUnknownBlockType _creditCardCompletionBlock;
    TRTopNavgationView *_navigationView;
    TPKeyboardAvoidingTableView *_tableView;
    ONECRInternationalCreditCardTableFooterView *_tableFooterView;
    NSArray *_tableDataArray;
    ONECRInternationalCreditCardInfo *_internationalCreditCardInfo;
}

@property(retain, nonatomic) ONECRInternationalCreditCardInfo *internationalCreditCardInfo; // @synthesize internationalCreditCardInfo=_internationalCreditCardInfo;
@property(copy, nonatomic) NSArray *tableDataArray; // @synthesize tableDataArray=_tableDataArray;
@property(retain, nonatomic) ONECRInternationalCreditCardTableFooterView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) TPKeyboardAvoidingTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TRTopNavgationView *navigationView; // @synthesize navigationView=_navigationView;
@property(copy, nonatomic) CDUnknownBlockType creditCardCompletionBlock; // @synthesize creditCardCompletionBlock=_creditCardCompletionBlock;
@property(retain, nonatomic) ONECRInternationalCreditCardComponentParams *internationalCreditCardComponentParams; // @synthesize internationalCreditCardComponentParams=_internationalCreditCardComponentParams;
- (void).cxx_destruct;
- (_Bool)disableGuesture;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)startBindResultPolling;
- (void)requestSignQuickPayWithParam:(id)arg1;
- (void)requestPublicKey;
- (void)jumpToAyden3dCheckPageWithSignURL:(id)arg1 postParam:(id)arg2 backURL:(id)arg3;
- (void)didClickNextButton;
- (void)dismissKeyBoard;
- (_Bool)judgeCreditCardVerification;
- (void)encryptInfoAndBindCard:(id)arg1;
- (void)retryBindResultPollingWithTitle:(id)arg1 message:(id)arg2;
- (void)bindFailWithTitle:(id)arg1 message:(id)arg2;
- (void)configureCompleteBind:(id)arg1;
- (void)triggerCompletionBlock:(id)arg1 success:(_Bool)arg2 userCanceld:(_Bool)arg3;
- (void)configureNextButtonEnabled;
- (void)configurePropertyValue:(id)arg1 value:(id)arg2;
- (id)capitalizedOnlyFirstLetter:(id)arg1;
- (void)makeContraint;
- (void)buildUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
