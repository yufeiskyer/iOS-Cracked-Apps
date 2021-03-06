//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSNumber;

@interface QPHotQueryModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_remaining;
    NSArray *_hotKeyList;
}

+ (id)hotKeyListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *hotKeyList; // @synthesize hotKeyList=_hotKeyList;
@property(retain, nonatomic) NSNumber *remaining; // @synthesize remaining=_remaining;
- (void).cxx_destruct;

@end

