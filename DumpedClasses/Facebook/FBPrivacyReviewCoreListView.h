//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBComponentScrollEventListener-Protocol.h"

@class NSString, UICollectionView, UICollectionViewFlowLayout, UIColor;
@protocol FBPrivacyReviewCoreListViewDelegate;

@interface FBPrivacyReviewCoreListView : UIView <FBComponentScrollEventListener>
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    UIColor *_accentColor;
    id <FBPrivacyReviewCoreListViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBPrivacyReviewCoreListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
- (id)collectionView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 accentColor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
