//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GetMethodInfo.h"

@class NSString;

@interface PostFileMethodInfo : GetMethodInfo
{
    NSString *_fileLocalUrl;
    id <ASIProgressDelegate> _uploadProgressDelegate;
}

@property(nonatomic) __weak id <ASIProgressDelegate> uploadProgressDelegate; // @synthesize uploadProgressDelegate=_uploadProgressDelegate;
@property(copy, nonatomic) NSString *fileLocalUrl; // @synthesize fileLocalUrl=_fileLocalUrl;
- (void).cxx_destruct;

@end
