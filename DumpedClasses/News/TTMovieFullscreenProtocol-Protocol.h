//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, UITableView, UIView;

@protocol TTMovieFullscreenProtocol <NSObject>
@property(nonatomic) struct CGRect movieInFatherViewFrame;
@property(nonatomic) __weak UIView *movieFatherView;
@property(copy, nonatomic) NSIndexPath *movieFatherCellIndexPath;
@property(nonatomic) __weak UITableView *movieFatherCellTableView;
@property(nonatomic) _Bool hasMovieFatherCell;
- (void)forceStoppingMovie;
@end

