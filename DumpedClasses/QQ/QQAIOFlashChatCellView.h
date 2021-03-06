//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCommonCellView.h"

#import "QQAIOFlashChatModelDelegate.h"

@class NSString, QQAIOFlashChatArkPlaceholderView, QQAIOFlashChatArkSourceView;

@interface QQAIOFlashChatCellView : QQAIOCommonCellView <QQAIOFlashChatModelDelegate>
{
    QQAIOFlashChatArkPlaceholderView *_placeholderView;
    QQAIOFlashChatArkSourceView *_sourceView;
    struct CGRect _arkViewFrame;
}

@property(retain, nonatomic) QQAIOFlashChatArkSourceView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) QQAIOFlashChatArkPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(nonatomic) struct CGRect arkViewFrame; // @synthesize arkViewFrame=_arkViewFrame;
- (void).cxx_destruct;
- (id)getMenuItems;
- (_Bool)didTouchBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)GetPaoPaoBgRect;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)flashChatModel:(id)arg1 didChangeState:(long long)arg2;
- (struct CGSize)arkViewSize;
- (void)hideArkView;
- (void)cancelPreviousAnim;
- (void)deferStartAnimating;
- (void)showArkView:(id)arg1;
- (void)hidePlaceholderView;
- (void)showArkLoadFailedView;
- (void)showArkLoadingView;
- (void)drawContent:(struct CGRect)arg1;
- (void)drawBubble;
- (void)willDrawBubble;
- (void)prepareForReuse;
- (id)arkView;
- (void)setAioModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

