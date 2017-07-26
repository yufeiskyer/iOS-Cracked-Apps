//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQYPC2BEmbedWebViewController.h"

@class NSMutableArray, NSURLRequest, QQYPC2BAVChatModel, UIActivityIndicatorView;

@interface QQYPC2BChatWebViewController : QQYPC2BEmbedWebViewController
{
    NSMutableArray *_arrJsToExcute;
    _Bool _isWebReady;
    UIActivityIndicatorView *_loadingView;
    QQYPC2BAVChatModel *_chatModel;
    NSURLRequest *_curLoadingRequest;
}

@property(retain, nonatomic) NSURLRequest *curLoadingRequest; // @synthesize curLoadingRequest=_curLoadingRequest;
@property(retain, nonatomic) QQYPC2BAVChatModel *chatModel; // @synthesize chatModel=_chatModel;
- (void)webFormClientReport:(id)arg1;
- (void)reportInsuranceInquiryPageInfo:(id)arg1;
- (void)updateNetWorkView:(id)arg1;
- (void)updateShowPanelTipsView:(id)arg1;
- (void)deleteCookiesForWebView;
- (void)setCookiesForYPWebView;
- (id)transformToBase64String:(id)arg1;
- (void)doClientReport:(id)arg1;
- (void)clientLog:(id)arg1;
- (void)onLaunchNewWebController:(id)arg1 dtmf:(id)arg2;
- (void)disableWebPages:(_Bool)arg1;
- (void)onC2BS2CNotification:(id)arg1;
- (void)onShowLoadingPage:(id)arg1;
- (void)onShowAudioWaveWebNotify:(id)arg1;
- (void)onGetCallTime:(id)arg1;
- (void)dismissLoadingView;
- (void)showLoadingView;
- (void)excuteAndClearJsQueue;
- (void)excuteJs:(id)arg1;
- (void)onWebReady;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)onGetEnvInfo:(id)arg1;
- (id)formatJson:(id)arg1;
- (void)onGetSsoAuth:(id)arg1;
- (void)gotoArtificial:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)notifyStopped;
- (void)dealloc;
- (id)initWithC2BAVChatModel:(id)arg1;
- (id)init;

@end
