//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class QQAvatarView, QQStorySelfDisplayModel, UIImageView, UILabel, UIView;

@interface QQStorySelfCell : UITableViewCell
{
    QQAvatarView *_headerView;
    UIImageView *_expandIcon;
    UIImageView *_arrowIcon;
    UIImageView *_dicoverIcon;
    UILabel *_nameLabel;
    UILabel *_accessoryLabel;
    UIView *_lineView;
    _Bool _isHasDisplayPic;
    QQStorySelfDisplayModel *_cellModel;
    id <QQStoryUserCellDelegate> _cellDelegate;
}

@property(nonatomic) __weak id <QQStoryUserCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *videoImageView;
- (void)onTapShare;
- (void)onTapDownload;
- (void)onTapExpand;
- (void)onTapHeader;
- (id)getAccessoryStr;
- (struct CGSize)getStrSize:(id)arg1 withFont:(id)arg2 withMaxWidth:(double)arg3;
- (void)setVideoCell:(id)arg1;
- (void)setEmptyVideoCell;
- (void)setModel:(id)arg1;
- (void)setHeaderCover:(id)arg1;
- (void)layoutAdjust;
- (void)doInitSpecialUI;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

