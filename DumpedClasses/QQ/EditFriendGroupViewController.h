//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "FriendListAddGroupDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSIndexPath, NSString, UITableView;

@interface EditFriendGroupViewController : QQViewController <UITableViewDataSource, UITableViewDelegate, FriendListAddGroupDelegate, UIActionSheetDelegate, UITextFieldDelegate, UIAlertViewDelegate>
{
    NSArray *_friendList;
    UITableView *_tableView;
    int _groupId;
    NSString *_newGroupName;
    int _newSortId;
    unsigned long long _fromRow;
    unsigned long long _toRow;
    struct UIEdgeInsets _insets;
    NSIndexPath *_indexPath;
    _Bool _isTextChange;
    id _alertView;
}

@property(retain, nonatomic) id alertView; // @synthesize alertView=_alertView;
- (void).cxx_destruct;
- (id)sortAscendingByGroupSortId:(id)arg1;
- (id)unifyGroupSort:(id)arg1;
- (void)sendGroupAddRequest:(id)arg1;
- (void)sendGroupRenameRequest:(id)arg1;
- (void)sendGroupDeleteRequest:(id)arg1;
- (void)delModelFromList:(id)arg1;
- (void)sendGroupResortRequest:(id)arg1;
- (void)addModelToList:(id)arg1;
- (void)viewDidLoad;
- (void)onFinishButtonClick:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)friendListAddGroupHeaderViewTouched;
- (void)alertDoneActionWithTextField:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)renameGroupName:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)keyboardHidden:(id)arg1;
- (void)keyboardShow:(id)arg1;
- (void)hideKeyboard;
- (void)clearAlertView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithFriendList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
