//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@protocol FBTableViewMutating;

@protocol FBTableViewSectionDataSource <UITableViewDelegate, UITableViewDataSource>
@property(nonatomic) id <FBTableViewMutating> tableViewMutator;

@optional
@property(nonatomic, getter=isActive) _Bool active;
- (void)announceRootTableViewChange;
@end
