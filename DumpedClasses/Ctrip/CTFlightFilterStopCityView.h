//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightFilterPluginView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView;

@interface CTFlightFilterStopCityView : CTFlightFilterPluginView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_contentTableView;
    NSMutableArray *_selectStopCityArray;
    NSMutableArray *_stopCityModelArr;
    id <CTFlightFilterPluginViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CTFlightFilterPluginViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *stopCityModelArr; // @synthesize stopCityModelArr=_stopCityModelArr;
@property(retain, nonatomic) NSMutableArray *selectStopCityArray; // @synthesize selectStopCityArray=_selectStopCityArray;
@property(retain, nonatomic) UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
- (void).cxx_destruct;
- (void)updateSelectedValue;
- (void)deleteItemWithDataID:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)resetWithDefaultValue;
- (void)initTableViewWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 selectStopCityModelArray:(id)arg2 stopCityModelArr:(id)arg3 delegate:(id)arg4 enterType:(long long)arg5 pluginType:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

