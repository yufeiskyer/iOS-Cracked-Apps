//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TFESPDYProtocol, TFESPDYStream;

@interface TFESPDYStreamNode : NSObject
{
    TFESPDYStreamNode *next;
    TFESPDYStreamNode *prev;
    TFESPDYStream *stream;
    TFESPDYProtocol *protocol;
    unsigned int streamId;
}

- (void).cxx_destruct;

@end
