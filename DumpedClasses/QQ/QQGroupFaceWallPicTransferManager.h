//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQGroupFaceWallPicUpLoadDelegate.h"

@class NSMutableArray, NSString;

@interface QQGroupFaceWallPicTransferManager : NSObject <QQGroupFaceWallPicUpLoadDelegate>
{
    NSMutableArray *_uploadQueue;
    int _conCurrentUploading;
    NSString *_signature;
    id <QQGroupFaceWallPicTransferManagerDelegate> _theDelegate;
    unsigned long long _groupCode;
    unsigned int _groupFaceWallSeq;
    int _xo;
    _Bool _canStartNext;
    NSMutableArray *_uploadReqs;
    NSMutableArray *_serverList;
}

- (void).cxx_destruct;
- (id)getImageCacheUrl:(long long)arg1;
- (void)setImageCacheUrl:(long long)arg1 cacheUrl:(id)arg2;
- (void)removeStroeFileFromDisk:(long long)arg1;
- (id)storeTemporaryImage:(id)arg1 byTag:(long long)arg2;
- (void)onFinishFileUpload:(id)arg1 info:(id)arg2;
- (void)onFileUploadProcess:(id)arg1 process:(double)arg2;
- (void)onStartFileUpload:(id)arg1;
- (void)cancelRestTask:(long long)arg1;
- (double)getUploadFileProcess:(long long)arg1;
- (id)getUploadFileImageByImageTag:(long long)arg1 isThumb:(_Bool)arg2;
- (id)getUploadFileImageAtIndex:(long long)arg1 isThumb:(_Bool)arg2;
- (long long)getUploadFileCount;
- (id)makeUploadUrlList:(id)arg1 fileTag:(unsigned long long)arg2;
- (void)uploadFile:(id)arg1 thumbImage:(id)arg2 withTag:(long long)arg3 signature:(id)arg4 inThread:(id)arg5;
- (id)findUploaderByTag:(long long)arg1;
- (void)excuteNextUpload;
- (void)cancelAllTaskWithError:(int)arg1;
- (void)cancelTaskbyTag:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long groupCode; // @dynamic groupCode;
@property(nonatomic) unsigned int groupFaceWallSeq; // @dynamic groupFaceWallSeq;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) id <QQGroupFaceWallPicTransferManagerDelegate> theDelegate; // @dynamic theDelegate;

@end

