//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SUpBubbleView.h"

@class SBubbleConf, UIButton, UILabel, UIView;

@interface SABubbleView : SUpBubbleView
{
    UIView *_contentView;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    SBubbleConf *_bubbleConf;
    id <SABubbleViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SABubbleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBubbleConf *bubbleConf; // @synthesize bubbleConf=_bubbleConf;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGPoint)arrowPointFromDelegate;
- (void)delegateClickBubble;
- (void)delegateHideBubble;
- (void)delegateShowBubble;
- (void)hideAnimation:(_Bool)arg1 delay:(double)arg2;
- (void)showAnimation:(_Bool)arg1 delay:(double)arg2;
- (void)closeBubbleView;
- (void)updateArrowPoint:(struct CGPoint)arg1;
- (void)updateFrame;
- (void)updateTitle:(id)arg1;
- (void)showCloseButton:(_Bool)arg1;
- (void)addTapGesture;
- (void)configSubview;
- (void)valueSubviewWithConf:(id)arg1;
- (void)refresh;
- (id)initWithBubbleConf:(id)arg1 delegate:(id)arg2;

@end
