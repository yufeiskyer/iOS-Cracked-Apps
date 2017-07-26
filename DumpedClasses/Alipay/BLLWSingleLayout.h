//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLLWLayout.h"

@interface BLLWSingleLayout : BLLWLayout
{
    _Bool _isLastLine;
    BLLWLayout *_topLeftText;
    BLLWLayout *_topRightText;
    BLLWLayout *_bottomLeftText;
    BLLWLayout *_bottomRightText;
    BLLWLayout *_bg;
    BLLWLayout *_headImage;
}

+ (id)setRightChatSingleLayout:(id)arg1 Data:(id)arg2 Style:(id)arg3;
+ (id)setLeftChatSingleLayout:(id)arg1 Data:(id)arg2 Style:(id)arg3;
+ (id)setNormalSingleLayout:(id)arg1 Data:(id)arg2 Style:(id)arg3;
+ (id)stationarySingleLayout:(id)arg1 X:(double)arg2 Y:(double)arg3 LeftWidth:(double)arg4 RightWidth:(double)arg5 Space:(double)arg6 TopHeight:(double)arg7 BottomHeight:(double)arg8;
+ (id)singleStyle:(id)arg1;
+ (id)layoutWithData:(id)arg1 Style:(id)arg2;
@property(nonatomic) _Bool isLastLine; // @synthesize isLastLine=_isLastLine;
@property(retain, nonatomic) BLLWLayout *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) BLLWLayout *bg; // @synthesize bg=_bg;
@property(retain, nonatomic) BLLWLayout *bottomRightText; // @synthesize bottomRightText=_bottomRightText;
@property(retain, nonatomic) BLLWLayout *bottomLeftText; // @synthesize bottomLeftText=_bottomLeftText;
@property(retain, nonatomic) BLLWLayout *topRightText; // @synthesize topRightText=_topRightText;
@property(retain, nonatomic) BLLWLayout *topLeftText; // @synthesize topLeftText=_topLeftText;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg1;

@end
