//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString;

@interface APMidasCommonCGIRespParser : NSObject
{
    long long retCode;
    NSString *innerErrorCode;
    NSString *retMsg;
    NSMutableDictionary *jsonDict;
    NSArray *aesKeys;
}

- (void)parseUinInfo;
- (void)parseZy;
- (void)parseRet;
- (void)parse;
- (void)dealloc;
- (id)initWithJSONDict:(id)arg1;
- (id)init;

@end

