//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, NVMCallingFooterView, NVMSecurePasswordCell, NVMTimerButton, UITableView, UITextField;

@interface NVMResetPasswordViewController : NVMViewController <UITableViewDataSource, UITableViewDelegate>
{
    unsigned long long _type;
    UITableView *_listView;
    UITextField *_passwordTextField;
    UITextField *_oldPasswordTextField;
    UITextField *_codeTextField;
    NVMSecurePasswordCell *_passwordCell;
    NVMTimerButton *_timerButton;
    NSArray *_tableData;
    NVMCallingFooterView *_callingFooter;
}

@property(nonatomic) __weak NVMCallingFooterView *callingFooter; // @synthesize callingFooter=_callingFooter;
@property(retain, nonatomic) NSArray *tableData; // @synthesize tableData=_tableData;
@property(retain, nonatomic) NVMTimerButton *timerButton; // @synthesize timerButton=_timerButton;
@property(nonatomic) __weak NVMSecurePasswordCell *passwordCell; // @synthesize passwordCell=_passwordCell;
@property(nonatomic) __weak UITextField *codeTextField; // @synthesize codeTextField=_codeTextField;
@property(nonatomic) __weak UITextField *oldPasswordTextField; // @synthesize oldPasswordTextField=_oldPasswordTextField;
@property(nonatomic) __weak UITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain, nonatomic) UITableView *listView; // @synthesize listView=_listView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)resetPasswordWithOnePassword;
- (void)sendCode:(id)arg1;
- (CDUnknownBlockType)completionHandler;
- (void)resetPassword;
- (_Bool)checkValidation;
- (void)configureFooterVoiceCode:(id)arg1;
- (void)configureHeader:(id)arg1;
- (void)configureButtonCell:(id)arg1;
- (void)configureTextFieldCell:(id)arg1 forIndex:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadListView;
- (void)loadTableData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
