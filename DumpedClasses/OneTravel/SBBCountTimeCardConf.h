//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBCardConf.h"

@class NSString;

@interface SBBCountTimeCardConf : SBBCardConf
{
    _Bool _enableMinuteUnit;
    _Bool _enableFinishLoading;
    NSString *_text;
    double _currenInterval;
    double _maxInterval;
    NSString *_finishTip;
}

@property(retain, nonatomic) NSString *finishTip; // @synthesize finishTip=_finishTip;
@property(nonatomic) _Bool enableFinishLoading; // @synthesize enableFinishLoading=_enableFinishLoading;
@property(nonatomic) double maxInterval; // @synthesize maxInterval=_maxInterval;
@property(nonatomic) double currenInterval; // @synthesize currenInterval=_currenInterval;
@property(nonatomic) _Bool enableMinuteUnit; // @synthesize enableMinuteUnit=_enableMinuteUnit;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end
