//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class EZGroup, EZGroupMessage, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView, UIViewController;
@protocol EZStudyGroupStreamCellDelegate;

@interface EZStudyGroupStreamBaseCell : UITableViewCell
{
    UIButton *_avatarButton;
    UILabel *_avatarLabel;
    UIView *_messageContainerView;
    UIImageView *_bubbleImageView;
    UIViewController<EZStudyGroupStreamCellDelegate> *_parentViewController;
    EZGroupMessage *_message;
    EZGroup *_group;
    UIActivityIndicatorView *_activityIndicator;
    UIButton *_errorImageButton;
}

+ (double)requiredHeightForCell;
@property(retain, nonatomic) UIButton *errorImageButton; // @synthesize errorImageButton=_errorImageButton;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) EZGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) EZGroupMessage *message; // @synthesize message=_message;
@property(nonatomic) __weak UIViewController<EZStudyGroupStreamCellDelegate> *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) __weak UIImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(nonatomic) __weak UIView *messageContainerView; // @synthesize messageContainerView=_messageContainerView;
@property(nonatomic) __weak UILabel *avatarLabel; // @synthesize avatarLabel=_avatarLabel;
@property(nonatomic) __weak UIButton *avatarButton; // @synthesize avatarButton=_avatarButton;
- (void).cxx_destruct;
- (double)requiredHeightForCellLayout;
- (void)shouldShowSendingError:(_Bool)arg1;
- (void)shouldShowSendingActivityView:(_Bool)arg1;
- (void)togglePlayingStatus:(_Bool)arg1;
- (void)errorButtonTapped:(id)arg1;
- (void)configForMessage:(id)arg1;
- (void)longTapOnContent:(id)arg1;
- (void)tapOnContent:(id)arg1;
- (void)avatarLongTapped:(id)arg1;
- (void)avatarTapped:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

