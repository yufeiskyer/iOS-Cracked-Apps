//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APTableViewCell.h"

@class UILabel;

@interface CCRForeignCurrencyCell : APTableViewCell
{
    UILabel *_title1;
    UILabel *_title2;
    UILabel *_title3;
    UILabel *_title4;
    UILabel *_amountLabel;
    UILabel *_miniReplayLabel;
    UILabel *_replayDateLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateForeignModel:(id)arg1 replyDate:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
