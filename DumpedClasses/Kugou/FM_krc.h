//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FM_krc : NSObject
{
    id <krcdelegate> krcdel;
    NSMutableArray *id3info;
}

@property(retain, nonatomic) NSMutableArray *id3info; // @synthesize id3info;
@property(retain, nonatomic) id krcdel; // @synthesize krcdel;
- (id)uncompressZippedData:(id)arg1;
- (void)explaSongWord:(id)arg1;
- (id)explakrc:(id)arg1;
- (id)Translate:(id)arg1;
- (id)GBKtoUTF8:(id)arg1;
- (id)Unicode2GBK:(id)arg1;
- (void)dealloc;

@end

