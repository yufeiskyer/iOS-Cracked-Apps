//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADMAdNetworkConnector.h"

@class GADAdLoaderConfiguration;

@interface GADMAdNetworkConnectorNativeAd : GADMAdNetworkConnector
{
    GADAdLoaderConfiguration *_adLoaderConfiguration;
}

@property(retain, nonatomic) GADAdLoaderConfiguration *adLoaderConfiguration; // @synthesize adLoaderConfiguration=_adLoaderConfiguration;
- (void).cxx_destruct;
- (void)adapter:(id)arg1 didFailAd:(id)arg2;
- (void)adapter:(id)arg1 didReceiveMediatedNativeAd:(id)arg2;
- (void)getAdFromAdapterWithType:(id)arg1;

@end

