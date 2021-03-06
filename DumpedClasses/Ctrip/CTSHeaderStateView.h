//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTImageGifView;

@interface CTSHeaderStateView : UIView
{
    int _state;
    UIView *_screenRedDot;
    CTImageGifView *_animationView;
}

@property(retain, nonatomic) CTImageGifView *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) __weak UIView *screenRedDot; // @synthesize screenRedDot=_screenRedDot;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)refreshStateView;
- (void)stopAnimating;
- (void)startAnimating;
- (void)changeState:(int)arg1;
- (void)awakeFromNib;

@end

