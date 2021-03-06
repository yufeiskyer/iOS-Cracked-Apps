//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "CellLiveProgramDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CellLiveProgram, FXLiveHomeVM, KGLiveProgramListVLL, NSMutableArray, NSString, UITableView;

@interface KGLiveProgramNewController : KGViewController <UITableViewDelegate, UITableViewDataSource, CellLiveProgramDelegate>
{
    int _pageNo;
    KGLiveProgramListVLL *_programVll;
    NSString *_str;
    UITableView *_tableView;
    double _scale;
    NSMutableArray *_programListData;
    NSMutableArray *_listData;
    FXLiveHomeVM *_homeVm;
    CellLiveProgram *_cellLiveProgram;
}

@property(retain, nonatomic) CellLiveProgram *cellLiveProgram; // @synthesize cellLiveProgram=_cellLiveProgram;
@property(retain, nonatomic) FXLiveHomeVM *homeVm; // @synthesize homeVm=_homeVm;
@property(retain, nonatomic) NSMutableArray *listData; // @synthesize listData=_listData;
@property(retain, nonatomic) NSMutableArray *programListData; // @synthesize programListData=_programListData;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *str; // @synthesize str=_str;
@property(retain, nonatomic) KGLiveProgramListVLL *programVll; // @synthesize programVll=_programVll;
- (void).cxx_destruct;
- (void)showSuccessWithStatus:(id)arg1;
- (void)showErrorWithStatus:(id)arg1;
- (void)showWithStatus:(id)arg1;
- (void)reloadtableView;
- (_Bool)isThisYear:(long long)arg1;
- (void)checkIsVip:(CDUnknownBlockType)arg1;
- (void)successSubcribed:(id)arg1;
- (void)toSubcrib:(id)arg1;
- (void)reConnectEvent;
- (long long)showPlayBarWay;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)enterLiveRoom:(id)arg1;
- (void)openH5Page:(id)arg1;
- (id)transformWithModel:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)mergeSameYearDayData;
- (void)KGUsingControllerState:(int)arg1;
- (void)viewManagerChangeState:(int)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

