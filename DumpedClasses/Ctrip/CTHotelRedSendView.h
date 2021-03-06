//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UILabel, UIScrollView;

@interface CTHotelRedSendView : UIView
{
    NSArray *_redList;
    id <CTHotelRedChooseBtnClickDelegate> _delegate;
    UILabel *_lbTitle;
    UIScrollView *_scrollView;
    NSMutableArray *_selectList;
    NSMutableArray *_redImageList;
    long long _selectIndex;
}

@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSMutableArray *redImageList; // @synthesize redImageList=_redImageList;
@property(retain, nonatomic) NSMutableArray *selectList; // @synthesize selectList=_selectList;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *lbTitle; // @synthesize lbTitle=_lbTitle;
@property(nonatomic) __weak id <CTHotelRedChooseBtnClickDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *redList; // @synthesize redList=_redList;
- (void).cxx_destruct;
- (void)setSelectState;
- (void)btnClicked:(id)arg1;
- (void)refreashUI:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

