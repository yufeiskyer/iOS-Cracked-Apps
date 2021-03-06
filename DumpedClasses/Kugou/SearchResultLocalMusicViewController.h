//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGMusicTableCellPlayStateDelegate.h"
#import "KGMusicTableViewAdapterDataSource.h"
#import "KGMusicTableViewAdapterDelegate.h"

@class KGMusicTableViewAdapter, NSArray, NSString, UIView;

@interface SearchResultLocalMusicViewController : KGViewController <KGMusicTableViewAdapterDataSource, KGMusicTableViewAdapterDelegate, KGMusicTableCellPlayStateDelegate>
{
    NSString *_currKey;
    NSArray *_resultArr;
    id <SearchResultLocalMusicDelegate> _searchResultLocalMusicDelegate;
    KGMusicTableViewAdapter *_tableViewAdapter;
    UIView *_noContentView;
}

@property(retain, nonatomic) UIView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) KGMusicTableViewAdapter *tableViewAdapter; // @synthesize tableViewAdapter=_tableViewAdapter;
@property(nonatomic) __weak id <SearchResultLocalMusicDelegate> searchResultLocalMusicDelegate; // @synthesize searchResultLocalMusicDelegate=_searchResultLocalMusicDelegate;
- (void).cxx_destruct;
- (void)showLocalResultWithSearchText:(id)arg1;
- (void)refreshTableview;
- (void)filterLocalMusicWithKeyStr:(id)arg1;
- (_Bool)isMusicTableCellPlayingState:(id)arg1;
- (void)menuActionWithSongInfo:(id)arg1;
- (void)addMusicActionWithSongInfo:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updataRowInfosDic:(id)arg1 needRefresh:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 menuArrayWidthForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 isCheckBoxStyle:(_Bool)arg3;
- (void)showNoContentView:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

