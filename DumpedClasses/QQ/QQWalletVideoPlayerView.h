//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZVideoPlayerView.h"

@class NSDictionary, NSString, NSTimer;

@interface QQWalletVideoPlayerView : QZVideoPlayerView
{
    _Bool _isPauseByAppResignActive;
    NSDictionary *_query;
    NSTimer *_timer;
    NSString *_cacheSavePath;
    int _xo;
}


// Remaining properties
@property(copy, nonatomic) NSString *cacheSavePath; // @dynamic cacheSavePath;
@property(nonatomic) _Bool isPauseByAppResignActive; // @dynamic isPauseByAppResignActive;
@property(retain, nonatomic) NSDictionary *query; // @dynamic query;
@property(retain, nonatomic) NSTimer *timer; // @dynamic timer;
@end

