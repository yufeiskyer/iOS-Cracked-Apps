//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UIBarButtonItem, UITextField, UIView, XYPHSearchContentViewController;

@interface XYPHSearchQueryViewController : XYPHBaseViewController <UITextFieldDelegate>
{
    NSString *_query;
    NSString *_source;
    CDUnknownBlockType _updateSearchResult;
    UIView *_searchTextFieldContainerView;
    XYPHSearchContentViewController *_searchContentViewController;
    UITextField *_searchTextField;
    UIBarButtonItem *_cancelButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *cancelButtonItem; // @synthesize cancelButtonItem=_cancelButtonItem;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) XYPHSearchContentViewController *searchContentViewController; // @synthesize searchContentViewController=_searchContentViewController;
@property(retain, nonatomic) UIView *searchTextFieldContainerView; // @synthesize searchTextFieldContainerView=_searchTextFieldContainerView;
@property(copy, nonatomic) CDUnknownBlockType updateSearchResult; // @synthesize updateSearchResult=_updateSearchResult;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (double)throttleDelay;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (struct _NSRange)markedTextRange:(id)arg1;
- (void)textFieldEditingChanged;
- (void)setPlaceholderAsQueryIfNeeded;
@property(retain, nonatomic) NSString *placeholder;
- (void)cancelButtonClicked:(id)arg1;
- (void)dismissKeyboard;
- (void)reloadData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

