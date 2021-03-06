//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WPBaseDiscountViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView, WPShowPayAssistManager, WPVCardModel;
@protocol WPVCardViewControllerDelegate;

@interface WPShowVCardViewController : WPBaseDiscountViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <WPVCardViewControllerDelegate> _delegate;
    UITableView *_tableView;
    WPShowPayAssistManager *_payManager;
    WPVCardModel *_tmpSelectedVCardModel;
    NSMutableArray *_sectionArray;
    NSMutableArray *_validVCardArray;
    NSMutableArray *_invalidVCardArray;
}

@property(retain, nonatomic) NSMutableArray *invalidVCardArray; // @synthesize invalidVCardArray=_invalidVCardArray;
@property(retain, nonatomic) NSMutableArray *validVCardArray; // @synthesize validVCardArray=_validVCardArray;
@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(retain, nonatomic) WPVCardModel *tmpSelectedVCardModel; // @synthesize tmpSelectedVCardModel=_tmpSelectedVCardModel;
@property(retain, nonatomic) WPShowPayAssistManager *payManager; // @synthesize payManager=_payManager;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WPVCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectedVCardWithModel:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupTableViews;
- (void)submitButtonDidClick:(id)arg1;
- (id)titleForHeaderView;
- (id)titleForFooterView;
- (void)setupViewsInContentView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithPayManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

