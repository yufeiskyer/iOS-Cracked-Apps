//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBFragmentModelProtocol-Protocol.h"

@class FBGraphQLConsistency, FBGraphQLServiceToken, NSNumber, NSObject, NSString;
@protocol FBAdHistoryAdgroupComponentGraphQLFragmentBuilder, FBAdHistoryAdgroupComponentGraphQL_creativeFragment, FBAdHistoryAdgroupComponentGraphQL_feedUnitPreviewFragment, FBAdHistoryAdgroupComponentGraphQL_previewImageFragment, OS_dispatch_queue;

@protocol FBAdHistoryAdgroupComponentGraphQLFragment <FBFragmentModelProtocol>
- (id <FBAdHistoryAdgroupComponentGraphQLFragmentBuilder>)updateBuilder;
- (id <FBAdHistoryAdgroupComponentGraphQLFragmentBuilder>)copyBuilder;
- (FBGraphQLServiceToken *)subscribeWithConsistency:(FBGraphQLConsistency *)arg1 updateCallback:(void (^)(id <FBAdHistoryAdgroupComponentGraphQLFragment>, id <FBGraphQLServiceStatus>))arg2 failureCallback:(void (^)(NSError *))arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4;
- (id <FBAdHistoryAdgroupComponentGraphQL_previewImageFragment>)previewImage;
- (NSString *)graphQLID;
- (_Bool)hasViewerPinnedValue;
- (NSNumber *)hasViewerPinned;
- (id <FBAdHistoryAdgroupComponentGraphQL_feedUnitPreviewFragment>)feedUnitPreview;
- (id <FBAdHistoryAdgroupComponentGraphQL_creativeFragment>)creative;
@end

