//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBaseComponent;

@protocol SContainerOperateDelegate <NSObject>
- (void)setBottomContainerExpand:(_Bool)arg1 animated:(_Bool)arg2 gesture:(_Bool)arg3 component:(SBaseComponent *)arg4;
- (void)setBottomContainerExpand:(_Bool)arg1 animated:(_Bool)arg2 component:(SBaseComponent *)arg3;
- (void)dismissBottomContainer:(_Bool)arg1 completion:(void (^)(void))arg2 component:(SBaseComponent *)arg3;
- (void)showBottomContainer:(_Bool)arg1 expand:(_Bool)arg2 completion:(void (^)(void))arg3 component:(SBaseComponent *)arg4;
- (void)showBottomContainer:(_Bool)arg1 completion:(void (^)(void))arg2 component:(SBaseComponent *)arg3;
- (void)reloadContainerView:(SBaseComponent *)arg1;
@end

