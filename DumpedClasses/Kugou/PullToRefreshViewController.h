//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "PullToRefreshProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, PullToRefreshView, UITableView;

@interface PullToRefreshViewController : KGViewController <PullToRefreshProtocol, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isFirstLoadData;
    _Bool _noTotalNum;
    int _type;
    int _initType;
    NSMutableArray *_dataArray;
    UITableView *_tableView;
    PullToRefreshView *_pullRefreshView;
    unsigned long long _lastPageNum;
    unsigned long long _pageSize;
    unsigned long long _lastPageSize;
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _errorCallback;
}

@property(copy, nonatomic) CDUnknownBlockType errorCallback; // @synthesize errorCallback=_errorCallback;
@property(copy, nonatomic) CDUnknownBlockType successCallback; // @synthesize successCallback=_successCallback;
@property(nonatomic) _Bool noTotalNum; // @synthesize noTotalNum=_noTotalNum;
@property(nonatomic) int initType; // @synthesize initType=_initType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool isFirstLoadData; // @synthesize isFirstLoadData=_isFirstLoadData;
@property(nonatomic) unsigned long long lastPageSize; // @synthesize lastPageSize=_lastPageSize;
@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) unsigned long long lastPageNum; // @synthesize lastPageNum=_lastPageNum;
@property(retain, nonatomic) PullToRefreshView *pullRefreshView; // @synthesize pullRefreshView=_pullRefreshView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)refreshUIWithErrorMessage:(id)arg1;
- (void)refreshUIWithList:(id)arg1;
- (void)handlePullToRefreshWithView:(id)arg1 AndType:(int)arg2;
- (void)showFirstLoadingWithMessage:(id)arg1;
- (void)retrieveData;
- (void)initialData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

