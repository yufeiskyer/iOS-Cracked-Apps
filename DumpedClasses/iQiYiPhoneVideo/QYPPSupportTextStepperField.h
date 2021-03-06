//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UITextField;

@interface QYPPSupportTextStepperField : UIControl <UITextFieldDelegate>
{
    _Bool _IsEditableTextField;
    int _value;
    float Current;
    int _NumDecimals;
    float _Maximum;
    float _Minimum;
    float _Step;
    UIButton *_plusButton;
    UIButton *_minusButton;
    UITextField *_textField;
}

@property(nonatomic) _Bool IsEditableTextField; // @synthesize IsEditableTextField=_IsEditableTextField;
@property(nonatomic) float Step; // @synthesize Step=_Step;
@property(nonatomic) float Minimum; // @synthesize Minimum=_Minimum;
@property(nonatomic) float Maximum; // @synthesize Maximum=_Maximum;
@property(nonatomic) int NumDecimals; // @synthesize NumDecimals=_NumDecimals;
@property(readonly, retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) int TypeChange; // @synthesize TypeChange=_value;
@property(readonly, retain, nonatomic) UIButton *minusButton; // @synthesize minusButton=_minusButton;
@property(readonly, retain, nonatomic) UIButton *plusButton; // @synthesize plusButton=_plusButton;
- (void).cxx_destruct;
- (void)longTapLoop;
- (void)backgroundLongTapLoop;
- (void)didEndLongTap;
- (void)didBeginMinusLongTap;
- (void)didPressMinusButton;
- (void)didBeginPlusLongTap;
- (void)didPressPlusButton;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setTypeChange:(int)arg1;
- (void)didChangeTextField;
- (void)doneTextfield;
- (id)addToolbar;
- (id)getPlaceholderText;
@property(nonatomic) float Current; // @synthesize Current;
- (void)initializeControl;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

