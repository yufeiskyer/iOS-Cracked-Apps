//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGThemeButton, KGThemeLabel, KGThemeLine;

@interface SearchSongSubViewCell : UITableViewCell
{
    KGThemeLabel *_titleLabel;
    KGThemeButton *_checkIcon;
    KGThemeLine *_line;
}

@property(retain, nonatomic) KGThemeLine *line; // @synthesize line=_line;
@property(retain, nonatomic) KGThemeButton *checkIcon; // @synthesize checkIcon=_checkIcon;
@property(retain, nonatomic) KGThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

