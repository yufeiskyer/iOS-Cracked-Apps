//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBasePOISearchViewController.h"

#import "TRPOISearchDataSourceDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DiDiPOIEntityModel, NSMutableArray, NSString, TRCommonAddressView, TRPoiSearchBar, TRPoiSearchData, TRPoiSearchDataSource, UIImage;

@interface TRPOISearchViewController : TRBasePOISearchViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, TRPOISearchDataSourceDelegate>
{
    _Bool _hideHomeAndCompany;
    _Bool _poiExceptionToggle;
    _Bool _displayTotalCities;
    _Bool _enableSwitchCity;
    _Bool _showCityListFirst;
    _Bool _isTransparentBg;
    _Bool _popViewControllerAnimated;
    _Bool _isRecommending;
    _Bool _isEnterCustomDefine;
    int _pageName;
    NSString *_searchAddressPlaceHolder;
    id <ONECityListProtocol> _cityListDataSource;
    UIImage *_backgroudImage;
    DiDiPOIEntityModel *_shunfengceFromPoiModel;
    long long _poiType;
    unsigned long long _poiOrderType;
    long long _poiStatus;
    long long _productLine;
    TRPoiSearchDataSource *_poiDataSource;
    TRPoiSearchBar *_poiSearchBar;
    NSMutableArray *_poiDataList;
    NSMutableArray *_recommendDataList;
    CDUnknownBlockType _selectBlock;
    CDUnknownBlockType _cancelBlock;
    NSString *_from;
    NSString *_to;
    NSString *_cityId;
    NSString *_cityName;
    NSString *_setupTime;
    TRPoiSearchData *_searchData;
    TRCommonAddressView *_headerView;
    NSString *_queryString;
}

+ (void)transitionWithType:(id)arg1 WithSubtype:(id)arg2 withDelegate:(id)arg3 ForView:(id)arg4;
+ (void)pushPOISearchViewController:(id)arg1 intoParentVC:(id)arg2;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(nonatomic) _Bool isEnterCustomDefine; // @synthesize isEnterCustomDefine=_isEnterCustomDefine;
@property(retain, nonatomic) TRCommonAddressView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) TRPoiSearchData *searchData; // @synthesize searchData=_searchData;
@property(retain, nonatomic) NSString *setupTime; // @synthesize setupTime=_setupTime;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSString *to; // @synthesize to=_to;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(retain, nonatomic) NSMutableArray *recommendDataList; // @synthesize recommendDataList=_recommendDataList;
@property(retain, nonatomic) NSMutableArray *poiDataList; // @synthesize poiDataList=_poiDataList;
@property(retain, nonatomic) TRPoiSearchBar *poiSearchBar; // @synthesize poiSearchBar=_poiSearchBar;
@property(retain, nonatomic) TRPoiSearchDataSource *poiDataSource; // @synthesize poiDataSource=_poiDataSource;
@property(nonatomic) _Bool isRecommending; // @synthesize isRecommending=_isRecommending;
@property(nonatomic) long long productLine; // @synthesize productLine=_productLine;
@property(nonatomic) long long poiStatus; // @synthesize poiStatus=_poiStatus;
@property(nonatomic) unsigned long long poiOrderType; // @synthesize poiOrderType=_poiOrderType;
@property(nonatomic) long long poiType; // @synthesize poiType=_poiType;
@property(retain, nonatomic) DiDiPOIEntityModel *shunfengceFromPoiModel; // @synthesize shunfengceFromPoiModel=_shunfengceFromPoiModel;
@property(nonatomic) _Bool popViewControllerAnimated; // @synthesize popViewControllerAnimated=_popViewControllerAnimated;
@property(nonatomic) _Bool isTransparentBg; // @synthesize isTransparentBg=_isTransparentBg;
@property(retain, nonatomic) UIImage *backgroudImage; // @synthesize backgroudImage=_backgroudImage;
@property(nonatomic) int pageName; // @synthesize pageName=_pageName;
@property(nonatomic) _Bool showCityListFirst; // @synthesize showCityListFirst=_showCityListFirst;
@property(nonatomic) _Bool enableSwitchCity; // @synthesize enableSwitchCity=_enableSwitchCity;
@property(nonatomic) _Bool displayTotalCities; // @synthesize displayTotalCities=_displayTotalCities;
@property(nonatomic) __weak id <ONECityListProtocol> cityListDataSource; // @synthesize cityListDataSource=_cityListDataSource;
@property(nonatomic) _Bool poiExceptionToggle; // @synthesize poiExceptionToggle=_poiExceptionToggle;
@property(nonatomic) _Bool hideHomeAndCompany; // @synthesize hideHomeAndCompany=_hideHomeAndCompany;
@property(retain, nonatomic) NSString *searchAddressPlaceHolder; // @synthesize searchAddressPlaceHolder=_searchAddressPlaceHolder;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)doExitAnimation;
- (void)pushintoParentVC:(id)arg1;
- (id)selectSubPoiWillAgainSetPOIModel:(id)arg1;
- (id)responseToSelectPoiEntiyModel:(id)arg1;
- (void)addObjectsFromArray:(id)arg1 souceType:(id)arg2 query:(id)arg3 searchid:(id)arg4;
- (_Bool)enableOpenInput;
- (_Bool)isEmptyCellWithIndexPath;
- (void)selectInputText;
- (id)entityModelForSearchText;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectPOI:(id)arg1 row:(int)arg2 rankSub:(int)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)POIExceptionHandlerWithError:(id)arg1 showErrorTips:(_Bool)arg2;
- (void)showErrorTips:(_Bool)arg1;
- (void)loadBackUpPOI:(_Bool)arg1;
- (void)showSuggestList:(_Bool)arg1;
- (void)updateRecommendAndHistoryList;
- (void)callRecommandRequest:(_Bool)arg1;
- (void)showEndAddressRecommondPOIList;
- (void)showRecommendAndHistoryList:(_Bool)arg1;
- (void)loadRecommandFromHistory;
- (void)companyAddressSet;
- (void)homeAddressSet;
- (id)createTableHeaderView;
- (void)needTableviewHearder;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)inputTextChange:(id)arg1;
- (_Bool)isStartAddress;
- (_Bool)isSugPage;
- (void)initPOISearchBar;
- (void)viewDidLoad;
- (_Bool)containSearchContent;
- (void)sendFavGetsRequest;
- (int)getQtype;
- (void)setCityID:(id)arg1 andCityName:(id)arg2;
- (void)setCurrenCityModel;
- (void)loadSuggestPOIAndUpdateTableView;
- (void)dataSourceDidLoadedPOICaches:(id)arg1;
- (void)createTRDataSource;
- (void)internalInitWithPoiType:(long long)arg1 productLine:(long long)arg2 orderType:(unsigned long long)arg3 poiSelect:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5 pageType:(int)arg6;
- (id)initWithPoiType:(long long)arg1 productLine:(long long)arg2 orderType:(unsigned long long)arg3 poiSelect:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5 pageType:(int)arg6 queryString:(id)arg7;
- (id)initWithPoiType:(long long)arg1 productLine:(long long)arg2 orderType:(unsigned long long)arg3 poiSelect:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5 pageType:(int)arg6;
- (id)initWithPoiType:(long long)arg1 productLine:(long long)arg2 orderType:(unsigned long long)arg3 poiSelect:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

