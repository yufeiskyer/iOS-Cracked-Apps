//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBNewAccountRegistrationStepView.h"

@class FBNetworkImageView, FBRichTextView, UIButton, UILabel;

@interface FBNewAccountRegistrationLegaleseView : FBNewAccountRegistrationStepView
{
    _Bool _CIAlertsInNUX;
    UIButton *_signUpWithoutCIButton;
    UILabel *_registrationSubtitle;
    UILabel *_CISubtitle;
    FBNetworkImageView *_imageView;
    struct CGSize _screenSize;
    FBRichTextView *_legalTextViewReg;
    FBRichTextView *_legalTextViewCI;
}

@property(retain, nonatomic) FBRichTextView *legalTextViewCI; // @synthesize legalTextViewCI=_legalTextViewCI;
@property(retain, nonatomic) FBRichTextView *legalTextViewReg; // @synthesize legalTextViewReg=_legalTextViewReg;
- (void).cxx_destruct;
- (CDStruct_a6fa95e6)_layoutInfo;
- (id)legalScreenImageView;
@property(readonly, nonatomic) UIButton *signUpWithoutCIButton;
- (void)_attributeTextTo:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)_initializeTextView;
- (id)_initializeSubtitleLabel;
- (id)_CISubtitle;
- (id)_registrationSubtitle;
- (struct CGSize)layoutBodyContentConstrainedToSize:(struct CGSize)arg1;
- (_Bool)adjustsLayoutForKeyboard;
- (id)initWithFrame:(struct CGRect)arg1;

@end
