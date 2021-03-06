//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLChatRoomVPMgrDataSource.h"
#import "QLTableCellUIFadeHelpDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, NSTimer, QLBanabaAlignmentGroupChannel, QLBanabaItem, QLLightBanabaCommentView, QLTableCellUIFadeHelper, UIButton, UIPanGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer, banabaTableView;

@interface QLBanabaTableView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, QLTableCellUIFadeHelpDelegate, QLChatRoomVPMgrDataSource>
{
    NSMutableArray *channels;
    NSTimer *playerTimer;
    QLBanabaItem *holdonMyselfBanabaItem;
    struct CGRect theRuleCanvasRect;
    struct CGRect theChannelAreaRect;
    unsigned long long _rowOfSpacerChannelCount;
    unsigned long long _rowOfNomalChannelCount;
    _Bool _showSpacerBanaba;
    _Bool _onlyFirstStartup;
    unsigned long long _currentBanabaType;
    struct CGPoint heraldBanabaChannelPoint;
    _Bool _needPerformance;
    _Bool _animateLock;
    int _spacerNum;
    struct CGRect _originFrame;
    _Bool _isBottomViewShowing;
    _Bool _isMoveUp;
    _Bool _isMoveRight;
    _Bool _willMoveRight;
    _Bool _isMovingUp;
    _Bool _isMovingDown;
    NSString *_puid;
    struct CGPoint lastPoint;
    struct CGPoint firstPoint;
    _Bool isPaned;
    int _rowNum;
    _Bool _isMoving;
    _Bool _willOpen;
    _Bool _userStoppedPlay;
    _Bool _deletedPreInsertDataSource;
    _Bool _tableViewDragging;
    _Bool _viewDidAppeared;
    id <QLBanabaWallViewDataSource> _dataSource;
    id <QLBanabaWallViewDelegate> _delegate;
    double _prepareTime;
    NSMutableArray *_theLastFlyingUprightGroup;
    banabaTableView *_banabaTableView;
    QLBanabaAlignmentGroupChannel *_theAlignmentGroupChannel;
    NSMutableArray *_theBanabaGroup;
    QLLightBanabaCommentView *_banabaCommentBtn;
    UIButton *_banabaBtn;
    unsigned long long _delayCheckHookStatus;
    UISwipeGestureRecognizer *_swipeGesture;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_panGesture;
    NSMutableArray *_lastSortValues;
    NSMutableArray *_lastLiveValues;
    QLBanabaItem *_holdonFirstBanabaItem;
    UIView *_baseView;
    NSMutableArray *_holdOnBanabaItems;
    NSMutableArray *_holdOnOPBanabaItems;
    QLTableCellUIFadeHelper *_cellFadeHelper;
    NSArray *_aryLastHiddenIndexes;
}

