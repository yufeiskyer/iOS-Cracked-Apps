//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGLiveBaseJSONModel.h"

@class NSString;

@interface KGSLiveSendMsg : KGLiveBaseJSONModel
{
    int _code;
    int _times;
    NSString *_msg;
}

@property(nonatomic) int times; // @synthesize times=_times;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) int code; // @synthesize code=_code;
- (void).cxx_destruct;

@end
