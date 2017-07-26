//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PhotoEditDelegate.h"

@class NSArray, NSMutableArray, NSString, QQRichMsgPreviewDialog;

@interface QQForwardImageEditHandle : NSObject <PhotoEditDelegate>
{
    NSArray *_forwardMessageModelArray;
    int _downloadStatus;
    NSMutableArray *_downloadImageMessageModel;
    _Bool _canceled;
    QQRichMsgPreviewDialog *_alertView;
    NSString *_imagePath;
    id <QQForwardImageEditHandleDelegate> _delegate;
}

+ (void)onForwardImageSend;
+ (void)onForwardImageNeedDownload;
+ (void)onForwardImageEditClick;
+ (void)onForwardImageFromAIOCell;
@property(nonatomic) id <QQForwardImageEditHandleDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onUIWindowDidBecomeHiddenNotification:(id)arg1;
- (void)photoEditor:(id)arg1 didFinishWithImage:(id)arg2 asset:(id)arg3 shouldOpenDoodle:(_Bool)arg4 hasEdited:(_Bool)arg5;
- (void)photoEditorDidCancel:(id)arg1;
- (void)showPhotoEditControllerImplWithImage:(id)arg1 userInfo:(id)arg2;
- (void)showPhotoEditControllerWithImage:(id)arg1 userInfo:(id)arg2;
- (void)saveOriginalAndThumbImage:(id)arg1;
- (void)handleDownloadImagesStateNotification:(id)arg1;
- (_Bool)restoreAlertView;
- (_Bool)dismissAlertView;
- (_Bool)cancelDownload;
- (_Bool)startDownload:(id)arg1 andType:(int)arg2;
- (void)setDownloadStatus:(int)arg1 withMessageModel:(id)arg2 downloadType:(int)arg3;
- (void)closeSearchKeyboard;
- (_Bool)showImageEditor;
- (_Bool)onSend;
- (_Bool)onCancel;
- (_Bool)onForwardImageClick;
- (_Bool)showEditImageEntry;
- (void)dealloc;
- (_Bool)prepareForwardImagePath:(id)arg1;
- (_Bool)prepareForwardImages:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
