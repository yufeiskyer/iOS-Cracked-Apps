//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage, UILongPressGestureRecognizer;

@interface QQPhotoButton : UIView
{
    int _type;
    int _section;
    int _row;
    id _objectTouch;
    SEL _selTouch;
    SEL _sel;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    id _object;
    UIImage *_backgroundImage;
}

@property(nonatomic) __weak UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) SEL sel; // @synthesize sel=_sel;
@property(nonatomic) __weak id object; // @synthesize object=_object;
@property(nonatomic) int row; // @synthesize row=_row;
@property(nonatomic) int section; // @synthesize section=_section;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)longPress:(id)arg1;
- (void)addLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

