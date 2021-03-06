//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface TTLiveStreamDataModel : NSObject
{
    NSString *_status_display;
    NSNumber *_status;
    NSNumber *_score1;
    NSNumber *_score2;
    NSNumber *_participated;
    NSArray *_msgRegionArray;
    unsigned long long _refresh_interval;
    NSNumber *_infinite_like;
    NSNumber *_infinite_like_new_display;
    NSString *_subtitle;
}

@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSNumber *infinite_like_new_display; // @synthesize infinite_like_new_display=_infinite_like_new_display;
@property(retain, nonatomic) NSNumber *infinite_like; // @synthesize infinite_like=_infinite_like;
@property(nonatomic) unsigned long long refresh_interval; // @synthesize refresh_interval=_refresh_interval;
@property(retain, nonatomic) NSArray *msgRegionArray; // @synthesize msgRegionArray=_msgRegionArray;
@property(copy, nonatomic) NSNumber *participated; // @synthesize participated=_participated;
@property(retain, nonatomic) NSNumber *score2; // @synthesize score2=_score2;
@property(retain, nonatomic) NSNumber *score1; // @synthesize score1=_score1;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *status_display; // @synthesize status_display=_status_display;
- (void).cxx_destruct;

@end

