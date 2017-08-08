//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class KGLLiveShineRankVm, NSArray, NSString, UITableView, UIView;

@interface KGLLiveRoomShineRankVll : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    long long _concertId;
    UIView *_view;
    UITableView *_tableView;
    KGLLiveShineRankVm *_listVm;
    NSArray *_listData;
}

@property(copy, nonatomic) NSArray *listData; // @synthesize listData=_listData;
@property(retain, nonatomic) KGLLiveShineRankVm *listVm; // @synthesize listVm=_listVm;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) long long concertId; // @synthesize concertId=_concertId;
- (void).cxx_destruct;
- (void)installTableView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)finishLoadData;
- (void)beginAutoUpdate;
- (void)updateView;
- (void)dealloc;
- (void)destory;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
