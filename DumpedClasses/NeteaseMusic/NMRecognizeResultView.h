//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, NMRecognizeUploadButton, NMSongCellButton, UIButton, UIImageView, UILabel;

@interface NMRecognizeResultView : UIView
{
    id _delegate;
    double _coverImageButtonSide;
    double _coverBgImageViewWidth;
    double _maskViewHeight;
    double _mirrorHeight;
    double _buttonWidth;
    double _buttonHeight;
    UILabel *_nameLabel;
    UILabel *_artistNameLabel;
    UIView *_maskView;
    UIImageView *_coverBgImageView;
    UIButton *_coverImageButton;
    UIImageView *_mirrorImageView;
    CAGradientLayer *_gradientLayer;
    NMSongCellButton *_favButton;
    NMSongCellButton *_shareButton;
    NMSongCellButton *_addPlayListButton;
    NMSongCellButton *_dowloadButton;
    NMSongCellButton *_moreButton;
    UILabel *_uploadLabel;
    NMRecognizeUploadButton *_uploadButton;
}

+ (double)coverBgImageViewWidth;
+ (double)coverImageButtonSide;
+ (double)mirrorHeight;
+ (double)maskViewHeight;
+ (double)coverOffset;
+ (double)buttonHeight;
+ (double)buttonWidth;
+ (double)buttonMargin;
+ (double)buttonOffset;
@property(readonly, nonatomic) UIImageView *mirrorImageView; // @synthesize mirrorImageView=_mirrorImageView;
@property(readonly, nonatomic) UIButton *coverImageButton; // @synthesize coverImageButton=_coverImageButton;
@property(readonly, nonatomic) NMSongCellButton *favButton; // @synthesize favButton=_favButton;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSong:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

