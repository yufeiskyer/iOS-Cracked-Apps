//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSearchBar.h"

@class NSString, NSTimer, UIButton, UIView;

@interface FTSCustomSearchBar : QQSearchBar
{
    UIButton *_returnButton;
    UIView *_shawdowLine;
    NSTimer *_changerTimer;
    NSString *_lastInputText;
    double _timeTmp;
}

- (void).cxx_destruct;
- (id)_searchBarFindUIButtonDelete;
- (id)_searchBarFindUITextFieldBorderView;
- (id)_searchBarFindUINavigationButton;
- (id)_searchBarFindUISearchBarTextField;
- (void)tickCancelAnimation:(double)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)startInteractiveTransition;
- (void)hideReturnButton;
- (void)showReturnButton;
- (id)ftsGetHandledSearchText;
- (void)ftsDismissSearchBarFirstResponder;
- (void)ftsActiveSearchBarFirstResponder;
- (void)actionReturn;
- (void)ftsAlwaysEnableCancelBtn;
- (void)ftsKVORemoveObseserverForKeyPath;
- (void)textChanger:(id)arg1;
- (void)startTimeInputWithText:(id)arg1;
- (void)addReturnButton;
- (void)addShadowLine;
- (void)layoutSubviews;
- (void)dealloc;
- (void)_ftsAIEndingNotifHandle:(id)arg1;
- (void)_ftsHandleKeyboardWillHide:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

