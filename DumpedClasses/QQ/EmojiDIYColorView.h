//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "EmojiDIYColorItemClick.h"

@class NSArray, NSMutableArray, NSString;

@interface EmojiDIYColorView : UIView <EmojiDIYColorItemClick>
{
    NSArray *colorArr;
    NSArray *nameArr;
    NSMutableArray *viewArr;
    id <EmojiDIYColorItemClick> _delegate;
}

@property(nonatomic) id <EmojiDIYColorItemClick> delegate; // @synthesize delegate=_delegate;
- (void)emojiDIYColorClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
