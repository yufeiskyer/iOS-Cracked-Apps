//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class CTFooterStateView, CTHeaderStateView, UIColor, UIImage;

@interface CTTableView : UITableView
{
    _Bool isInited;
    CTHeaderStateView *headerView_;
    CTFooterStateView *footerView_;
    _Bool _hasAdjusted;
    id <CTTableViewDelegate> updateDelegate;
    UIColor *_refreshTextColor;
    UIImage *_arrowHeaderImage;
    UIImage *_arrowFooterImage;
    UIImage *_loadingLogoImage;
    struct UIEdgeInsets _adjustEdgeInset;
}

@property(nonatomic) struct UIEdgeInsets adjustEdgeInset; // @synthesize adjustEdgeInset=_adjustEdgeInset;
@property(nonatomic) _Bool hasAdjusted; // @synthesize hasAdjusted=_hasAdjusted;
@property(retain, nonatomic) UIImage *loadingLogoImage; // @synthesize loadingLogoImage=_loadingLogoImage;
@property(retain, nonatomic) UIImage *arrowFooterImage; // @synthesize arrowFooterImage=_arrowFooterImage;
@property(retain, nonatomic) UIImage *arrowHeaderImage; // @synthesize arrowHeaderImage=_arrowHeaderImage;
@property(retain, nonatomic) UIColor *refreshTextColor; // @synthesize refreshTextColor=_refreshTextColor;
@property(nonatomic) __weak id <CTTableViewDelegate> updateDelegate; // @synthesize updateDelegate;
@property(retain, nonatomic) CTFooterStateView *footerView; // @synthesize footerView=footerView_;
@property(retain, nonatomic) CTHeaderStateView *headerView; // @synthesize headerView=headerView_;
- (void).cxx_destruct;
- (void)setFooterViewHidden:(_Bool)arg1;
- (void)setHeaderViewHidden:(_Bool)arg1;
- (void)scrollToTopForCtrip:(_Bool)arg1;
- (void)setLoadAllHintText:(id)arg1;
- (void)setFooterLoading;
- (void)setHeaderLoading;
- (void)pullDownRefreshByEvent;
- (void)updateCTTableViewThread:(id)arg1;
- (void)startUpdateWithKey:(int)arg1;
- (int)tableViewDidEndDragging;
- (void)tableViewDidDragging;
- (void)reloadDataWithIsAllLoaded:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)initBaseView;
- (void)initBaseData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

@end

