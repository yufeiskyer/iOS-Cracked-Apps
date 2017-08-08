//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class NSString, UIColor;

@interface PTHTextField : UITextField
{
    NSString *_placeholder;
    UIColor *_placeholderColor;
    struct UIEdgeInsets _textInset;
    struct UIEdgeInsets _clearButtonInset;
}

@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(nonatomic) struct UIEdgeInsets clearButtonInset; // @synthesize clearButtonInset=_clearButtonInset;
@property(nonatomic) struct UIEdgeInsets textInset; // @synthesize textInset=_textInset;
- (void).cxx_destruct;
- (void)setPlaceholder:(id)arg1;
- (void)setFont:(id)arg1;
- (void)_updatePlaceholder;
- (id)placeholder;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;

@end
