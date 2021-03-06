//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYBaseSetKeyboardVIew.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, QYBaseTextInputView, QYLoginPasswordStrengthView, UIButton, UILabel;
@protocol QYChangePwdInputProtocol;

@interface QYChangePwdInputView : QYBaseSetKeyboardVIew <UITextFieldDelegate, UIAlertViewDelegate>
{
    id <QYChangePwdInputProtocol> _delegate;
    QYLoginPasswordStrengthView *_pwdStrengthView;
    UIButton *_settingBtn;
    QYBaseTextInputView *_nePwdView;
    QYBaseTextInputView *_confirmPwdView;
    UILabel *_placeholderLabel;
}

@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) QYBaseTextInputView *confirmPwdView; // @synthesize confirmPwdView=_confirmPwdView;
@property(retain, nonatomic) QYBaseTextInputView *nePwdView; // @synthesize nePwdView=_nePwdView;
@property(retain, nonatomic) UIButton *settingBtn; // @synthesize settingBtn=_settingBtn;
@property(retain, nonatomic) QYLoginPasswordStrengthView *pwdStrengthView; // @synthesize pwdStrengthView=_pwdStrengthView;
@property(nonatomic) __weak id <QYChangePwdInputProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)toSetting;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)clearInputTextView;
- (void)initView;
- (void)resignFirstRespondKeyBoard;
- (void)becomeFirstRespondKeyBoard;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

