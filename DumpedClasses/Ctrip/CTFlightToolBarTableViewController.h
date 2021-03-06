//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightRootViewController.h"

#import "UIScrollViewDelegate.h"

@class NSString;

@interface CTFlightToolBarTableViewController : CTFlightRootViewController <UIScrollViewDelegate>
{
    struct CGPoint startScrollPoint;
    _Bool _isToolBarHidden;
}

@property(nonatomic) _Bool isToolBarHidden; // @synthesize isToolBarHidden=_isToolBarHidden;
- (void)showToolBar;
- (void)hideToolBar;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)initBaseData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

