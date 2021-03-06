//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPaymentsCheckoutFlowCollectedData, NSString, UITableViewCell;
@protocol FBPaymentsCheckoutConfirmationActionDelegate, FBPaymentsCheckoutResponse, FBPaymentsNavigationDelegate;

@protocol FBPaymentsCheckoutConfirmationAction <NSObject>
@property(nonatomic) __weak id <FBPaymentsCheckoutConfirmationActionDelegate> actionDelegate;
@property(nonatomic) __weak id <FBPaymentsNavigationDelegate> navigationDelegate;
- (void)handleActionWithCheckoutResponse:(id <FBPaymentsCheckoutResponse>)arg1 checkoutFlowCollectedData:(FBPaymentsCheckoutFlowCollectedData *)arg2;
- (NSString *)actionTitle;
- (_Bool)isDisabledForCheckoutResponse:(id <FBPaymentsCheckoutResponse>)arg1;

@optional
- (void)handleFollowUpAction;
- (double)heightForActionCell;
- (void)configureActionCell:(UITableViewCell *)arg1 withCheckoutResponse:(id <FBPaymentsCheckoutResponse>)arg2 checkoutFlowCollectedData:(FBPaymentsCheckoutFlowCollectedData *)arg3;
- (UITableViewCell *)newActionCell;
- (NSString *)cellReuseIdentifier;
@end

