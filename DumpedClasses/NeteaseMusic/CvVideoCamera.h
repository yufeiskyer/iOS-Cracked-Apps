//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CvAbstractCamera.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVCaptureVideoDataOutput, CALayer, NSObject<OS_dispatch_queue>, NSString;

@interface CvVideoCamera : CvAbstractCamera <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureVideoDataOutput *videoDataOutput;
    NSObject<OS_dispatch_queue> *videoDataOutputQueue;
    CALayer *customPreviewLayer;
    _Bool grayscaleMode;
    _Bool recordVideo;
    _Bool rotateVideo;
    AVAssetWriterInput *recordAssetWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *recordPixelBufferAdaptor;
    AVAssetWriter *recordAssetWriter;
    CDStruct_1b6d18a9 lastSampleTime;
    int recordingCountDown;
    id <CvVideoCameraDelegate> delegate;
}

@property(retain, nonatomic) AVAssetWriter *recordAssetWriter; // @synthesize recordAssetWriter;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *recordPixelBufferAdaptor; // @synthesize recordPixelBufferAdaptor;
@property(retain, nonatomic) AVAssetWriterInput *recordAssetWriterInput; // @synthesize recordAssetWriterInput;
@property(nonatomic) _Bool rotateVideo; // @synthesize rotateVideo;
@property(nonatomic) _Bool recordVideo; // @synthesize recordVideo;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput;
@property(retain, nonatomic) CALayer *customPreviewLayer; // @synthesize customPreviewLayer;
@property(nonatomic) _Bool grayscaleMode; // @synthesize grayscaleMode;
@property(nonatomic) id <CvVideoCameraDelegate> delegate; // @synthesize delegate;
- (id)videoFileString;
- (id)videoFileURL;
- (void)saveVideo;
- (void)updateOrientation;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (struct __CVBuffer *)pixelBufferFromCGImage:(struct CGImage *)arg1;
- (void)createCustomVideoPreview;
- (void)createCaptureOutput;
- (void)createVideoFileOutput;
- (void)createVideoDataOutput;
- (void)layoutPreviewLayer;
- (void)adjustLayoutToInterfaceOrientation:(long long)arg1;
- (void)stop;
- (void)start;
- (id)initWithParentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

