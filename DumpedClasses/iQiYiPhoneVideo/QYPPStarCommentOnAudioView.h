//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPStarCommentOnBaseView.h"

@class QYPPAudioView;

@interface QYPPStarCommentOnAudioView : QYPPStarCommentOnBaseView
{
    QYPPAudioView *_audio;
}

@property(retain, nonatomic) QYPPAudioView *audio; // @synthesize audio=_audio;
- (void).cxx_destruct;
- (void)virtualStopAudio;
- (void)virtualPlayAudio;
- (void)virtualLayoutElementContent:(double)arg1;
- (void)virtualAssignElementContent:(id)arg1;
- (void)virtualResetElementContent;
- (void)virtualCreateSubElements;

@end

