//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor, UILabel, UIView;

@interface LCActionSheetCell : UITableViewCell
{
    UILabel *_titleLabel;
    UIView *_lineView;
    UIColor *_cellSeparatorColor;
    UIView *_highlightedView;
}

@property(nonatomic) __weak UIView *highlightedView; // @synthesize highlightedView=_highlightedView;
@property(retain, nonatomic) UIColor *cellSeparatorColor; // @synthesize cellSeparatorColor=_cellSeparatorColor;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

