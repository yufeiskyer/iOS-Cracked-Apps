//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSString, UIActivityIndicatorView, UILabel;

@interface HotPicFooterView : UICollectionReusableView
{
    NSString *_tipStr;
    UIActivityIndicatorView *_activity;
    UILabel *_loadLabel;
    struct CGRect _acFrame;
    struct CGRect _loadFrame;
    struct CGRect _finishFrame;
}

@property(nonatomic) struct CGRect finishFrame; // @synthesize finishFrame=_finishFrame;
@property(nonatomic) struct CGRect loadFrame; // @synthesize loadFrame=_loadFrame;
@property(nonatomic) struct CGRect acFrame; // @synthesize acFrame=_acFrame;
@property(retain, nonatomic) UILabel *loadLabel; // @synthesize loadLabel=_loadLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSString *tipStr; // @synthesize tipStr=_tipStr;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
