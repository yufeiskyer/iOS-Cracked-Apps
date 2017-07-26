//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CameraOutputAbstractLayerDelegate.h"

@class AVAssetReader, AVAssetReaderTrackOutput, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVPlayer, AVURLAsset, CIContext, CameraOutputAbstractLayer, EAGLContext, GLKViewWithBounds, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSTimer;

@interface MultipleVideoRecorderController : NSObject <CameraOutputAbstractLayerDelegate>
{
    _Bool _canWrite;
    _Bool _isFirstFrame;
    _Bool _canHandleVideo;
    _Bool _isAudioPlaying;
    _Bool _isFullscreenRecord;
    _Bool _canWriterSplitVideo;
    int _sw;
    int _sh;
    id <MultipleVideoRecorderControllerDelegate> _delegate;
    long long _recordState;
    long long _lastRecordState;
    CIContext *_ciContext;
    EAGLContext *_eaglContext;
    GLKViewWithBounds *_feedView;
    NSObject *_lock;
    NSObject<OS_dispatch_queue> *_writerQueue;
    NSObject<OS_dispatch_queue> *_readerQueue;
    NSObject<OS_dispatch_source> *_readerTimer;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_videoWriterInput;
    AVAssetWriterInput *_audioWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_writerInputPixelBufferAdaptor;
    AVAssetReaderTrackOutput *_assetVideoReaderOutput;
    AVAssetReaderTrackOutput *_assetAudioReaderOutput;
    AVAssetReader *_reader;
    AVURLAsset *_videoAsset;
    NSTimer *_progressUpdateTimer;
    double _sourceVideoFrameTime;
    AVPlayer *_audioPlayer;
    double _recordLimitDuration;
    struct opaqueCMSampleBuffer *_currentVideoBuffer;
    NSMutableArray *_sourceVideoSnapshots;
    NSMutableArray *_splitsDuration;
    NSString *_exportVideoPath;
    NSString *_sourceVideoPath;
    NSString *_sourceVid;
    CameraOutputAbstractLayer *_cameraOutput;
    double _cost;
    double _count;
    CDStruct_1b6d18a9 _currentEncodeBufferTime;
    CDStruct_1b6d18a9 _currentSplitDuration;
    CDStruct_1b6d18a9 _recordingDuration;
    CDStruct_1b6d18a9 _startRecordTime;
    struct CGAffineTransform _videoTransform;
}

