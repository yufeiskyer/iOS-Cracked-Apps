//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SpritePanelTabItemDelegate.h"

@class NSMutableArray, NSString, UIButton, UIScrollView;

@interface SpritePanelTabBar : UIView <SpritePanelTabItemDelegate>
{
    NSMutableArray *_itemList;
    UIScrollView *_scrollView;
    id <SpritePanelTabBarDelegate> _tapDelegate;
    UIButton *_shopButton;
}

@property(readonly, nonatomic) UIButton *shopButton; // @synthesize shopButton=_shopButton;
@property(nonatomic) id <SpritePanelTabBarDelegate> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
- (void)updateSelectedStateWithPackId:(int)arg1;
- (void)didSelectedSpriteTabItem:(id)arg1;
- (_Bool)hasGameTabBar;
- (void)removeAllItems;
- (void)addItem:(id)arg1;
- (void)reloadWithPanelModel:(id)arg1;
- (void)layoutItems;
- (void)dealloc;
- (void)setShopImage:(id)arg1;
- (void)showRedPoint;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