@property(readonly, nonatomic) _Bool viewDidAppeared; // @synthesize viewDidAppeared=_viewDidAppeared;
@property(nonatomic) _Bool tableViewDragging; // @synthesize tableViewDragging=_tableViewDragging;
@property(retain, nonatomic) NSArray *aryLastHiddenIndexes; // @synthesize aryLastHiddenIndexes=_aryLastHiddenIndexes;
@property(retain, nonatomic) QLTableCellUIFadeHelper *cellFadeHelper; // @synthesize cellFadeHelper=_cellFadeHelper;
@property(retain, nonatomic) NSMutableArray *holdOnOPBanabaItems; // @synthesize holdOnOPBanabaItems=_holdOnOPBanabaItems;
@property(retain, nonatomic) NSMutableArray *holdOnBanabaItems; // @synthesize holdOnBanabaItems=_holdOnBanabaItems;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) QLBanabaItem *holdonFirstBanabaItem; // @synthesize holdonFirstBanabaItem=_holdonFirstBanabaItem;
@property(retain, nonatomic) NSMutableArray *lastLiveValues; // @synthesize lastLiveValues=_lastLiveValues;
@property(retain, nonatomic) NSMutableArray *lastSortValues; // @synthesize lastSortValues=_lastSortValues;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeGesture; // @synthesize swipeGesture=_swipeGesture;
@property(nonatomic) unsigned long long delayCheckHookStatus; // @synthesize delayCheckHookStatus=_delayCheckHookStatus;
@property(nonatomic) _Bool deletedPreInsertDataSource; // @synthesize deletedPreInsertDataSource=_deletedPreInsertDataSource;
@property(retain, nonatomic) UIButton *banabaBtn; // @synthesize banabaBtn=_banabaBtn;
@property(retain, nonatomic) QLLightBanabaCommentView *banabaCommentBtn; // @synthesize banabaCommentBtn=_banabaCommentBtn;
@property(retain, nonatomic) NSMutableArray *theBanabaGroup; // @synthesize theBanabaGroup=_theBanabaGroup;
@property(retain, nonatomic) QLBanabaAlignmentGroupChannel *theAlignmentGroupChannel; // @synthesize theAlignmentGroupChannel=_theAlignmentGroupChannel;
@property(nonatomic) _Bool userStoppedPlay; // @synthesize userStoppedPlay=_userStoppedPlay;
@property(retain, nonatomic) banabaTableView *banabaTableView; // @synthesize banabaTableView=_banabaTableView;
@property(nonatomic) _Bool willOpen; // @synthesize willOpen=_willOpen;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(retain, nonatomic) NSMutableArray *theLastFlyingUprightGroup; // @synthesize theLastFlyingUprightGroup=_theLastFlyingUprightGroup;
@property(readonly, nonatomic) double prepareTime; // @synthesize prepareTime=_prepareTime;
@property(nonatomic) __weak id <QLBanabaWallViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <QLBanabaWallViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)moveOutBaseView;
- (void)cleanBanabaGroupResource:(id)arg1;
- (void)prepareADBanabaForView:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)getBottomPosition;
- (double)getTopPosition;
- (void)hideButton;
- (void)cancelHideButtonAfterDelay;
- (void)hideButtonAfterDelay;
- (_Bool)isBanabaButtonHidden;
- (void)updateBanabaSwitchButtonState:(_Bool)arg1;
- (void)showBanabaSwitchButton:(_Bool)arg1;
- (void)banabaButtonAction:(id)arg1;
- (void)removeFromSuperview;
- (void)setPlayUUID:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)shouldPanByFirst:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (void)didPan:(id)arg1;
- (void)didTap:(id)arg1;
- (void)didSwipe:(id)arg1;
- (id)getClickedCellWithLocation:(struct CGPoint)arg1;
- (void)SwipeRight:(_Bool)arg1;
- (void)SwipeLeft:(_Bool)arg1;
- (void)SwipeDown:(_Bool)arg1;
- (void)SwipeUp:(_Bool)arg1;
- (void)scrollTableToBottom:(id)arg1;
- (void)removeFirstRowAndScrollToBottom;
- (void)insertBanabaItem:(id)arg1;
- (void)pushFirstBanaba;
- (void)pushBanabaMessage:(id)arg1 atTimestamp:(id)arg2;
- (void)pushBanabaMessage:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)pauseContents;
- (void)hiddenContentsWithAnimate;
- (void)hiddenContents;
- (void)showContents;
- (void)resetTalbeViewMask;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)cleanBanabaAfterSeeking;
- (void)showContents:(_Bool)arg1;
- (void)delayShowContents:(_Bool)arg1;
- (void)complexIsseusMethos;
- (void)doSomethingWhileDragBegin;
- (void)doSomethingWhileDragEnd;
- (void)reallyDoSomethingWhileDragEnd;
- (_Bool)hostFeedShouldAutoHide;
- (_Bool)hostTableCtlIsDidAppeared;
- (_Bool)hostTableViewIsDragging;
- (void)hideCommonCellAfterDelay:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)changeAnimateStatus:(id)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)updateTimeDescription;
- (void)updateTimeDescriptionByLive;
- (void)updateTimeDescriptionByDefault;
- (_Bool)tryPlaySpacerBanabas:(id)arg1;
- (_Bool)couldReuseLabelByItem:(id)arg1;
- (_Bool)reuseLabelByItem:(id)arg1;
- (_Bool)checkBanabaQueueWillSafely;
- (_Bool)checkAndPushHoldOnItems;
- (_Bool)configureBanabaWithItem:(id)arg1;
- (void)nextTimeWillShowSpacerBanaba;
- (void)setHeraldBanabaFlyingUpOfDelayFinish;
- (void)setHeraldBanabaFlyingUpOfDefaultStatus;
- (_Bool)canPushBanabaHoldOnItem:(id)arg1;
- (id)getNextVoiceMsg:(id)arg1 ignoreMine:(_Bool)arg2;
- (_Bool)shouldAutoPlayNextVoice;
- (void)updateSpacerBanabaStatus;
- (void)cleanBanabaResourceDeeply;
- (void)cleanBanabaResource;
- (void)dealloc;
- (void)updateScrollViewMask:(id)arg1;
- (void)initMaskForScrollView:(id)arg1;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

