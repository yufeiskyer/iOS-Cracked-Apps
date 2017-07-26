//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WXSPMMonitor : NSObject
{
    NSString *_spm_id;
}

- (void).cxx_destruct;
- (id)replaceFirst:(id)arg1 with:(id)arg2 byPattern:(id)arg3;
- (id)replace:(id)arg1 with:(id)arg2 byPattern:(id)arg3;
- (_Bool)isNumber:(id)arg1;
- (int)parseInt:(id)arg1;
- (void)setAttribut:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)elements:(id)arg1 byTagName:(id)arg2;
- (_Bool)spmIsSPMAnchorIdMatch:(id)arg1;
- (id)tagName:(id)arg1;
- (_Bool)isMatch:(id)arg1 pattern:(id)arg2;
- (_Bool)isEmpty:(id)arg1;
- (id)tryToGetAttribute:(id)arg1 attrName:(id)arg2;
- (void)spmWrite:(id)arg1 href:(id)arg2;
- (id)spmUpdateHref:(id)arg1 withSPMId:(id)arg2;
- (void)spmAnchorEnsureSPMIdInHref:(id)arg1 spmId:(id)arg2 isNotChangeHref:(_Bool)arg3;
- (id)SPMData;
- (id)spmGetAnchor4thIdSpmD:(id)arg1;
- (id)spmGetSPMIdFromHref:(id)arg1;
- (id)tryToGetHref:(id)arg1;
- (id)spmGetModuleLinks:(id)arg1 isAutoSpmD:(_Bool)arg2;
- (void)spmInitSPMModule:(id)arg1 spmC:(id)arg2 isNotChangeHref:(_Bool)arg3 isAutoSpmD:(_Bool)arg4;
- (void)spmDealNoneSPMLink:(id)arg1 isNotChangeHref:(_Bool)arg2;
- (id)spmSpmGetParentSPMId:(id)arg1;
- (void)spmSpmAnchorChk:(id)arg1 isNotChangeHref:(_Bool)arg2;
- (void)doTrace:(id)arg1;
- (id)initWithComponent:(id)arg1;

@end
