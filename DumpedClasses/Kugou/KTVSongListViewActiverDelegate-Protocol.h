//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTV_SongInfo, KtvProgressButton;

@protocol KTVSongListViewActiverDelegate <NSObject>
- (void)actionThemeCount:(KtvProgressButton *)arg1;
- (void)detailViewViewVC:(KTV_SongInfo *)arg1;
- (void)recordViewVC:(KTV_SongInfo *)arg1;
- (void)ktvTableViewDidScroll:(float)arg1;
@end
