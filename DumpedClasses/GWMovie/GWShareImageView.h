//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWImagePolicyView.h"

@class GWBaseViewController, GWSaveAndShareToolBar;
@protocol GWAppTypeDelegate;

@interface GWShareImageView : GWImagePolicyView
{
    id <GWAppTypeDelegate> _relateInfo;
    GWBaseViewController *_basevc;
    GWSaveAndShareToolBar *_bar;
}

@property(retain, nonatomic) GWSaveAndShareToolBar *bar; // @synthesize bar=_bar;
@property(retain, nonatomic) GWBaseViewController *basevc; // @synthesize basevc=_basevc;
@property(retain, nonatomic) id <GWAppTypeDelegate> relateInfo; // @synthesize relateInfo=_relateInfo;
- (void).cxx_destruct;
- (void)photoViewImageFinishLoad:(id)arg1;
- (void)photoViewDidEndZoom:(id)arg1;
- (void)photoViewSingleTap:(id)arg1;
- (void)tapImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

