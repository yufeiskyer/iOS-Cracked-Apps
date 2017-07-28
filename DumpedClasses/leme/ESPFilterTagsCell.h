//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class ESPFilterTagsView, NSArray, NVMSeparatorView, UIButton;

@interface ESPFilterTagsCell : NVMTableViewCell
{
    CDUnknownBlockType _switcherAction;
    ESPFilterTagsView *_tagsView;
    NVMSeparatorView *_separator;
    UIButton *_switcher;
}

@property(retain, nonatomic) UIButton *switcher; // @synthesize switcher=_switcher;
@property(retain, nonatomic) NVMSeparatorView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) ESPFilterTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(copy, nonatomic) CDUnknownBlockType switcherAction; // @synthesize switcherAction=_switcherAction;
- (void).cxx_destruct;
- (double)cellHeight;
@property(readonly, nonatomic) NSArray *tags;
- (void)markSwitcherSelected:(_Bool)arg1;
- (void)markTagSelected:(id)arg1;
- (void)updateWithTags:(id)arg1;
- (void)hideSwitcher;
- (void)showAllButtonAction:(id)arg1;
- (void)loadSwitcher;
- (void)loadSeparator;
- (void)setupTagAction:(CDUnknownBlockType)arg1;
- (void)loadTagsView;
- (void)loadSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
