//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLock.h>

@interface _priv_NBSRingQueue : NSLock
{
    id list[201];
    int count;
    int bottom;
    int bottem;
}

+ (id)ringWithMaxLength:(int)arg1;
@property(readonly) int bottem; // @synthesize bottem;
@property int count; // @synthesize count;
- (void).cxx_destruct;
- (id)getItem:(int)arg1;
- (void)clear;
- (_Bool)isFull;
- (id)pop;
- (void)push:(id)arg1;
- (id)init;

@end
