//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "O2ODynamicProtocol.h"

@class NSString, O2OCommentAnimateFace, UILabel;

@interface O2OCommentAnimateFaceGroup : UIView <O2ODynamicProtocol>
{
    O2OCommentAnimateFace *_face1;
    UILabel *_label1;
    O2OCommentAnimateFace *_face2;
    UILabel *_label2;
    O2OCommentAnimateFace *_face3;
    UILabel *_label3;
    O2OCommentAnimateFace *_face4;
    UILabel *_label4;
}

@property(retain, nonatomic) UILabel *label4; // @synthesize label4=_label4;
@property(retain, nonatomic) O2OCommentAnimateFace *face4; // @synthesize face4=_face4;
@property(retain, nonatomic) UILabel *label3; // @synthesize label3=_label3;
@property(retain, nonatomic) O2OCommentAnimateFace *face3; // @synthesize face3=_face3;
@property(retain, nonatomic) UILabel *label2; // @synthesize label2=_label2;
@property(retain, nonatomic) O2OCommentAnimateFace *face2; // @synthesize face2=_face2;
@property(retain, nonatomic) UILabel *label1; // @synthesize label1=_label1;
@property(retain, nonatomic) O2OCommentAnimateFace *face1; // @synthesize face1=_face1;
- (void).cxx_destruct;
- (void)beginFaceAnimation;
- (void)setConfig:(id)arg1 children:(id)arg2 item:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
