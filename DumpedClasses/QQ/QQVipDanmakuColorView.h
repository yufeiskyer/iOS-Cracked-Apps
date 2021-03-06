//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QQVipDanmuColorModel, UIImageView;

@interface QQVipDanmakuColorView : UIView
{
    UIImageView *_lockView;
    _Bool _isSelected;
    _Bool _canUsed;
    NSString *_color;
    QQVipDanmuColorModel *_danmuColorModel;
    id <QQVipDanmakuColorViewDelegate> _delegate;
}

@property(nonatomic) __weak id <QQVipDanmakuColorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QQVipDanmuColorModel *danmuColorModel; // @synthesize danmuColorModel=_danmuColorModel;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(nonatomic) _Bool canUsed; // @synthesize canUsed=_canUsed;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)handleSingleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

