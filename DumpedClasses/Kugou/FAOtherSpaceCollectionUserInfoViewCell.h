//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class FAThemeButton, FAThemeLabel, UICollectionView, UIImageView;

@interface FAOtherSpaceCollectionUserInfoViewCell : UICollectionViewCell
{
    UIImageView *_userImageView;
    UICollectionView *_collectionView;
    id <FAOtherSpaceCollectionUserInfoViewCellDelegate> _delegate;
    FAThemeLabel *_userNameLabel;
    UIImageView *_userStarLevelImageView;
    UIImageView *_userRichLevelImageView;
    FAThemeButton *_userFollowButton;
    UIImageView *_starImageView;
}

@property(retain, nonatomic) UIImageView *starImageView; // @synthesize starImageView=_starImageView;
@property(retain, nonatomic) FAThemeButton *userFollowButton; // @synthesize userFollowButton=_userFollowButton;
@property(retain, nonatomic) UIImageView *userRichLevelImageView; // @synthesize userRichLevelImageView=_userRichLevelImageView;
@property(retain, nonatomic) UIImageView *userStarLevelImageView; // @synthesize userStarLevelImageView=_userStarLevelImageView;
@property(retain, nonatomic) FAThemeLabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(nonatomic) __weak id <FAOtherSpaceCollectionUserInfoViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)reloadItemWorks:(id)arg1 ShowFollowed:(_Bool)arg2 isFollowList:(_Bool)arg3;
- (void)changeTheFollowButton;
- (void)clickFollowBtn:(id)arg1;
- (void)initView;
- (void)onChangeTheme;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

