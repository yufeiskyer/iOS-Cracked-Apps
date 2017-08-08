//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAudioStreamRecorderDelegate-Protocol.h"
#import "FBShortwaveClientListener-Protocol.h"

@class FBAudioStreamRecorder, FBMobileTraceRemoteTokenPtr, FBShortwaveClient, FBSpeechRecognitionServiceListenerAnnouncer, NSString;

@interface FBSpeechRecognitionService : NSObject <FBShortwaveClientListener, FBAudioStreamRecorderDelegate>
{
    FBShortwaveClient *_client;
    FBAudioStreamRecorder *_audioRecorder;
    FBSpeechRecognitionServiceListenerAnnouncer *_announcer;
    unsigned long long _funnelInstanceID;
    FBMobileTraceRemoteTokenPtr *_traceToken;
    NSString *_fbTraceMeta;
    _Bool _endOfSpeechDetection;
    _Bool _ignoreInput;
}

@property(nonatomic) _Bool ignoreInput; // @synthesize ignoreInput=_ignoreInput;
@property(nonatomic) _Bool endOfSpeechDetection; // @synthesize endOfSpeechDetection=_endOfSpeechDetection;
- (void).cxx_destruct;
- (void)onError:(id)arg1;
- (void)onRecognitionEnd;
- (void)onEndOfSpeech;
- (void)onResult:(id)arg1;
- (void)onAudioError:(int)arg1 withMessage:(id)arg2;
- (void)onAudioInterruption:(unsigned long long)arg1;
- (void)onAudioUpdate:(short *)arg1 withLength:(unsigned long long)arg2;
- (void)_handleAudioError:(int)arg1;
- (void)_endFunnelAndFBTrace;
- (void)_logAction:(id)arg1 tag:(id)arg2;
- (void)_startFunnel;
- (void)_stopFBTrace;
- (void)_startFBTrace;
- (void)_toggleRecording:(_Bool)arg1;
@property(readonly, nonatomic) _Bool running;
- (void)setFBTraceMeta:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)stopRecognition;
- (void)startRecognition;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 settings:(id)arg2;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
