//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBSaveDashboardContext, FBSavedListViewItemDataModel;

@interface FBSavedItemBaseComponent : CKCompositeComponent
{
    FBSaveDashboardContext *_toolbox;
    FBSavedListViewItemDataModel *_dataModel;
}

+ (id)blueDot;
+ (id)progressDot:(id)arg1 session:(id)arg2;
+ (id)newWithDataModel:(id)arg1 thumbnailComponent:(id)arg2 toolbox:(id)arg3;
- (void).cxx_destruct;
- (void)didTapArchiveButton:(id)arg1;
- (void)didTapShareButton:(id)arg1;
- (void)didTapSocialContextRow:(id)arg1;
- (void)didTapSecondaryActionButton:(id)arg1;

@end

