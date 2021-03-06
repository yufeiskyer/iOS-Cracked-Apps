//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SActButtonCom.h"

@class RACDisposable;

@interface SOfoActButtonUnit : SActButtonCom
{
    RACDisposable *_finishOrderDisp;
}

@property(retain, nonatomic) RACDisposable *finishOrderDisp; // @synthesize finishOrderDisp=_finishOrderDisp;
- (void).cxx_destruct;
- (long long)orderStatusWithModel:(id)arg1;
- (void)updateOrderWithModel:(id)arg1;
- (void)ofoEndTripWithToast:(_Bool)arg1;
- (id)signalWhiteList;
- (void)bindSignal;
- (void)finishOrderWithToast:(_Bool)arg1;
- (void)clickUnfinishedButton;
- (void)clickActButton;
- (void)unbind;
- (void)bind:(id)arg1;

@end

