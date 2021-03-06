//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIView;
@protocol FBLoadingView;

@interface FBGroupFeedCollectionComponentConfiguration : NSObject
{
    _Bool _hasInitialLoadingView;
    _Bool _useComponentWidth;
    UIView<FBLoadingView> *_initialLoadingView;
    UIColor *_backgroundColor;
    UIView *_noContentView;
}

@property(readonly, nonatomic) UIView *noContentView; // @synthesize noContentView=_noContentView;
@property(readonly, nonatomic) _Bool useComponentWidth; // @synthesize useComponentWidth=_useComponentWidth;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIView<FBLoadingView> *initialLoadingView; // @synthesize initialLoadingView=_initialLoadingView;
@property(readonly, nonatomic) _Bool hasInitialLoadingView; // @synthesize hasInitialLoadingView=_hasInitialLoadingView;
- (void).cxx_destruct;
- (id)initWithHasInitialLoadingView:(_Bool)arg1 initialLoadingView:(id)arg2 backgroundColor:(id)arg3 useComponentWidth:(_Bool)arg4 noContentView:(id)arg5;

@end

