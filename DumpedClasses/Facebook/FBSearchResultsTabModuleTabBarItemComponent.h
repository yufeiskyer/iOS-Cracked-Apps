//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

#import "FBHScrollImpressionLogging-Protocol.h"

@interface FBSearchResultsTabModuleTabBarItemComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    CKTypedComponentAction_4b39899e _action;
    unsigned long long _index;
}

+ (id)newWithTabTitle:(id)arg1 index:(unsigned long long)arg2 options:(const struct FBSearchResultsTabModuleTabBarItemComponentOptions *)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didTap;

@end

