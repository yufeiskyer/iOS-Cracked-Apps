//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, QYPlayerJustLookAtHerController;

@protocol QYNewFullPannelContentViewDelegate <NSObject>
- (void)retryJustLookAtHerData;
- (QYPlayerJustLookAtHerController *)getJustLookAtHerCtl;
- (long long)getCurJustLookAtHerIndex;
- (void)setJustLookAtHerByDic:(NSDictionary *)arg1 rowIndex:(long long)arg2;
- (void)doSnapshot;
- (void)playerDanmuClickEventLoginWithType:(int)arg1;
- (void)playerDanmuClickEventType:(unsigned long long)arg1 value:(long long)arg2;
- (void)playerDanMuSettingPannelByFullPannel:(unsigned long long)arg1 value:(int)arg2;
- (void)dismissFullPannelContentView;
- (void)playerPannelByFullPannel:(int)arg1 object:(id)arg2;

@optional
- (void)showAccessoryViewsByDismissFullPannel;
@end

