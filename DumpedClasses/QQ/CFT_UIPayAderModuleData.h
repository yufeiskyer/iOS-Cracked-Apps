//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CFT_UIPayAderModuleData : NSObject
{
    _Bool _isUserCurrentValue;
    _Bool _isTouchItem;
    int _moduleType;
    int _contentType;
    int _totalNum;
    int _currentNum;
    int _iTid;
    int _moduleIndex;
    int _status;
    NSString *_strIconUrl;
    NSString *_strTitle;
    NSString *_strDesc;
    NSString *_strLinkurl;
}

@property(nonatomic) _Bool isTouchItem; // @synthesize isTouchItem=_isTouchItem;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int moduleIndex; // @synthesize moduleIndex=_moduleIndex;
@property(nonatomic) int iTid; // @synthesize iTid=_iTid;
@property(nonatomic) _Bool isUserCurrentValue; // @synthesize isUserCurrentValue=_isUserCurrentValue;
@property(retain, nonatomic) NSString *strLinkurl; // @synthesize strLinkurl=_strLinkurl;
@property(nonatomic) int currentNum; // @synthesize currentNum=_currentNum;
@property(nonatomic) int totalNum; // @synthesize totalNum=_totalNum;
@property(retain, nonatomic) NSString *strDesc; // @synthesize strDesc=_strDesc;
@property(retain, nonatomic) NSString *strTitle; // @synthesize strTitle=_strTitle;
@property(retain, nonatomic) NSString *strIconUrl; // @synthesize strIconUrl=_strIconUrl;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(nonatomic) int moduleType; // @synthesize moduleType=_moduleType;
- (void)dealloc;

@end

