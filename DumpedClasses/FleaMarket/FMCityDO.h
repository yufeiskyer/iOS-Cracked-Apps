//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface FMCityDO : NSObject <NSCopying>
{
    long long _locationID;
    NSString *_name;
    int _type;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long locationID; // @synthesize locationID=_locationID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
