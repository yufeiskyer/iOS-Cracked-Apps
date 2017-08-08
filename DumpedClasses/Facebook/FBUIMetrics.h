//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer, NSMutableArray, NSString, UILabel, UIWindow;

@interface FBUIMetrics : NSObject
{
    FBTimer *_analyticsTimer;
    FBTimer *_localMetricsTimer;
    UIWindow *_statusWindow;
    UILabel *_countLabel;
    struct _FBUIMetricsCount _count;
    NSMutableArray *_arrayOfOverlays;
    _Bool _FIGOverlayEnabled;
    _Bool _FBUIOverlayEnabled;
    _Bool _analyticsEnabled;
    NSString *_analyticsGroup;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *analyticsGroup; // @synthesize analyticsGroup=_analyticsGroup;
@property(nonatomic, getter=isAnalyticsEnabled) _Bool analyticsEnabled; // @synthesize analyticsEnabled=_analyticsEnabled;
@property(nonatomic, getter=isFBUIOverlayEnabled) _Bool FBUIOverlayEnabled; // @synthesize FBUIOverlayEnabled=_FBUIOverlayEnabled;
@property(nonatomic, getter=isFIGOverlayEnabled) _Bool FIGOverlayEnabled; // @synthesize FIGOverlayEnabled=_FIGOverlayEnabled;
- (void).cxx_destruct;
- (void)_overlayViews:(id)arg1 withColor:(id)arg2;
- (void)_clearOverlaysForInfo:(id)arg1;
- (void)_tagObjectWithClassName:(id)arg1 tags:(id)arg2 childrenPropagatedTags:(id)arg3;
- (void)_setup;
- (void)_computeTagsForInfo:(id)arg1 propagatedTags:(id)arg2 result:(id)arg3;
- (void)_traverseWindows;
- (void)_sheduleLocalMetricsTimer;
- (void)_setUpStatusBarWindow;
- (void)_disableLocalMetrics;
- (void)_enableLocalMetrics;
- (void)_applyLocalMetrics;
- (void)_sendAnalytics;
- (void)_disableAnalytics;
- (void)_enableAnalytics;
- (id)init;

@end
