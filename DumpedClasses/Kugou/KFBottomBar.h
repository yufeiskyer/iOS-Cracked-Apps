//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KFBottomBarItemDelegate.h"

@class KFBottomBarItem, NSArray, NSString;

@interface KFBottomBar : UIView <KFBottomBarItemDelegate>
{
    _Bool _markedHidden;
    _Bool _isShow;
    KFBottomBarItem *_chatItem;
    KFBottomBarItem *_followItem;
    KFBottomBarItem *_songInviteItem;
    KFBottomBarItem *_defriendItem;
    id <KFBottomBarDelegate> _delegate;
    long long _barType;
    NSArray *_bottomArray;
}

+ (id)bottomBarWithType:(long long)arg1;
@property(retain, nonatomic) NSArray *bottomArray; // @synthesize bottomArray=_bottomArray;
@property(nonatomic) long long barType; // @synthesize barType=_barType;
@property(nonatomic) __weak id <KFBottomBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KFBottomBarItem *defriendItem; // @synthesize defriendItem=_defriendItem;
@property(retain, nonatomic) KFBottomBarItem *songInviteItem; // @synthesize songInviteItem=_songInviteItem;
@property(retain, nonatomic) KFBottomBarItem *followItem; // @synthesize followItem=_followItem;
@property(retain, nonatomic) KFBottomBarItem *chatItem; // @synthesize chatItem=_chatItem;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (void)show:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configItemForKFBottomBarItem:(id)arg1 byKFBottomBarItem:(unsigned long long)arg2;
- (void)clickByKFBottomBarItem:(id)arg1;
- (void)dismiss;
- (void)refreshUserBottomBar;
- (id)initWithType:(long long)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

