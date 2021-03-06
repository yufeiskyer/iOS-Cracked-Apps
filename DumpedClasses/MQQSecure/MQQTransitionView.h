//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString;

@interface MQQTransitionView : UIView <CAAnimationDelegate>
{
    UIView *_contentView;
    UIView *_currentView;
}

@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
- (id)fadingOutAnimation;
- (id)fadingInAnimation;
- (id)fromAnimation;
- (id)toAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)removeView:(id)arg1;
- (void)addView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fadeOut;
- (id)transitionToView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

