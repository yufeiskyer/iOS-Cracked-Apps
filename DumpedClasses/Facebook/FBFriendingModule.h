//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAppServiceConfiguringModule-Protocol.h"
#import "FBIntentHandlerConfiguringModule-Protocol.h"
#import "FBJewelConfiguringModule-Protocol.h"
#import "FBMenuItemConfiguringModule-Protocol.h"
#import "FBPushNotificationsConfiguringModule-Protocol.h"
#import "FBURLSegueConfiguringModule-Protocol.h"
#import "FBUserSessionConfiguringModule-Protocol.h"

@class NSString;

@interface FBFriendingModule : NSObject <FBAppServiceConfiguringModule, FBIntentHandlerConfiguringModule, FBJewelConfiguringModule, FBMenuItemConfiguringModule, FBPushNotificationsConfiguringModule, FBURLSegueConfiguringModule, FBUserSessionConfiguringModule>
{
}

+ (id)viewControllerForRequestTabInJewelPopoverWithSession:(id)arg1 jewelController:(id)arg2;
+ (id)viewControllerForRequestTabWithSession:(id)arg1 pymkLocation:(id)arg2;
+ (id)viewControllerForRequestTabWithSession:(id)arg1 howfoundContext:(id)arg2 pymkLocation:(id)arg3;
+ (struct NSDictionary *)scopedObjects;
+ (id)pushNotificationHandlersWithSession:(id)arg1;
+ (id)URLSegues:(id)arg1;
+ (_Bool)_iPadGridProfileFriendListEnabledInSession:(id)arg1;
+ (id)jewelManager:(id)arg1;
+ (id)intentHandlers:(id)arg1 providerMap:(id)arg2;
+ (id)appServicesWithSession:(id)arg1;
+ (struct NSDictionary *)menuItemHandlers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

