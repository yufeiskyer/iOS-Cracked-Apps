//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLNewBaseTableViewController.h"

#import "KKMediaPlayerTopViewControlProtocolEx.h"
#import "QLJumpObjectOpenUrlDelegate.h"
#import "QLMomentFriendListCellDelegate.h"
#import "QLMomentToolViewDelegate.h"
#import "TimelineEngineDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, QLMBProgressHUD, QLMomentToolView, QLUserCenterButton, UIButton, UILabel, UIView;

@interface QLMomentFriendListViewController : QLNewBaseTableViewController <KKMediaPlayerTopViewControlProtocolEx, QLMomentFriendListCellDelegate, QLMomentToolViewDelegate, QLJumpObjectOpenUrlDelegate, TimelineEngineDelegate>
{
    _Bool _shouldHideSectionIndex;
    QLMBProgressHUD *_hudView;
    _Bool _hasNewFriend;
    _Bool _needUpdateList;
    int _insertingRelationshipType;
    unsigned long long _listType;
    NSMutableArray *_contactArray;
    NSMutableArray *_keys;
    UIView *_footerButtonBgView;
    UILabel *_friendNumLabel;
    QLUserCenterButton *_tipsButton;
    UIButton *_priEditButton;
    NSMutableDictionary *_priUserDict;
    QLMomentToolView *_toolView;
    NSArray *_orignalContactItemList;
}

+ (_Bool)jumpMomentList;
+ (_Bool)jumpMomentGroup;
+ (_Bool)OpenJumpUrlWithobject;
@property(nonatomic) _Bool needUpdateList; // @synthesize needUpdateList=_needUpdateList;
@property(nonatomic) int insertingRelationshipType; // @synthesize insertingRelationshipType=_insertingRelationshipType;
@property(nonatomic) _Bool hasNewFriend; // @synthesize hasNewFriend=_hasNewFriend;
@property(retain, nonatomic) NSArray *orignalContactItemList; // @synthesize orignalContactItemList=_orignalContactItemList;
@property(retain, nonatomic) QLMomentToolView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) NSMutableDictionary *priUserDict; // @synthesize priUserDict=_priUserDict;
@property(retain, nonatomic) UIButton *priEditButton; // @synthesize priEditButton=_priEditButton;
@property(retain, nonatomic) QLUserCenterButton *tipsButton; // @synthesize tipsButton=_tipsButton;
@property(retain, nonatomic) UILabel *friendNumLabel; // @synthesize friendNumLabel=_friendNumLabel;
@property(retain, nonatomic) UIView *footerButtonBgView; // @synthesize footerButtonBgView=_footerButtonBgView;
@property(retain, nonatomic) NSMutableArray *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) NSMutableArray *contactArray; // @synthesize contactArray=_contactArray;
@property(nonatomic) unsigned long long listType; // @synthesize listType=_listType;
- (void).cxx_destruct;
- (void)momentToolView:(id)arg1 didSelectAtIndex:(long long)arg2;
- (void)momentFriendListCell:(id)arg1 didDeselectPerson:(id)arg2;
- (void)momentFriendListCell:(id)arg1 didSelectPerson:(id)arg2;
- (void)insertRelationshipDidSuccessNotification:(id)arg1;
- (void)qqLoginDidChangeNotification:(id)arg1;
- (void)wxLoginDidSuccessNotification:(id)arg1;
- (void)privacyDidChangeNotification:(id)arg1;
- (_Bool)shouldStopPlay;
- (void)tipsButtonClick;
- (id)freshFriendName:(id)arg1 Count:(int)arg2;
- (void)showEmpty:(_Bool)arg1;
- (void)engineDidFailed:(id)arg1;
- (void)engineDidFinishLoad:(id)arg1;
- (id)subtitleForEmpty;
- (id)imageForEmpty;
- (id)titleForEmpty;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)inviteQQFellows;
- (void)inviteWeixinFellows;
- (void)showHUDWithTip:(_Bool)arg1 tip:(id)arg2;
- (void)insertRelationship:(int)arg1;
- (void)tryToInsertRelationship:(int)arg1;
- (void)updatePrivacyStateAll:(id)arg1;
- (id)updateContactTable:(id)arg1;
- (id)pageDescription;
- (void)privacyEditDown:(id)arg1;
- (void)retryDown:(id)arg1;
- (void)startLoadFriendList:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
