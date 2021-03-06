//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeButton, KGThemeLabel, NSArray, NSString;

@interface KGRankPrivateCellView : UIView
{
    _Bool _hasChilds;
    NSString *_mainTitle;
    NSArray *_detailTitles;
    KGThemeButton *_moreInfoImageBtn;
    KGThemeLabel *_textLabel0;
    KGThemeLabel *_textLabel1;
    KGThemeLabel *_textLabel2;
}

@property(retain, nonatomic) KGThemeLabel *textLabel2; // @synthesize textLabel2=_textLabel2;
@property(retain, nonatomic) KGThemeLabel *textLabel1; // @synthesize textLabel1=_textLabel1;
@property(retain, nonatomic) KGThemeLabel *textLabel0; // @synthesize textLabel0=_textLabel0;
@property(nonatomic) _Bool hasChilds; // @synthesize hasChilds=_hasChilds;
@property(retain, nonatomic) KGThemeButton *moreInfoImageBtn; // @synthesize moreInfoImageBtn=_moreInfoImageBtn;
@property(retain, nonatomic) NSArray *detailTitles; // @synthesize detailTitles=_detailTitles;
@property(copy, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
- (void).cxx_destruct;
- (void)changeTheme:(id)arg1;
- (id)createThreeLabelsWith:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

