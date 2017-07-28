//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMImageBlurryTipView, FMImageView, FMPostImageDO, FMUploadProgressView, UIButton, UILabel;

@interface FMPostImagesItemView : UIView
{
    FMPostImageDO *_postImageDO;
    id <FMPostImagesItemViewDelegate> _delegate;
    FMImageView *_imageView;
    FMUploadProgressView *_progressView;
    UILabel *_primaryLabel;
    UILabel *_reuploadLabel;
    UIButton *_deleteButton;
    UILabel *_progressLabel;
    FMImageBlurryTipView *_blurryTipView;
}

@property(retain, nonatomic) FMImageBlurryTipView *blurryTipView; // @synthesize blurryTipView=_blurryTipView;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UILabel *reuploadLabel; // @synthesize reuploadLabel=_reuploadLabel;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic) FMUploadProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) FMImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <FMPostImagesItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FMPostImageDO *postImageDO; // @synthesize postImageDO=_postImageDO;
- (void).cxx_destruct;
- (void)isUploadFailedChanged:(id)arg1;
- (void)isMasterImageChanged:(id)arg1;
- (void)layoutSubviews;
- (void)progressChanged:(id)arg1;
- (void)registerKVO;
- (void)setupBlurryTipView;
- (void)setupDeleteButton;
- (void)setupReuploadLabel;
- (void)setupProgressLabel;
- (void)setupProgressView;
- (void)setupPrimaryLabel;
- (void)setupImageView;
- (void)setup;
- (void)bindComponent:(id)arg1;

@end
