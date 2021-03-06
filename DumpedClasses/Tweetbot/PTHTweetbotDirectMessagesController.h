//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSMutableArray, NSString, PTHTweetbotDirectMessageTextView, PTHTweetbotDirectMessageThread, PTHTweetbotPostDraft, UITableView;

@interface PTHTweetbotDirectMessagesController : PTHViewController <UITableViewDelegate, UITableViewDataSource, UITextViewDelegate>
{
    NSMutableArray *_directMessagesAndDrafts;
    UITableView *_tableView;
    PTHTweetbotDirectMessageTextView *_messageTextView;
    NSLayoutConstraint *_messageTextViewBottomConstraint;
    PTHTweetbotPostDraft *_draft;
    long long _ignoreUpdatesCounter;
    _Bool _firstTime;
    _Bool _ignoreResize;
    struct CGRect _keyboardFrame;
    _Bool _showKeyboard;
    PTHTweetbotDirectMessageThread *_directMessageThread;
}

@property(nonatomic) _Bool showKeyboard; // @synthesize showKeyboard=_showKeyboard;
@property(readonly, nonatomic) PTHTweetbotDirectMessageThread *directMessageThread; // @synthesize directMessageThread=_directMessageThread;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_share:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)sendMessage:(id)arg1;
- (void)postDraft:(id)arg1;
- (void)deleteDraft:(id)arg1;
- (void)_threadUpdated;
- (void)_scrollToBottom:(_Bool)arg1;
- (void)endIgnoringUpdates;
- (void)beginIgnoringUpdates;
- (void)_refreshIfNeeded;
- (_Bool)shouldShowRemoteNotification:(id)arg1;
- (void)keyboardWillChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)_updateLayout;
- (void)loadView;
- (void)reloadData;
- (id)initWithDirectMessageThread:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

