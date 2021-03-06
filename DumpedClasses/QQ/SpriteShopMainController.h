//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SpriteWebViewBaseController.h"

#import "AVAudioPlayerDelegate.h"
#import "SpriteActionShowViewDelegate.h"
#import "SpriteViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSString, NSTimer, SpriteActionModle, SpriteView, UIActivityIndicatorView, UIButton;

@interface SpriteShopMainController : SpriteWebViewBaseController <SpriteViewDelegate, SpriteActionShowViewDelegate, UIAlertViewDelegate, AVAudioPlayerDelegate>
{
    UIButton *_bubbleBtn;
    _Bool _changeRoleCallback;
    _Bool _firstInitCallback;
    _Bool _previewCallback;
    _Bool _setupCallback;
    _Bool _previewActionCallback;
    SpriteView *_spriteView;
    NSTimer *_bubbleTimer;
    SpriteActionModle *_curPlayingAction;
    int _spriteNavibarColor;
    double _spriteX;
    double _spriteY;
    double _currentRate;
    UIActivityIndicatorView *_spriteLoadingView;
    NSTimer *_timeoutTimer;
    UIButton *_leftItem;
    int _currentTap;
    int _currentRoleSex;
    long long box_ownerUin;
    int box_entry;
    _Bool _isLoadSucceed;
    _Bool _ispreviewOnFrame;
    int _previewActionId;
    double _previewFrameTime;
    _Bool _isShowBubble;
    int _luaType;
    NSString *_shareImageUrl;
    long long _currentDressBelongUin;
    NSMutableArray *_hotEventModels;
    NSString *_greetingWording;
    _Bool _isShowAIHot;
    _Bool _hasExitFromParent;
    _Bool _isShowSpriteAiView;
    int _openBoxEntry;
    long long _boxOwnerUin;
}

@property(nonatomic) _Bool isShowSpriteAiView; // @synthesize isShowSpriteAiView=_isShowSpriteAiView;
@property(nonatomic) long long boxOwnerUin; // @synthesize boxOwnerUin=_boxOwnerUin;
@property(nonatomic) int openBoxEntry; // @synthesize openBoxEntry=_openBoxEntry;
- (void)removeAINotification;
- (void)addAINotification;
- (void)spriteAISendMessageFailedNofity:(id)arg1;
- (void)spriteAIGetNewMessageNotify:(id)arg1;
- (void)jumpToWebview:(id)arg1;
- (_Bool)canShowAIGuide;
- (_Bool)isFirstUseAi;
- (void)resetSoundSetting;
- (void)handleHotEvent;
- (_Bool)dontPlaySayhi;
- (_Bool)hasHotPushMsg;
- (id)firstHotModelBelongInteract;
- (void)reloadAIHotEventData;
- (void)showAILogic;
- (void)showLuaSpriteShare:(id)arg1;
- (void)showShareFloatViewWithImageUrl:(id)arg1;
- (void)didFinishEditRetCode:(int)arg1 commitText:(id)arg2;
- (_Bool)isMicPhoneAccessable;
- (_Bool)isInAIWhiteList;
- (_Bool)canShowAI;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showRoleAlert;
- (void)onSpriteLongPressed:(id)arg1;
- (void)onApolloStateChanged:(id)arg1;
- (void)pluginUpdated:(id)arg1;
- (void)invokeLuaSpriteBox:(long long)arg1 entry:(int)arg2;
- (_Bool)openBoxWith:(long long)arg1 entry:(int)arg2;
- (void)spriteActionShowView:(id)arg1 didRemoveWithActionId:(long long)arg2;
- (void)spriteActionShowView:(id)arg1 didClickOpenButton:(id)arg2 actionId:(long long)arg3;
- (void)spriteActionShowViewDidClickOpenButton:(id)arg1 actionId:(long long)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 spriteView:(id)arg2 successfully:(_Bool)arg3;
- (void)spriteView:(id)arg1 bubbleDidFinishDownload:(long long)arg2 isSucc:(_Bool)arg3;
- (void)spriteView:(id)arg1 actionDidFinishDownload:(long long)arg2 isSucc:(_Bool)arg3;
- (void)spriteView:(id)arg1 actionDidFinishPlay:(CDStruct_6778d593)arg2 isSucc:(_Bool)arg3;
- (void)spriteView:(id)arg1 actionDidStartPlay:(long long)arg2 actionName:(id)arg3 isSucc:(_Bool)arg4;
- (void)spriteView:(id)arg1 roleAndDressDidFinishLoad:(_Bool)arg2 isDressSucc:(_Bool)arg3;
- (void)onSpriteBubbleClicked:(id)arg1;
- (void)onTouchspriteView:(id)arg1;
- (int)getBubbleIDWithContent:(id)arg1;
- (void)setButtonImg:(id)arg1;
- (void)showBubble:(id)arg1 willDismiss:(_Bool)arg2;
- (void)stopBubble;
- (_Bool)checkNetStatus;
- (void)leftSpriteBtnClicked;
- (void)bubbleLogic;
- (int)getPartnerSex;
- (void)stopSpriteLoading;
- (void)showLodingWithCenter:(struct CGPoint)arg1;
- (void)postPreviewOnFrameNotificaion:(_Bool)arg1;
- (void)postActionNotificaion:(_Bool)arg1;
- (void)postNotificationIsRoleSucc:(_Bool)arg1 IsClothesSucc:(_Bool)arg2;
- (void)JSSetBackViewVisibility:(_Bool)arg1;
- (void)JSChangeRole:(id)arg1 dressids:(id)arg2;
- (_Bool)JSSayhi;
- (void)JSSetup:(id)arg1;
- (void)previewAction;
- (void)previewActionWithNeedRestPosition:(_Bool)arg1;
- (_Bool)needResetPositon:(id)arg1 currentQuery:(id)arg2;
- (_Bool)isSelfUinRole;
- (void)JSPreviewAction:(id)arg1;
- (void)JSPreviewOnFrame:(id)arg1;
- (void)snapshot:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (id)takeSnapshotOfGlView;
- (void)JSDownloadImageOnFrame:(id)arg1;
- (void)JSPreview:(id)arg1;
- (void)JSInitAvatar:(id)arg1 y:(id)arg2 rate:(id)arg3 uin:(id)arg4 type:(id)arg5 roleId:(id)arg6 dressids:(id)arg7 tab:(id)arg8 greeting:(id)arg9;
- (void)JSOpenDiyActionFloatView:(id)arg1;
- (id)shotImage;
- (void)fetchRoleIdAndDressIdsWithUin:(id)arg1;
- (void)updateSpriteWithRoleId:(long long)arg1 dressids:(id)arg2;
- (void)resetTwoInstanceToInitState:(CDUnknownBlockType)arg1;
- (void)playDoubleAction:(long long)arg1 peerSex:(int)arg2;
- (void)updateSpritePositionInfo:(id)arg1 y:(id)arg2 rate:(id)arg3;
- (void)setCustomNavBarColor:(int)arg1;
- (struct CGRect)webViewRectByStyleAndOrientation;
- (void)UIConfig;
- (void)cancelBubbleDanmu;
- (void)dealloc;
- (void)resetRole;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)activeApp;
- (void)dataInit;
- (id)initWithUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

