//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, TTVideoCommentContentLayout, TTVideoCommentDeleteLayout, TTVideoCommentDigLayout, TTVideoCommentInfoLayout, TTVideoCommentMediaLayout, TTVideoCommentNameLayout, TTVideoCommentRightImageLayout;

@interface TTVideoCommentLayout : NSObject
{
    _Bool _isUnfold;
    NSNumber *_identifier;
    TTVideoCommentNameLayout *_nameLayout;
    TTVideoCommentMediaLayout *_mediaLayout;
    TTVideoCommentContentLayout *_contentLayout;
    TTVideoCommentDigLayout *_digLayout;
    TTVideoCommentInfoLayout *_infoLayout;
    TTVideoCommentRightImageLayout *_rightImageLayout;
    TTVideoCommentDeleteLayout *_deleteLayout;
    double _cellWidth;
    double _cellHeight;
    double _cellUnfoldHeight;
}

+ (double)heightForContentLabel:(id)arg1 width:(double)arg2 needLimitLines:(_Bool)arg3;
+ (id)infoButtonStringWithModel:(id)arg1;
+ (double)widthForDescLabel:(double)arg1;
+ (double)heightForModel:(id)arg1 width:(double)arg2;
@property(nonatomic) _Bool isUnfold; // @synthesize isUnfold=_isUnfold;
@property(nonatomic) double cellUnfoldHeight; // @synthesize cellUnfoldHeight=_cellUnfoldHeight;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) TTVideoCommentDeleteLayout *deleteLayout; // @synthesize deleteLayout=_deleteLayout;
@property(retain, nonatomic) TTVideoCommentRightImageLayout *rightImageLayout; // @synthesize rightImageLayout=_rightImageLayout;
@property(retain, nonatomic) TTVideoCommentInfoLayout *infoLayout; // @synthesize infoLayout=_infoLayout;
@property(retain, nonatomic) TTVideoCommentDigLayout *digLayout; // @synthesize digLayout=_digLayout;
@property(retain, nonatomic) TTVideoCommentContentLayout *contentLayout; // @synthesize contentLayout=_contentLayout;
@property(retain, nonatomic) TTVideoCommentMediaLayout *mediaLayout; // @synthesize mediaLayout=_mediaLayout;
@property(retain, nonatomic) TTVideoCommentNameLayout *nameLayout; // @synthesize nameLayout=_nameLayout;
@property(retain, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)setCellLayoutWithCommentModel:(id)arg1 containViewWidth:(double)arg2;

@end
