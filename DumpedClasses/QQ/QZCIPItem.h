//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZModelObject.h"

@class NSMutableArray, NSString;

@interface QZCIPItem : QZModelObject
{
    long long _ipType;
}

@property(nonatomic) long long ipType; // @synthesize ipType=_ipType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *ip; // @dynamic ip;
@property(retain, nonatomic) NSMutableArray *portsMutlArray; // @dynamic portsMutlArray;

@end

