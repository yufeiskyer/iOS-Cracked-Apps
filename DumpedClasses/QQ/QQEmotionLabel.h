//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class EmotionParseResult, NSString, NSTimer, ParseRange, ParseRect, UIColor, UIFont, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface QQEmotionLabel : UIView <UIGestureRecognizerDelegate>
{
    NSString *_content;
    id <QQEmotionLabelDelegate> _delegate;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_shadowColor;
    struct CGSize _shadowOffset;
    double _blur;
    UIColor *_shadowBlurColor;
    _Bool _shadowBlur;
    _Bool _openCoreText;
    unsigned long long _numberOfLines;
    _Bool _isHandleTouch;
    _Bool _isLongPress;
    _Bool _touchOutSide;
    _Bool _touchNextRespond;
    _Bool _isSmallFaceDoubleClick;
    UIView *_emotionView;
    EmotionParseResult *_parseResult;
    int _touchedIndex;
    int _touchedEmotionIndex;
    ParseRange *_touchedRange;
    ParseRect *_touchedRect;
    UILongPressGestureRecognizer *_longGesture;
    UITapGestureRecognizer *_doubleTapGesture;
    _Bool _smallFaceDoubleClicked;
    struct {
        struct _NSRange _minRange;
        struct _NSRange _maxRange;
        struct CGPoint _minPoint;
        struct CGPoint _maxPoint;
        double _maxOffset;
        struct CGRect _selectdRect;
        _Bool _disPlayHeadEnd;
    } SelectedFlags;
    _Bool _supportAnimate;
    long long _currentFrameIndex;
    NSTimer *_timer;
    long long _frameNum;
    void *_descriptor;
    int _xo;
    double _textlineHeight;
    long long _alignment;
    long long _lineBreakMode;
}

@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) double textlineHeight; // @synthesize textlineHeight=_textlineHeight;
@property(retain, nonatomic) UIColor *shadowBlurColor; // @synthesize shadowBlurColor=_shadowBlurColor;
- (_Bool)isAnimating;
- (void)setLastFrameIndex:(id)arg1;
- (void)releaseTimer;
- (id)replaceAtUnvisibleCharacter:(id)arg1;
- (void)setAnimateFontProperty;
- (void)resetAnimateFontProperty;
- (void)rePlayAnimation;
- (void)stopAnimation;
- (void)startAnimationWithAioModel:(id)arg1;
- (void)startPlay:(long long)arg1 aioModel:(id)arg2;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleDoubleClickGesture:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (int)findSmallFaceParseRangeAtPoint:(struct CGPoint)arg1;
- (int)findParseRangeAtPoint:(struct CGPoint)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)getParseResult;
- (void)setParseResult:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutContent:(int)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (void)dealloc;
- (void)layerWillDraw:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) double blur; // @dynamic blur;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <QQEmotionLabelDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIFont *font; // @dynamic font;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long numberOfLines; // @dynamic numberOfLines;
@property(nonatomic) _Bool openCoreText; // @dynamic openCoreText;
@property(nonatomic) _Bool shadowBlur; // @dynamic shadowBlur;
@property(retain, nonatomic) UIColor *shadowColor; // @dynamic shadowColor;
@property(nonatomic) struct CGSize shadowOffset; // @dynamic shadowOffset;
@property(readonly) Class superclass;
@property(nonatomic) _Bool supportAnimate; // @dynamic supportAnimate;
@property(retain, nonatomic) UIColor *textColor; // @dynamic textColor;
@property(nonatomic) _Bool touchNextRespond; // @dynamic touchNextRespond;
@property(nonatomic) _Bool touchOutSide; // @dynamic touchOutSide;

@end

