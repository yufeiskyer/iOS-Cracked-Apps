//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MQQEncryptAlbumManager : NSObject
{
    _Bool _hasVerified;
    _Bool _isHidden;
    _Bool _popsAlbumWhenEnteringBackground;
    NSArray *_secretQuestionArray;
}

+ (_Bool)hasBindedQQInNewVersion;
+ (void)removeBinding;
+ (void)setBinding:(id)arg1;
+ (id)getBinding;
+ (_Bool)hasBinded;
+ (_Bool)usedBinding;
+ (void)initBinding;
+ (_Bool)hasPasswordInNewVersion;
+ (_Bool)savePassword:(id)arg1;
+ (id)readPassword;
+ (_Bool)existPassword;
+ (id)sharedPasswordManager;
@property(retain, nonatomic) NSArray *secretQuestionArray; // @synthesize secretQuestionArray=_secretQuestionArray;
@property(nonatomic) _Bool popsAlbumWhenEnteringBackground; // @synthesize popsAlbumWhenEnteringBackground=_popsAlbumWhenEnteringBackground;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) _Bool hasVerified; // @synthesize hasVerified=_hasVerified;
- (void)hideEncryptedAlbumManually_V2;
- (_Bool)encryptedAlbumHiddenManually_V2;
- (_Bool)hasCompletedTips2;
- (void)completeTips2;
- (_Bool)hasHiddenAlbumManually;
- (void)hideAlbumManually;
- (_Bool)hasCompletedTips1;
- (void)displayTips1;
- (float)tipsStatus;
- (_Bool)shouldAutohideSecretAlbum;
- (void)setAutohideSecretAlbum:(_Bool)arg1;
- (_Bool)isSetSecretGesture;
- (void)setSecretGesture:(_Bool)arg1;
- (void)verifyByTouchID:(CDUnknownBlockType)arg1;
- (_Bool)isTouchIDSettingInitialized;
- (_Bool)isSetTouchID;
- (void)setTouchID:(_Bool)arg1;
- (_Bool)isTouchIDAvailable;
- (_Bool)isTouchIDSupported;
- (_Bool)saveSecretQuestionAndAnswer:(id)arg1;
- (long long)isVerifyAnswer1:(id)arg1 answer2:(id)arg2 answer3:(id)arg3;
- (id)albumSecretAnswer:(long long)arg1;
- (id)albumSecretQuestion:(long long)arg1;
- (_Bool)isSetSecretQuestion;
- (_Bool)verifyPassword:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)cancelPoppingOutEncryptAlbum;
- (void)popOutEncryptAlbum;
- (void)dealloc;
- (id)init;

@end
