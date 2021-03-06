//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, QYChatRoomPageView, QYChatRoomPropCellPanelView, QYChatRoomShadowImage, QYCustomKeyboardView, QYKeyAccessoryView, UIButton, UIImageView, UILabel, UIScrollView;
@protocol QYChatRoomPropViewDelegate;

@interface QYChatRoomPropView : UIView <UIScrollViewDelegate>
{
    UIView *titleView;
    UIScrollView *scrollView;
    QYChatRoomPageView *pageView;
    QYChatRoomPropCellPanelView *panelView;
    UIView *backView;
    _Bool isMoreStar;
    _Bool isFullMode;
    UIButton *closeBtn;
    UIView *bottomView;
    UILabel *starTitle;
    UIButton *propCount;
    QYChatRoomShadowImage *starHeadImgBack;
    UIImageView *starHeadImg;
    UILabel *propCost;
    UILabel *balance;
    UIButton *presentBtn;
    UIImageView *notEnough;
    long long selectIndex;
    NSArray *modelArr;
    double balLeft;
    double shouldChargeLeft;
    NSMutableArray *_propCellListArr;
    id <QYChatRoomPropViewDelegate> _delegate;
    NSArray *_assyKeyTextArr;
    QYCustomKeyboardView *_harfCustomKeyboard;
    QYKeyAccessoryView *_harfCustomKeyAccessory;
    QYCustomKeyboardView *_fullCustomKeyboard;
    QYKeyAccessoryView *_fullCustomKeyAccessory;
}

@property(retain, nonatomic) QYKeyAccessoryView *fullCustomKeyAccessory; // @synthesize fullCustomKeyAccessory=_fullCustomKeyAccessory;
@property(retain, nonatomic) QYCustomKeyboardView *fullCustomKeyboard; // @synthesize fullCustomKeyboard=_fullCustomKeyboard;
@property(retain, nonatomic) QYKeyAccessoryView *harfCustomKeyAccessory; // @synthesize harfCustomKeyAccessory=_harfCustomKeyAccessory;
@property(retain, nonatomic) QYCustomKeyboardView *harfCustomKeyboard; // @synthesize harfCustomKeyboard=_harfCustomKeyboard;
@property(retain, nonatomic) NSArray *assyKeyTextArr; // @synthesize assyKeyTextArr=_assyKeyTextArr;
@property(nonatomic) __weak id <QYChatRoomPropViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *propCellListArr; // @synthesize propCellListArr=_propCellListArr;
- (void).cxx_destruct;
- (void)setProgressBarHidden:(_Bool)arg1 freePropModel:(id)arg2;
- (void)resetPropCountNum;
- (void)selectFreePropCountByModel:(id)arg1;
- (void)updateFreePropProgressBarByDic:(id)arg1;
- (void)setFreePropNumByModel:(id)arg1;
- (void)dealWithPropCount;
- (void)clickCancel;
- (void)clickDone;
- (void)changeTextField:(unsigned long long)arg1 text:(id)arg2;
- (void)changeTextField:(id)arg1;
- (void)rollBackByAinmationBlock;
- (void)keyboardRollbackByAnimationDuration:(double)arg1;
- (void)propupByAnimationBlock;
- (void)keyboardPopupByAnimationDuration:(double)arg1;
- (void)propCountFullActoin:(id)arg1;
- (void)propCountHalfAction:(id)arg1;
- (void)congfigPageType:(id)arg1;
- (void)propViewHide;
- (void)payAct;
- (void)calculateBalWhenShowView;
- (_Bool)calculatePay;
- (void)updateAccountViewByIsTrue:(_Bool)arg1;
- (void)updatePropCountTxtViewByIsTrue:(_Bool)arg1;
- (void)congfigBalance:(id)arg1;
- (void)configTitle:(id)arg1 Image:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)presentAct;
- (void)selectPropAct:(id)arg1;
- (void)configFullListDataByArr:(id)arg1;
- (void)configHalfListDataByArr:(id)arg1;
- (id)layoutPayButton:(id)arg1;
- (void)configFullSubView;
- (void)configHalfSubViewByFrame:(struct CGRect)arg1;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect)arg1 isFullType:(_Bool)arg2 isMoreStar:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

