//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBDBLUserChooserSelectionTransition.h"

@class UIView;

@interface FBDBLUserChooserToLoadingTransition : FBDBLUserChooserSelectionTransition
{
    _Bool _transactionComplete;
    _Bool _headerComplete;
    UIView *_loaderUserImage;
    UIView *_userChooserFooter;
}

- (void).cxx_destruct;
- (void)startAnimations:(id)arg1;
- (void)layoutCompositeView:(id)arg1;

@end
