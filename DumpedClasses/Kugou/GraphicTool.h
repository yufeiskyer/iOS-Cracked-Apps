//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GraphicTool : NSObject
{
}

+ (unsigned int)calMergeColor:(unsigned int)arg1 powl:(float)arg2 selectH:(float)arg3 selectS:(float)arg4 selectL:(float)arg5;
+ (void)hsl2RGB:(float)arg1 ss:(float)arg2 ll:(float)arg3 a:(unsigned short)arg4 retColor:(unsigned int *)arg5;
+ (void)hsl2RGBF:(float)arg1 ss:(float)arg2 ll:(float)arg3 a:(unsigned short)arg4 retR:(float *)arg5 retG:(float *)arg6 retB:(float *)arg7;
+ (float)calPowl:(float)arg1;
+ (void)rgb2HSL:(unsigned int)arg1 retH:(float *)arg2 retS:(float *)arg3 retL:(float *)arg4;
+ (void)rgbf2HSL:(float)arg1 g:(float)arg2 b:(float)arg3 retH:(float *)arg4 retS:(float *)arg5 retL:(float *)arg6;

@end

