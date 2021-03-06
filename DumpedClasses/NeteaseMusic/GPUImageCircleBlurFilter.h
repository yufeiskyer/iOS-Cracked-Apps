//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageCircleBlurFilter : GPUImageFilter
{
    int circleTexelAngleStepUniform;
    int circleCenterUniform;
    double _blurAngle;
    struct CGPoint _center;
}

@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) double blurAngle; // @synthesize blurAngle=_blurAngle;
- (id)init;

@end

