//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MusicBaseCell.h"

@class KGThemeView, NSArray, NSMutableArray, UIView;

@interface KGMVMenuCell : MusicBaseCell
{
    NSArray *_menuArray;
    id _mvInfo;
    id <KGMVMenuCellDelegate> _delegate;
    NSMutableArray *_btnArray;
    KGThemeView *_bgContentBaseView;
    UIView *_bgContent;
}

@property(retain, nonatomic) UIView *bgContent; // @synthesize bgContent=_bgContent;
@property(retain, nonatomic) KGThemeView *bgContentBaseView; // @synthesize bgContentBaseView=_bgContentBaseView;
@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
@property(nonatomic) __weak id <KGMVMenuCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id mvInfo; // @synthesize mvInfo=_mvInfo;
@property(retain, nonatomic) NSArray *menuArray; // @synthesize menuArray=_menuArray;
- (void).cxx_destruct;
- (void)runMenu:(id)arg1;
- (void)menuBtnAction:(id)arg1;
- (id)createImageWithColor:(id)arg1;
- (id)createMenuBtnAtIndex:(unsigned long long)arg1 AndFrame:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)refreshView:(struct CGSize)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)onChangeTheme:(id)arg1;
- (void)registerNotifications;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

