//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XBaseLayout.h"

@class UIView;

@interface XStackLayout : XBaseLayout
{
    unsigned long long _curIndex;
    UIView *_owner;
}

@property(nonatomic) __weak UIView *owner; // @synthesize owner=_owner;
@property(nonatomic) unsigned long long curIndex; // @synthesize curIndex=_curIndex;
- (void).cxx_destruct;
- (void)layout:(id)arg1;
- (CDStruct_3c058996)hitSizeInfo:(id)arg1 wHint:(double)arg2 hHint:(double)arg3;
- (void)next;

@end
