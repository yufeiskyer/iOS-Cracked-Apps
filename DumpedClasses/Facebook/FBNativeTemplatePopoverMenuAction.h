//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NTAction-Protocol.h"

@class FBNativeTemplateContext, FBPopoverActionSheet, NSArray, NSString;
@protocol NTNativeTemplateModel;

@interface FBNativeTemplatePopoverMenuAction : NSObject <NTAction>
{
    FBPopoverActionSheet *_popoverActionSheet;
    NSObject<NTNativeTemplateModel> *_model;
    NSArray *_children;
    FBNativeTemplateContext *_context;
    long long _pageSize;
    long long _currentPage;
    NSArray *_buttonItems;
}

+ (id)newWithModel:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (void)fetchedImage:(id)arg1 forItem:(id)arg2 inPopoverController:(id)arg3;
- (id)_previousButtonTitleForModel:(id)arg1;
- (id)_moreButtonTitleForModel:(id)arg1;
- (id)_buttonsForCurrentPage;
- (void)_didTapBackButton;
- (void)_didTapMoreButton;
- (void)_dismissPopover:(_Bool)arg1;
- (void)_applicationWilResignActiveNotification;
- (void)dealloc;
- (void)performAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
