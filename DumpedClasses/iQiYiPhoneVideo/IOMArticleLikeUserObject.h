//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IOMCommonActionTarget, NSString;

@interface IOMArticleLikeUserObject : NSObject
{
    NSString *_uid;
    NSString *_icon;
    IOMCommonActionTarget *_target;
}

@property(copy, nonatomic) IOMCommonActionTarget *target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)parseDataDic:(id)arg1;

@end

