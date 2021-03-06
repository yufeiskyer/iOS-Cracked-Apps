//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPao_CircleViewController.h"

#import "PPao_StarOwnerHeaderViewDeleate-Protocol.h"

@class NSString, PPao_StarOwnerHeaderView, PPao_StarOwnerInfoView;

@interface PPao_StarOwnerCircleViewController : PPao_CircleViewController <PPao_StarOwnerHeaderViewDeleate>
{
    PPao_StarOwnerInfoView *_infoView;
    PPao_StarOwnerHeaderView *_headerView;
}

@property(retain, nonatomic) PPao_StarOwnerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) PPao_StarOwnerInfoView *infoView; // @synthesize infoView=_infoView;
- (void).cxx_destruct;
- (void)subViewController:(id)arg1 slideUp:(_Bool)arg2 percent:(double)arg3;
- (void)handleNavigationBarHideScrollDown:(id)arg1;
- (void)handleNavigationBarHideScrollUp:(id)arg1;
- (void)subViewController:(id)arg1 scrollPercent:(double)arg2;
- (void)headerViewClickHead:(id)arg1;
- (void)headerViewClickFans:(id)arg1;
- (void)infoViewClick:(id)arg1;
- (void)setting;
- (void)updateOwnerInfo;
- (void)updateTabTypeIfNeed;
- (void)viewSourceDidFailure:(id)arg1;
- (void)viewSourceDidFinish:(id)arg1;
- (void)loadNavigationInfo;
- (void)loadTopView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

