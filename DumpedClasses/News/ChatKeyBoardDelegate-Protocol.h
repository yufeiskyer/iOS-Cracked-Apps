//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UITextView;

@protocol ChatKeyBoardDelegate <NSObject>

@optional
- (void)chatKeyBoardImagePickedButtonPressed;
- (void)chatKeyBoardTextViewDidChange:(UITextView *)arg1;
- (void)chatKeyBoardSendText:(NSString *)arg1;
- (void)chatKeyBoardTextViewDidBeginEditing:(UITextView *)arg1;
@end

