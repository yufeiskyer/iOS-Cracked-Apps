//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIImageView, UITextField;

@interface NVMPOIAddressSearchBar : UIView <UITextFieldDelegate>
{
    UITextField *_textField;
    id <NVMPOIAddressSearchBarDelegate> _delegate;
    UIImageView *_searchIndicator;
}

@property(retain, nonatomic) UIImageView *searchIndicator; // @synthesize searchIndicator=_searchIndicator;
@property(nonatomic) __weak id <NVMPOIAddressSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @dynamic text;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)loadSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

