//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UINavigationBar, UITableView, UIView;

@interface WKGeneralSettingsViewController : WKBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_badgeView;
    UINavigationBar *_navigationBar;
    _Bool _widgetGuideChick;
    UITableView *_tableView;
    NSMutableArray *_settingComponents;
}

@property(nonatomic) _Bool widgetGuideChick; // @synthesize widgetGuideChick=_widgetGuideChick;
@property(retain, nonatomic) NSMutableArray *settingComponents; // @synthesize settingComponents=_settingComponents;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)cleanCache;
- (void)switchClick:(id)arg1;
- (_Bool)isCheckSniffer;
- (_Bool)isJumpFeedsOpen;
- (id)cellForSettingComponent:(id)arg1 tableView:(id)arg2;
- (id)cellForSettingComponent:(id)arg1 identifier:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

