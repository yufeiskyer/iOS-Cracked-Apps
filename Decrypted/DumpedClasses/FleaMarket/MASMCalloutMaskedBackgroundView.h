//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MASMCalloutBackgroundView.h"

@class UIImageView, UIView;

@interface MASMCalloutMaskedBackgroundView : MASMCalloutBackgroundView
{
    UIView *_containerView;
    UIView *_containerBorderView;
    UIView *_arrowView;
    UIImageView *_arrowImageView;
    UIImageView *_arrowHighlightedImageView;
    UIImageView *_arrowBorderView;
}

@property(retain, nonatomic) UIImageView *arrowBorderView; // @synthesize arrowBorderView=_arrowBorderView;
@property(retain, nonatomic) UIImageView *arrowHighlightedImageView; // @synthesize arrowHighlightedImageView=_arrowHighlightedImageView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *containerBorderView; // @synthesize containerBorderView=_containerBorderView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (id)contentMask;
- (void)layoutSubviews;
- (id)image:(id)arg1 withColor:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setArrowPoint:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
