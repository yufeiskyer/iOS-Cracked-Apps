//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HighBoomModel.h"

@class NSArray, NSString;

@interface WordsModel : HighBoomModel
{
    int _word_stroke_line_width;
    NSString *_word_index;
    NSString *_word_text_color;
    NSArray *_word_size;
    NSArray *_word_position;
    NSString *_word_rotation;
    NSArray *_word_effect;
    NSString *_word_background_color;
    NSString *_word_text;
    NSString *_word_stroke_color;
}

@property(nonatomic) int word_stroke_line_width; // @synthesize word_stroke_line_width=_word_stroke_line_width;
@property(copy, nonatomic) NSString *word_stroke_color; // @synthesize word_stroke_color=_word_stroke_color;
@property(copy, nonatomic) NSString *word_text; // @synthesize word_text=_word_text;
@property(copy, nonatomic) NSString *word_background_color; // @synthesize word_background_color=_word_background_color;
@property(retain, nonatomic) NSArray *word_effect; // @synthesize word_effect=_word_effect;
@property(copy, nonatomic) NSString *word_rotation; // @synthesize word_rotation=_word_rotation;
@property(retain, nonatomic) NSArray *word_position; // @synthesize word_position=_word_position;
@property(retain, nonatomic) NSArray *word_size; // @synthesize word_size=_word_size;
@property(copy, nonatomic) NSString *word_text_color; // @synthesize word_text_color=_word_text_color;
@property(copy, nonatomic) NSString *word_index; // @synthesize word_index=_word_index;
- (void)dealloc;

@end

