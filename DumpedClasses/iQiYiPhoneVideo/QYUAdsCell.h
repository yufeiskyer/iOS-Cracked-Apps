//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUPhoneCardBaseCell.h"

@class QYBisonAlbum, QYBisonAlbumDetailData, UIButton, UIImageView, UILabel, UIView;

@interface QYUAdsCell : QYUPhoneCardBaseCell
{
    UIImageView *_logo;
    UILabel *_title;
    UILabel *_subTitle;
    UIButton *_btn;
    UIView *_eventArea;
    UIButton *_tagBtn;
    QYBisonAlbum *_album;
    QYBisonAlbumDetailData *_tagMeta;
}

+ (id)getCellObjByContainer:(id)arg1 andIndex:(long long)arg2;
+ (long long)getLinesByCardData:(id)arg1 andShowNum:(long long)arg2;
+ (void)load;
@property(retain, nonatomic) QYBisonAlbumDetailData *tagMeta; // @synthesize tagMeta=_tagMeta;
@property(retain, nonatomic) QYBisonAlbum *album; // @synthesize album=_album;
@property(retain, nonatomic) UIButton *tagBtn; // @synthesize tagBtn=_tagBtn;
@property(retain, nonatomic) UIView *eventArea; // @synthesize eventArea=_eventArea;
@property(retain, nonatomic) UIButton *btn; // @synthesize btn=_btn;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *logo; // @synthesize logo=_logo;
- (void).cxx_destruct;
- (void)btnClicked:(id)arg1;
- (void)clickLogoArea:(id)arg1;
- (void)layoutSubviews;
- (void)setCellModel:(id)arg1;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

