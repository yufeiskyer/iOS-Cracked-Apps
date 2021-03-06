//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class KGThemeLabel, NSMutableArray, NSString, UITableView, UIView;

@interface KGSelectSingerViewController : KGViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIView *_noSingerTipView;
    UITableView *_singerListsTable;
    KGThemeLabel *_singerCountLabel;
    NSMutableArray *_selectedSingerArray;
    CDUnknownBlockType _returnDataBlock;
    CDUnknownBlockType _finishBlock;
}

@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) CDUnknownBlockType returnDataBlock; // @synthesize returnDataBlock=_returnDataBlock;
@property(retain, nonatomic) NSMutableArray *selectedSingerArray; // @synthesize selectedSingerArray=_selectedSingerArray;
@property(retain, nonatomic) KGThemeLabel *singerCountLabel; // @synthesize singerCountLabel=_singerCountLabel;
@property(retain, nonatomic) UITableView *singerListsTable; // @synthesize singerListsTable=_singerListsTable;
@property(retain, nonatomic) UIView *noSingerTipView; // @synthesize noSingerTipView=_noSingerTipView;
- (void).cxx_destruct;
- (void)deleteBtnClicked:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)setSingerCount:(long long)arg1;
- (void)showNoSingerError;
- (void)setVCTitle:(long long)arg1;
- (long long)showPlayBarWay;
- (void)KGUsingControllerState:(int)arg1;
- (void)viewDidLoad;
- (id)initWithSingerArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

