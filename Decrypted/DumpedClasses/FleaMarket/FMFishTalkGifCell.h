//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMFishTalkCell.h"

@class FMImageView;

@interface FMFishTalkGifCell : FMFishTalkCell
{
    FMImageView *_contentImageView;
}

+ (struct CGSize)imageScaledSize:(struct CGSize)arg1 OriSize:(struct CGSize)arg2;
+ (struct CGSize)contentSize:(id)arg1;
@property(retain, nonatomic) FMImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
- (void).cxx_destruct;
- (void)fishTalkSendStatusChange:(unsigned long long)arg1;
- (void)setFishTalkDO:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
