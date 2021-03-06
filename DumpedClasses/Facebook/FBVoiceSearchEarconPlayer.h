//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"
#import "FBAudioSessionManagerClient-Protocol.h"
#import "FBSystemAudioSessionManagerListener-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface FBVoiceSearchEarconPlayer : NSObject <AVAudioPlayerDelegate, FBAudioSessionManagerClient, FBSystemAudioSessionManagerListener>
{
    NSDictionary *_soundPlayers;
    NSMutableDictionary *_completionBlocks;
    _Bool _externalSpeakerConnected;
}

+ (id)sharedPlayer;
- (void).cxx_destruct;
- (void)_stopAllSounds;
- (id)_createSoundPlayers;
- (void)audioSessionManagerUpdatedAudioSession:(id)arg1;
- (void)audioSessionManagerNotedRouteChange:(id)arg1;
@property(readonly, nonatomic) unsigned long long outputOptions;
@property(readonly, nonatomic) unsigned long long outputCoordinationMode;
@property(readonly, nonatomic) unsigned long long audioDirection;
- (void)finishInterruptionAndResume:(_Bool)arg1;
- (void)beginInterruption;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)playSound:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeFromAudioManager;
- (void)addToAudioManager;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) unsigned long long audioSessionMode;
@property(readonly, nonatomic) unsigned long long clientPriority;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool disableOverrideOutputPort;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long inputOptions;
@property(readonly) Class superclass;

@end

