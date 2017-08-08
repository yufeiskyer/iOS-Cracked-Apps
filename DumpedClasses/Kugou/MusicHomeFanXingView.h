//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class CAKeyframeAnimation, KGThemeButton, KMHomeFXModel, MusicHomeFanXingCell, NSDictionary, NSString, UIImageView, UILabel, UIView;

@interface MusicHomeFanXingView : UIButton
{
    _Bool _isFinishAnimation;
    id <MusicHomeFanXingViewDelegate> _delegate;
    KMHomeFXModel *_curModel;
    NSString *_cityName;
    NSDictionary *_dataDic;
    UIImageView *_redDot;
    UILabel *_redCountLabel;
    KGThemeButton *_cellIcon;
    KGThemeButton *_fanXingBtn;
    UIView *_showScrollView;
    MusicHomeFanXingCell *_topCell;
    MusicHomeFanXingCell *_bottomCell;
    CAKeyframeAnimation *_dissAnimation;
    CAKeyframeAnimation *_appearAnimation;
    long long _scrollIndex;
}

@property(nonatomic) _Bool isFinishAnimation; // @synthesize isFinishAnimation=_isFinishAnimation;
@property(nonatomic) long long scrollIndex; // @synthesize scrollIndex=_scrollIndex;
@property(retain, nonatomic) CAKeyframeAnimation *appearAnimation; // @synthesize appearAnimation=_appearAnimation;
@property(retain, nonatomic) CAKeyframeAnimation *dissAnimation; // @synthesize dissAnimation=_dissAnimation;
@property(nonatomic) __weak MusicHomeFanXingCell *bottomCell; // @synthesize bottomCell=_bottomCell;
@property(nonatomic) __weak MusicHomeFanXingCell *topCell; // @synthesize topCell=_topCell;
@property(nonatomic) __weak UIView *showScrollView; // @synthesize showScrollView=_showScrollView;
@property(nonatomic) __weak KGThemeButton *fanXingBtn; // @synthesize fanXingBtn=_fanXingBtn;
@property(retain, nonatomic) KGThemeButton *cellIcon; // @synthesize cellIcon=_cellIcon;
@property(retain, nonatomic) UILabel *redCountLabel; // @synthesize redCountLabel=_redCountLabel;
@property(retain, nonatomic) UIImageView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) NSDictionary *dataDic; // @synthesize dataDic=_dataDic;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) KMHomeFXModel *curModel; // @synthesize curModel=_curModel;
@property(nonatomic) __weak id <MusicHomeFanXingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelHighlighted;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)fanXingBtnClick:(id)arg1;
- (void)didSelectCell;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)exchangeViewWithModel:(id)arg1;
- (void)exchangeViewWithModelIfNeedAnimation:(id)arg1;
- (void)refreshDataNotAnimation:(id)arg1;
- (void)refreshAnchorCount:(long long)arg1;
- (void)initView;
- (void)changeTheme:(id)arg1;
- (void)registerNoti;
- (id)initWithDicData:(id)arg1;

@end
