//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTHotelChatMessageActionDelegate.h"
#import "CTHotelChatServiceDelegate.h"
#import "CTHotelChatSystemActionDelegate.h"
#import "CTTableViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTHotelChatCacheBean, CTHotelChatCommentEntranceView, CTHotelChatCommentView, CTHotelChatInputView, CTHotelChatManager, CTHotelChatServiceView, CTHotelChatVoiceView, CTHotelChatWaitingView, CTTableView, NSString, NSTimer, UIBarButtonItem, UIView;

@interface CTHotelChatRoomViewController : CTRootViewController <UITableViewDelegate, UITableViewDataSource, CTTableViewDelegate, CTHotelChatMessageActionDelegate, UIActionSheetDelegate, UIScrollViewDelegate, CTHotelChatServiceDelegate, UIAlertViewDelegate, CTHotelChatSystemActionDelegate>
{
    _Bool isGoToRN;
    _Bool _isFetchingHistory;
    _Bool _isKeyboardUp;
    _Bool _hasChatStarted;
    _Bool _isNeedScrollLast;
    _Bool _isVoiceStop;
    CTHotelChatCacheBean *_chatCacheBean;
    UIView *_infoView;
    CTTableView *_chatTableView;
    CTHotelChatInputView *_inputView;
    CTHotelChatManager *_chatManager;
    CTHotelChatWaitingView *_waitingView;
    CTHotelChatServiceView *_serviceView;
    NSTimer *_refreshTimer;
    double _keyboardHeight;
    double _messageHeight;
    NSString *_strPhone;
    double _maxContentHeight;
    long long _keyType;
    NSTimer *_timer;
    CTHotelChatVoiceView *_voiceView;
    CTHotelChatCommentEntranceView *_commentView;
    CTHotelChatCommentView *_commetView;
    UIBarButtonItem *_btnCloseSession;
    UIBarButtonItem *_btnUseChange;
}

@property(retain, nonatomic) UIBarButtonItem *btnUseChange; // @synthesize btnUseChange=_btnUseChange;
@property(retain, nonatomic) UIBarButtonItem *btnCloseSession; // @synthesize btnCloseSession=_btnCloseSession;
@property(nonatomic) _Bool isVoiceStop; // @synthesize isVoiceStop=_isVoiceStop;
@property(nonatomic) __weak CTHotelChatCommentView *commetView; // @synthesize commetView=_commetView;
@property(retain, nonatomic) CTHotelChatCommentEntranceView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) CTHotelChatVoiceView *voiceView; // @synthesize voiceView=_voiceView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long keyType; // @synthesize keyType=_keyType;
@property(nonatomic) double maxContentHeight; // @synthesize maxContentHeight=_maxContentHeight;
@property(nonatomic) _Bool isNeedScrollLast; // @synthesize isNeedScrollLast=_isNeedScrollLast;
@property(nonatomic) _Bool hasChatStarted; // @synthesize hasChatStarted=_hasChatStarted;
@property(nonatomic) _Bool isKeyboardUp; // @synthesize isKeyboardUp=_isKeyboardUp;
@property(retain, nonatomic) NSString *strPhone; // @synthesize strPhone=_strPhone;
@property(nonatomic) double messageHeight; // @synthesize messageHeight=_messageHeight;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(nonatomic) _Bool isFetchingHistory; // @synthesize isFetchingHistory=_isFetchingHistory;
@property(retain, nonatomic) CTHotelChatServiceView *serviceView; // @synthesize serviceView=_serviceView;
@property(retain, nonatomic) CTHotelChatWaitingView *waitingView; // @synthesize waitingView=_waitingView;
@property(retain, nonatomic) CTHotelChatManager *chatManager; // @synthesize chatManager=_chatManager;
@property(retain, nonatomic) CTHotelChatInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) CTTableView *chatTableView; // @synthesize chatTableView=_chatTableView;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(nonatomic) __weak CTHotelChatCacheBean *chatCacheBean; // @synthesize chatCacheBean=_chatCacheBean;
- (void).cxx_destruct;
- (id)paramsString;
- (void)closeSessionPress;
- (void)useChangeButtonPress;
- (id)createCloseSessionBtn;
- (id)creatUseChangeBtn;
- (void)createRightNavBar;
- (void)systemActionHandler:(id)arg1;
- (void)hideCommentEntrance;
- (void)showCommentEntrance;
- (void)resetChatRoom:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendContent:(id)arg1;
- (void)cancelKeyNotification;
- (void)keyboardDismiss;
- (void)keyboardHeightChanged:(id)arg1;
- (_Bool)fileExistAtPath:(id)arg1;
- (void)stopAudioAnimating;
- (void)playAudioWithUrl:(id)arg1 chatModel:(id)arg2 isClick:(_Bool)arg3;
- (void)clickPlayAudio:(id)arg1 voiceView:(id)arg2 isClick:(_Bool)arg3;
- (void)clickChooseOrder;
- (void)clickCommentCell:(long long)arg1 userId:(id)arg2 msgId:(id)arg3 sessionId:(long long)arg4;
- (void)showCommentOpSelView;
- (void)gotoCommentSelView;
- (void)selCommentOp;
- (void)updateCommentBtnStatus;
- (void)getCommentStatus;
- (void)clickLinkText:(id)arg1;
- (void)copyNumberAction:(id)arg1;
- (void)callTelAction:(id)arg1;
- (void)resendAction:(id)arg1;
- (void)goToRedDetail:(id)arg1;
- (void)clickServiceViewAction:(id)arg1;
- (void)clickIconAction:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickPhoneNumber:(id)arg1;
- (void)slideDowInputView;
- (void)slideUpInputView;
- (void)handTapGesture:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollOldContentSize:(struct CGSize)arg1 contentOffset:(struct CGPoint)arg2;
- (void)pullDownToRefreshData:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)chooseAnotherCP;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateWaitingView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateChatContent:(id)arg1 withLocalID:(id)arg2;
- (void)deleteMessage:(id)arg1;
- (void)createWaitingView;
- (void)chooseOp;
- (void)resetKeyboardHeight;
- (void)stretchTextViewFrame;
- (id)getRedNickName:(id)arg1;
- (void)sendGift:(id)arg1;
- (void)createInputView;
- (void)scrollLastRow;
- (void)backBarButtonClicked:(id)arg1;
- (void)customizeTableViewHeader;
- (void)createChatTableView;
- (void)creatServiceView;
- (void)createBackBtn;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)becomeActive;
- (void)viewWillAppear:(_Bool)arg1;
- (void)startPolling;
- (void)getOpStatus;
- (void)startChatServer:(_Bool)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)startChat;
- (void)udpateInputViewUI;
- (void)setCtripCacheBean:(id)arg1;
- (void)resetMsgState;
- (void)createCommentEntrance;
- (void)dealloc;
- (void)initBaseData;
- (void)initBaseView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

