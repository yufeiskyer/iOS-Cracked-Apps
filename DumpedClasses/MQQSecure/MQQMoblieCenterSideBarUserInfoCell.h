//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface MQQMoblieCenterSideBarUserInfoCell : UITableViewCell
{
    UIImageView *_avatar;
    UILabel *_name;
    UILabel *_protectInfo;
    UIImageView *_indicator;
}

@property(retain, nonatomic) UILabel *protectInfo; // @synthesize protectInfo=_protectInfo;
- (void)configureCellWithInfo:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
