//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

#import "FBSpeechRecognitionServiceListener-Protocol.h"

@class FBSpeechRecoButton, FBUserSession, NSString;

@interface FBSpeechRecoTextField : UITextField <FBSpeechRecognitionServiceListener>
{
    FBUserSession *_session;
    FBSpeechRecoButton *_recoButton;
}

@property(readonly, nonatomic) FBSpeechRecoButton *recoButton; // @synthesize recoButton=_recoButton;
- (void).cxx_destruct;
- (void)onResult:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
