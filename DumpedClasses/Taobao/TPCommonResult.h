//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPResult.h"

@class NSString;

@interface TPCommonResult : TPResult
{
    NSString *_title;
    NSString *_content;
    NSString *_picUrl;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end
