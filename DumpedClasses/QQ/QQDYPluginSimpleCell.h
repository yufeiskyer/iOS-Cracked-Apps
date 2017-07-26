//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQDYPluginBaseCell.h"

@class NMAsynUrlImageView, RPDisplayInfo, UILabel, UIView;

@interface QQDYPluginSimpleCell : QQDYPluginBaseCell
{
    RPDisplayInfo *_displayInfo;
    _Bool _isShowSeparator;
    _Bool _isFirstCellInSection;
    _Bool _isLastCellInSection;
    NMAsynUrlImageView *_iconImgView;
    UILabel *_titleLabel;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
}

+ (_Bool)pluginIsUseVASRedpoint:(id)arg1;
@property(nonatomic) _Bool isLastCellInSection; // @synthesize isLastCellInSection=_isLastCellInSection;
@property(nonatomic) _Bool isFirstCellInSection; // @synthesize isFirstCellInSection=_isFirstCellInSection;
@property(nonatomic) _Bool isShowSeparator; // @synthesize isShowSeparator=_isShowSeparator;
@property(retain, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NMAsynUrlImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
- (void).cxx_destruct;
- (id)redPointContentViewFrame;
- (void)bindRedPointUIBridge;
- (void)reloadAppearance;
- (void)resetCellIfNeed:(id)arg1 newPlugin:(id)arg2;
- (void)update:(id)arg1;
- (void)updateBeforeForSimpleCell:(id)arg1 newPlugin:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
