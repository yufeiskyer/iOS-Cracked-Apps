//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTAlphaThemedButton.h"

@interface TTDiggButton : TTAlphaThemedButton
{
    CDUnknownBlockType _shouldClickBlock;
    unsigned long long _styleType;
    CDUnknownBlockType _buttonClickBlock;
}

+ (id)diggButtonWithStyleType:(unsigned long long)arg1;
+ (id)diggButton;
@property(copy, nonatomic) CDUnknownBlockType buttonClickBlock; // @synthesize buttonClickBlock=_buttonClickBlock;
@property(nonatomic) unsigned long long styleType; // @synthesize styleType=_styleType;
@property(copy, nonatomic) CDUnknownBlockType shouldClickBlock; // @synthesize shouldClickBlock=_shouldClickBlock;
- (void).cxx_destruct;
- (void)setClickedBlock:(CDUnknownBlockType)arg1;
- (void)buttonClicked;
- (void)setDiggCount:(long long)arg1;

@end
