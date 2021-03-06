//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLShowRoomControlTopViewDelegate.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface QLShowRoomControlTopView : UIView <QLShowRoomControlTopViewDelegate>
{
    struct {
        unsigned int didClickBackButton:1;
        unsigned int didClickMoreButton:1;
        unsigned int didClickShareButton:1;
    } _topViewDelegateFlags;
    id <QLShowRoomControlTopViewDelegate> _delegate;
    UIImageView *_topBackgroundView;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UIButton *_shareBtn;
    UIButton *_moreButton;
    UIButton *_onlineNumberBtn;
}

@property(retain, nonatomic) UIButton *onlineNumberBtn; // @synthesize onlineNumberBtn=_onlineNumberBtn;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIImageView *topBackgroundView; // @synthesize topBackgroundView=_topBackgroundView;
@property(nonatomic) __weak id <QLShowRoomControlTopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)__moreBtnClicked:(id)arg1;
- (void)__shareBtnClicked:(id)arg1;
- (void)__backBtnClicked:(id)arg1;
- (void)showAllInteractedViews;
- (void)setOnlineNumber:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

