//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMHTTPRequestData.h"

@class NSArray, NSString;

@interface NVMServiceRemoveInvalidFoods : NVMHTTPRequestData
{
    NSArray *_entities;
    NSString *_sig;
}

+ (id)removeInvaildFoods:(id)arg1 withContext:(id)arg2 requestDidFinishCallBack:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSString *sig; // @synthesize sig=_sig;
@property(copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
- (void).cxx_destruct;
- (id)extraParameters;
- (id)initWithCartID:(id)arg1 sig:(id)arg2;

@end
