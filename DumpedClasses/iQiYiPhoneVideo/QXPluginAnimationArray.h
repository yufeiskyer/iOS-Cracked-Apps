//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface QXPluginAnimationArray : NSObject
{
    NSMutableArray *_animateArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *animateArray; // @synthesize animateArray=_animateArray;
- (void).cxx_destruct;
- (void)test;
- (void)popAllAnimation;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)popAnimation;
- (void)pushAnimation:(id)arg1;
- (id)init;

@end

