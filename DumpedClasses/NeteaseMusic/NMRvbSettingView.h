//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImage, UIImageView, UILabel;

@interface NMRvbSettingView : UIView
{
    id <NMRvbSettingViewDelegate> _delegate;
    UIImageView *_stickImageView;
    UILabel *_titleLabel;
    UIButton *_selectButton;
    UIImage *_arrowImage;
    UIImage *_highlightArrowImage;
}

+ (double)height;
+ (double)buttonOffset;
+ (double)stickOffset;
@property(nonatomic) __weak id <NMRvbSettingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectButtonClicked:(id)arg1;
- (void)reloadRvbName;
- (void)setSelcctButton;
- (void)layoutSubviews;
- (void)_refreshViewForSkin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
