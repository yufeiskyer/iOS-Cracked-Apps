//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MQQWiFiTestDeviceScanner, NSArray;

@protocol MQQWiFiTestDeviceScannerDelegate <NSObject>

@optional
- (void)scannerDidUpdateVendorInfo:(MQQWiFiTestDeviceScanner *)arg1 deviceList:(NSArray *)arg2;
- (void)scanner:(MQQWiFiTestDeviceScanner *)arg1 didFailedScanning:(long long)arg2;
- (void)scanner:(MQQWiFiTestDeviceScanner *)arg1 finishScanningDeviceList:(NSArray *)arg2;
- (void)scanner:(MQQWiFiTestDeviceScanner *)arg1 progress:(double)arg2 deviceCount:(long long)arg3;
@end
