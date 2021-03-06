//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ArticleMomentListViewBase.h"

#import "ArticleMomentUserIntroViewDelegate.h"
#import "AuthorityViewControllerDelegate.h"
#import "BlockUserManagerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class ArticleMomentManager, ArticleMomentUserIntroView, BlockUserManager, NSString, SSThemedButton, SSUserModel, UIActivityIndicatorView, UIButton;

@interface ArticleMomentProfileView : ArticleMomentListViewBase <UIActionSheetDelegate, UIAlertViewDelegate, ArticleMomentUserIntroViewDelegate, AuthorityViewControllerDelegate, BlockUserManagerDelegate>
{
    _Bool _isFirtstShowMessage;
    _Bool _isAccountUser;
    NSString *_from;
    SSUserModel *_userModel;
    ArticleMomentManager *_manager;
    UIButton *_backButton;
    ArticleMomentUserIntroView *_introHeaderView;
    SSThemedButton *_actionButton;
    UIActivityIndicatorView *_indicator;
    BlockUserManager *_blockUserManager;
}

@property(retain, nonatomic) BlockUserManager *blockUserManager; // @synthesize blockUserManager=_blockUserManager;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) SSThemedButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) ArticleMomentUserIntroView *introHeaderView; // @synthesize introHeaderView=_introHeaderView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) ArticleMomentManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) SSUserModel *userModel; // @synthesize userModel=_userModel;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)blockUserManager:(id)arg1 unblockResult:(_Bool)arg2 unblockedUserID:(id)arg3 error:(id)arg4 errorTip:(id)arg5;
- (void)blockUserManager:(id)arg1 blocResult:(_Bool)arg2 blockedUserID:(id)arg3 error:(id)arg4 errorTip:(id)arg5;
- (void)stopIndicatorAnimation;
- (void)startIndicatorAnimation;
- (void)showLoginView;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)willAppear;
- (void)updateFriendUser:(id)arg1 introView:(id)arg2;
- (void)_updateUserBlockStatusWithArticleFriend:(id)arg1;
- (id)impressionKeyName;
- (id)currentUmentEventName;
- (_Bool)notifyBarCouldShow;
- (int)fromSource;
- (void)backButtonClicked;
- (unsigned long long)sourceType;
- (id)currentUserID;
- (id)currentManager;
- (void)refreshHeaderView;
- (void)actionButtonClicked;
- (double)tipCellHeight;
- (void)userNameChanged:(id)arg1;
- (void)descriptionChanged:(id)arg1;
- (void)avatarChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 userModel:(id)arg2 extraTracks:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

