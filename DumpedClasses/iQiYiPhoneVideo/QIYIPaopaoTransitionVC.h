//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface QIYIPaopaoTransitionVC : UIViewController
{
    int _transType;
    long long _uid;
    long long _pid;
}

- (id)initWithUid:(long long)arg1 withPaopaoId:(long long)arg2 TransType:(int)arg3;
- (void)didReceiveMemoryWarning;
- (void)enterIntoChatViewWithVoteId:(id)arg1 withFinishBlock:(CDUnknownBlockType)arg2;
- (void)skipIntoChatViewWithUid:(long long)arg1 withPaopaoId:(long long)arg2 withTransType:(int)arg3 withFinishBlock:(CDUnknownBlockType)arg4;
- (void)viewDidLoad;

@end

