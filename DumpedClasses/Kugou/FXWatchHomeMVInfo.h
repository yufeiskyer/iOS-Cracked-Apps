//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface FXWatchHomeMVInfo : NSObject
{
    NSMutableArray *_entityArray;
    NSMutableArray *_hotArray;
    NSMutableArray *_latestArray;
    NSArray *_displayEntityArray;
    NSArray *_infoArray;
    NSArray *_channelCategory;
}

+ (id)channelCategoryWithDic:(id)arg1;
+ (id)allMVResponseWithDic:(id)arg1 withType:(long long)arg2;
+ (id)recommendMVResponseWithDic:(id)arg1;
@property(retain, nonatomic) NSArray *channelCategory; // @synthesize channelCategory=_channelCategory;
@property(retain, nonatomic) NSArray *infoArray; // @synthesize infoArray=_infoArray;
@property(retain, nonatomic) NSArray *displayEntityArray; // @synthesize displayEntityArray=_displayEntityArray;
@property(retain, nonatomic) NSMutableArray *latestArray; // @synthesize latestArray=_latestArray;
@property(retain, nonatomic) NSMutableArray *hotArray; // @synthesize hotArray=_hotArray;
@property(retain, nonatomic) NSMutableArray *entityArray; // @synthesize entityArray=_entityArray;
- (void).cxx_destruct;

@end

