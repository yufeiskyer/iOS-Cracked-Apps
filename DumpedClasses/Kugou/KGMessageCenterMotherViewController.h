//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGScrollManagerViewController.h"

@class KGMessageCenterViewController, KGThemeButton, UIButton, UIView;

@interface KGMessageCenterMotherViewController : KGScrollManagerViewController
{
    int _tabType;
    UIButton *_moreButton;
    UIView *_moreView;
    UIView *_moreMenuContentView;
    KGThemeButton *_clearBtn;
    KGThemeButton *_settingBtn;
    KGMessageCenterViewController *_notificationMsgVC;
}

+ (void)showMessageCenterViewContollerWithMsgType:(unsigned long long)arg1;
@property(retain, nonatomic) KGMessageCenterViewController *notificationMsgVC; // @synthesize notificationMsgVC=_notificationMsgVC;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) KGThemeButton *settingBtn; // @synthesize settingBtn=_settingBtn;
@property(retain, nonatomic) KGThemeButton *clearBtn; // @synthesize clearBtn=_clearBtn;
@property(retain, nonatomic) UIView *moreMenuContentView; // @synthesize moreMenuContentView=_moreMenuContentView;
@property(retain, nonatomic) UIView *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
- (void).cxx_destruct;
- (long long)currentPage;
- (long long)totalPageCount;
- (long long)showPlayBarWay;
- (void)getTheTabType;
- (void)settingButtonClick:(id)arg1;
- (void)operateAllCommonMsgToReadInDB;
- (void)clearButtonClick:(id)arg1;
- (void)backButtonClick:(id)arg1;
- (void)tapInMoreView:(id)arg1;
- (void)moreBtnPressed:(id)arg1;
- (void)initTopMoreView;
- (void)initViews;
- (void)calculateTabNum;
- (void)messageCenterChange:(id)arg1;
- (void)hideMessageCenterEntraceRedPoint;
- (void)KGUsingControllerState:(int)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithType:(int)arg1;
- (id)init;

@end

