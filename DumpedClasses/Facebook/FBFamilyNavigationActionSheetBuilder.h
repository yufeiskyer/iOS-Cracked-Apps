//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBJewelController, FBKVOController, FBMemInstagramUser, FBMemModelObject, FBUserSession, FIGActionSheetController;
@protocol FBNavigationCoordinatorImplProtocol><FBNavigationCoordinatorViewCoordinator, FBQueriedActorFieldsProtocol;

@interface FBFamilyNavigationActionSheetBuilder : NSObject
{
    FBUserSession *_session;
    FIGActionSheetController *_actionSheetController;
    id <FBNavigationCoordinatorImplProtocol><FBNavigationCoordinatorViewCoordinator> _navigationCoordinator;
    _Bool _isQueryRunning;
    _Bool _showAppIconsOnly;
    _Bool _enableWhatsApp;
    _Bool _clearBadgeOnTap;
    FBMemModelObject<FBQueriedActorFieldsProtocol> *_actor;
    FBMemInstagramUser *_instagramUser;
    long long _facebookFriendsOnInstagramCount;
    long long _facebookFriendsOnMessengerCount;
    FBJewelController *_jewelController;
    FBKVOController *_KVOController;
}

- (void).cxx_destruct;
- (id)_instagramFriendsLocalizedString;
- (id)_messengerFriendsLocalizedString;
- (_Bool)_appInstalled:(id)arg1;
- (_Bool)_instagramAppInstalled;
- (_Bool)_messengerAppInstalled;
- (id)_appUrlForAppId:(id)arg1;
- (void)_tapAppIcon:(id)arg1;
- (void)_tapWhatsappIcon;
- (void)_tapInstagramIcon;
- (void)_tapMessengerIcon;
- (void)_tapHeader;
- (void)_dismissActionSheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performTapLoggingWithDestType:(id)arg1 destIntendedSurface:(id)arg2;
- (void)_notificationsJewelCountChanged:(id)arg1 inJewelController:(id)arg2;
- (void)_loadFinishedWithError;
- (void)_loadFinishedWithResponse:(id)arg1;
- (void)_doDataFetchAndUpdateActionSheet;
- (id)_getInstagramBadgeCountToShow;
- (id)_getMessengerBadgeCountToShow;
- (id)_buildInstagramActionSheetButtonItem;
- (id)_buildMessengerActionSheetButtonItem;
- (id)_buildWhatsAppActionSheetButtonItem;
- (id)_actionItems;
- (id)_instagramProfilePhotoOverlayComponent;
- (id)_messengerProfilePhotoOverlayComponentWithURL:(id)arg1;
- (id)_imageComponentForIconName:(id)arg1;
- (id)_headerComponentWithURL:(id)arg1;
- (id)prepareActionSheet;
- (id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 jewelController:(id)arg3;

@end