@property(nonatomic) double count; // @synthesize count=_count;
@property(nonatomic) double cost; // @synthesize cost=_cost;
@property(retain, nonatomic) CameraOutputAbstractLayer *cameraOutput; // @synthesize cameraOutput=_cameraOutput;
@property(nonatomic) _Bool canWriterSplitVideo; // @synthesize canWriterSplitVideo=_canWriterSplitVideo;
@property(nonatomic) _Bool isFullscreenRecord; // @synthesize isFullscreenRecord=_isFullscreenRecord;
@property(retain, nonatomic) NSString *sourceVid; // @synthesize sourceVid=_sourceVid;
@property(retain, nonatomic) NSString *sourceVideoPath; // @synthesize sourceVideoPath=_sourceVideoPath;
@property(retain, nonatomic) NSString *exportVideoPath; // @synthesize exportVideoPath=_exportVideoPath;
@property(retain, nonatomic) NSMutableArray *splitsDuration; // @synthesize splitsDuration=_splitsDuration;
@property(retain, nonatomic) NSMutableArray *sourceVideoSnapshots; // @synthesize sourceVideoSnapshots=_sourceVideoSnapshots;
@property(nonatomic) struct opaqueCMSampleBuffer *currentVideoBuffer; // @synthesize currentVideoBuffer=_currentVideoBuffer;
@property(nonatomic) CDStruct_1b6d18a9 startRecordTime; // @synthesize startRecordTime=_startRecordTime;
@property(nonatomic) CDStruct_1b6d18a9 recordingDuration; // @synthesize recordingDuration=_recordingDuration;
@property(nonatomic) CDStruct_1b6d18a9 currentSplitDuration; // @synthesize currentSplitDuration=_currentSplitDuration;
@property(nonatomic) double recordLimitDuration; // @synthesize recordLimitDuration=_recordLimitDuration;
@property(nonatomic) _Bool isAudioPlaying; // @synthesize isAudioPlaying=_isAudioPlaying;
@property(retain, nonatomic) AVPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) CDStruct_1b6d18a9 currentEncodeBufferTime; // @synthesize currentEncodeBufferTime=_currentEncodeBufferTime;
@property(nonatomic) _Bool canHandleVideo; // @synthesize canHandleVideo=_canHandleVideo;
@property(nonatomic) _Bool isFirstFrame; // @synthesize isFirstFrame=_isFirstFrame;
@property(nonatomic) struct CGAffineTransform videoTransform; // @synthesize videoTransform=_videoTransform;
@property(nonatomic) double sourceVideoFrameTime; // @synthesize sourceVideoFrameTime=_sourceVideoFrameTime;
@property(retain, nonatomic) NSTimer *progressUpdateTimer; // @synthesize progressUpdateTimer=_progressUpdateTimer;
@property(retain, nonatomic) AVURLAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(retain, nonatomic) AVAssetReader *reader; // @synthesize reader=_reader;
@property(retain, nonatomic) AVAssetReaderTrackOutput *assetAudioReaderOutput; // @synthesize assetAudioReaderOutput=_assetAudioReaderOutput;
@property(retain, nonatomic) AVAssetReaderTrackOutput *assetVideoReaderOutput; // @synthesize assetVideoReaderOutput=_assetVideoReaderOutput;
@property(nonatomic) _Bool canWrite; // @synthesize canWrite=_canWrite;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *writerInputPixelBufferAdaptor; // @synthesize writerInputPixelBufferAdaptor=_writerInputPixelBufferAdaptor;
@property(retain, nonatomic) AVAssetWriterInput *audioWriterInput; // @synthesize audioWriterInput=_audioWriterInput;
@property(retain, nonatomic) AVAssetWriterInput *videoWriterInput; // @synthesize videoWriterInput=_videoWriterInput;
@property(retain, nonatomic) AVAssetWriter *writer; // @synthesize writer=_writer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *readerTimer; // @synthesize readerTimer=_readerTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *readerQueue; // @synthesize readerQueue=_readerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writerQueue; // @synthesize writerQueue=_writerQueue;
@property(retain, nonatomic) NSObject *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) GLKViewWithBounds *feedView; // @synthesize feedView=_feedView;
@property(retain, nonatomic) EAGLContext *eaglContext; // @synthesize eaglContext=_eaglContext;
@property(retain, nonatomic) CIContext *ciContext; // @synthesize ciContext=_ciContext;
@property(nonatomic) long long lastRecordState; // @synthesize lastRecordState=_lastRecordState;
@property(nonatomic) long long recordState; // @synthesize recordState=_recordState;
@property(nonatomic) int sh; // @synthesize sh=_sh;
@property(nonatomic) int sw; // @synthesize sw=_sw;
@property(nonatomic) __weak id <MultipleVideoRecorderControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)exportVideoWithFull:(CDUnknownBlockType)arg1;
- (void)exportVideo:(CDUnknownBlockType)arg1;
- (void)stopAssetWriter;
- (void)setupAssetWriter:(id)arg1;
- (void)setupAudioPlayer:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)handleVideoFrame;
- (void)stopVideoExtrace;
- (void)startVideoExtrace;
- (void)setupVideoExtracrTimer;
- (void)setupAssetReading:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)appendSampleBuffer:(id)arg1 CMSampleBufferRef:(struct opaqueCMSampleBuffer *)arg2;
- (void)appendSampleBuffer:(id)arg1 CVPixelBufferRef:(struct __CVBuffer *)arg2 withPresentationTime:(CDStruct_1b6d18a9)arg3;
- (void)outputVideoFrame:(id)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (id)mixCameraFrame:(id)arg1 videoFrame:(id)arg2 overlayColor:(_Bool)arg3;
- (void)renderFrame:(id)arg1;
- (id)getRenderFrame:(struct opaqueCMSampleBuffer *)arg1;
- (struct CGRect)getFromRectWhenRender:(id)arg1;
- (struct CGRect)getInRectWhenRender:(id)arg1;
- (void)onCatureAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)onCaptureVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)deleteLastSplit;
- (void)stopRecord:(long long)arg1;
- (void)onTimer;
- (_Bool)startRecord;
- (void)toggleRecord;
- (double)currentDuration;
- (double)recordDuration;
- (struct CGRect)getSourcePreviewFrame;
- (struct CGRect)getPreviewFrame;
- (void)setupSourceVideo:(id)arg1 vid:(id)arg2;
- (void)setupContexts;
- (id)setupFeedViewWithFrame:(struct CGRect)arg1;
- (_Bool)isPreviewLandscape;
- (id)cameraController;
- (void)setupCameraController;
- (void)setDynamicDecoration:(id)arg1;
- (_Bool)loadCVDetectorModel:(id)arg1;
- (_Bool)loadDataModel:(id)arg1;
- (id)previewViewWidthFrame:(struct CGRect)arg1;
- (id)setupRenderView:(struct CGRect)arg1;
- (long long)cameraPosition;
- (void)switchCamera;
- (void)uninstallCapture;
- (void)setupCapture;
- (void)singleRecord:(_Bool)arg1;
- (_Bool)isSplitRecorder;
- (void)dealloc;
- (void)initMediaPicker:(_Bool)arg1;
- (void)init:(_Bool)arg1;
- (id)initWithSingle:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
