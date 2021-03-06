//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLDataRequestModel.h"

@class NSMutableArray, NSString, QLFanTuanPublishTaskInfo;

@interface QLFanTuanPublishActionTask : QLDataRequestModel
{
    NSString *_uniqueId;
    CDUnknownBlockType _comBlock;
    NSMutableArray *_upadingPhotos;
    int _uploadRetryCount;
    int _uploadPhotoCount;
    QLFanTuanPublishTaskInfo *_taskInfo;
}

+ (id)generateUniqueId:(id)arg1;
@property(retain, nonatomic) QLFanTuanPublishTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
- (void).cxx_destruct;
- (void)requestDidFail:(id)arg1;
- (void)requestDidCancelLoad:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestUploadPhotoDidFinish:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)requestDidStartLoad:(id)arg1;
- (void)callBlock:(_Bool)arg1;
- (void)startPublishRquest;
- (void)uploadUrlPhoto:(id)arg1;
- (void)uploadFilePhoto:(id)arg1;
- (_Bool)uploadNextLocalPhoto;
- (_Bool)needUploadWithUrlPath:(id)arg1;
- (_Bool)needUploadWithFilePath:(id)arg1;
- (id)initWithTaskInfo:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)dealloc;
@property(readonly, nonatomic) NSString *taskId;

@end

