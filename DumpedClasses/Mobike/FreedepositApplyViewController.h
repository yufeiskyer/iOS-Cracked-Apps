//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_ViewController.h"

@class NSTimer, TextInputCustomView, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface FreedepositApplyViewController : Mobike_ViewController
{
    long long phoneVerType;
    long long countDownSeconds;
    NSTimer *timer;
    long long _phonetype;
    UIScrollView *_freeDepositScrollView;
    UIView *_containerView;
    UIImageView *_tencentImageView;
    UILabel *_tencentLabel;
    TextInputCustomView *_nameInputView;
    TextInputCustomView *_identityInputView;
    UIView *_changePhoneView;
    TextInputCustomView *_phoneInputView;
    TextInputCustomView *_codeInputView;
    UIButton *_voiceButton;
    UIButton *_sendCodeButton;
    UIView *_phoneView;
    UIButton *_changePhoneButton;
    UIView *_dotView1;
    UILabel *_phoneExplanationLabel1;
    UIView *_dotView2;
    UILabel *_phoneExplanationLabel2;
    UILabel *_phoneLabel;
    UIButton *_confirmButton;
    UIButton *_protocalButton;
}

@property(retain, nonatomic) UIButton *protocalButton; // @synthesize protocalButton=_protocalButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UILabel *phoneExplanationLabel2; // @synthesize phoneExplanationLabel2=_phoneExplanationLabel2;
@property(retain, nonatomic) UIView *dotView2; // @synthesize dotView2=_dotView2;
@property(retain, nonatomic) UILabel *phoneExplanationLabel1; // @synthesize phoneExplanationLabel1=_phoneExplanationLabel1;
@property(retain, nonatomic) UIView *dotView1; // @synthesize dotView1=_dotView1;
@property(retain, nonatomic) UIButton *changePhoneButton; // @synthesize changePhoneButton=_changePhoneButton;
@property(retain, nonatomic) UIView *phoneView; // @synthesize phoneView=_phoneView;
@property(retain, nonatomic) UIButton *sendCodeButton; // @synthesize sendCodeButton=_sendCodeButton;
@property(retain, nonatomic) UIButton *voiceButton; // @synthesize voiceButton=_voiceButton;
@property(retain, nonatomic) TextInputCustomView *codeInputView; // @synthesize codeInputView=_codeInputView;
@property(retain, nonatomic) TextInputCustomView *phoneInputView; // @synthesize phoneInputView=_phoneInputView;
@property(retain, nonatomic) UIView *changePhoneView; // @synthesize changePhoneView=_changePhoneView;
@property(retain, nonatomic) TextInputCustomView *identityInputView; // @synthesize identityInputView=_identityInputView;
@property(retain, nonatomic) TextInputCustomView *nameInputView; // @synthesize nameInputView=_nameInputView;
@property(retain, nonatomic) UILabel *tencentLabel; // @synthesize tencentLabel=_tencentLabel;
@property(retain, nonatomic) UIImageView *tencentImageView; // @synthesize tencentImageView=_tencentImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIScrollView *freeDepositScrollView; // @synthesize freeDepositScrollView=_freeDepositScrollView;
@property(nonatomic) long long phonetype; // @synthesize phonetype=_phonetype;
- (void).cxx_destruct;
- (void)registPhoneNumberFailed:(id)arg1;
- (void)registPhoneNumberSucc:(id)arg1;
- (void)resetSendCodeBtn;
- (void)showCountDownViewWithSeconds:(id)arg1;
- (void)onCountDownTimeAction:(id)arg1;
- (void)verifyBtnStateChanged:(id)arg1;
- (void)verifyConfirmBtnState;
- (void)ti_TextFiledEditChanged:(id)arg1;
- (void)inputViewResignFirstResponder;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)hideActivity;
- (void)loadActivity;
- (void)showSuccessHud;
- (void)requestCompleteResult:(id)arg1 error:(id)arg2;
- (void)changePhoneAction:(id)arg1;
- (void)getCodeAction:(id)arg1;
- (void)voiceButtonClicked:(id)arg1;
- (void)protocalClicked:(id)arg1;
- (void)confirmAction:(id)arg1;
- (void)configframe;
- (void)setupView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
