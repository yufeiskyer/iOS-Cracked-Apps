//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPViewController.h"

#import "QYPPActionSheetDelegate-Protocol.h"
#import "QYPPBrowserImageModelDelegate-Protocol.h"
#import "QYPPMultiImageBottomBarViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, QYPPMultiImageBottomBarView, QYPPMultiImageBrowserContextSettings, QYPPMultiImageLeftPanIndicatorView, UICollectionView, UILabel;
@protocol QYPPMultiImageBrowserViewControllerDelegate;

@interface QYPPMultiImageBrowserViewController : QYPPViewController <QYPPActionSheetDelegate, UICollectionViewDelegate, UICollectionViewDataSource, QYPPMultiImageBottomBarViewDelegate, QYPPBrowserImageModelDelegate, UIGestureRecognizerDelegate>
{
    NSArray *_imageModels;
    NSArray *_fromViews;
    long long _popupIndex;
    struct CGRect _fromRect;
    long long _currentPageIndex;
    UICollectionView *_collectionView;
    QYPPMultiImageBottomBarView *_bottomBarView;
    UILabel *_pageIndicatorLabel;
    QYPPMultiImageBrowserContextSettings *_contextSettings;
    _Bool _previousStatusBarHidden;
    struct CGPoint _panStartPoint;
    struct CGPoint _panMovingPoint;
    _Bool _isDismissedByPaningImage;
    _Bool _isPanningViewTryToDismiss;
    _Bool _isEnteredDetailByPanningImage;
    _Bool _isPanningViewTryToEnterDetail;
    _Bool _isScrollVertically;
    long long _previousNavigationPresentationStyle;
    id <QYPPMultiImageBrowserViewControllerDelegate> _delegate;
    CDUnknownBlockType _clickDetailButtonBlock;
    CDUnknownBlockType _clickCommentButtonBlock;
    CDUnknownBlockType _clickLikeButtonBlock;
    CDUnknownBlockType _clickSaveImageButtonBlock;
    CDUnknownBlockType _leftPanEnterDetailBlock;
    QYPPMultiImageLeftPanIndicatorView *_leftPanIndicatorView;
}

@property(retain, nonatomic) QYPPMultiImageLeftPanIndicatorView *leftPanIndicatorView; // @synthesize leftPanIndicatorView=_leftPanIndicatorView;
@property(retain, nonatomic) UILabel *pageIndicatorLabel; // @synthesize pageIndicatorLabel=_pageIndicatorLabel;
@property(retain, nonatomic) QYPPMultiImageBottomBarView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) struct CGRect fromRect; // @synthesize fromRect=_fromRect;
@property(nonatomic) long long popupIndex; // @synthesize popupIndex=_popupIndex;
@property(retain, nonatomic) NSArray *fromViews; // @synthesize fromViews=_fromViews;
@property(retain, nonatomic) NSArray *imageModels; // @synthesize imageModels=_imageModels;
@property(copy, nonatomic) CDUnknownBlockType leftPanEnterDetailBlock; // @synthesize leftPanEnterDetailBlock=_leftPanEnterDetailBlock;
@property(copy, nonatomic) CDUnknownBlockType clickSaveImageButtonBlock; // @synthesize clickSaveImageButtonBlock=_clickSaveImageButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType clickLikeButtonBlock; // @synthesize clickLikeButtonBlock=_clickLikeButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType clickCommentButtonBlock; // @synthesize clickCommentButtonBlock=_clickCommentButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType clickDetailButtonBlock; // @synthesize clickDetailButtonBlock=_clickDetailButtonBlock;
@property(nonatomic) __weak id <QYPPMultiImageBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QYPPMultiImageBrowserContextSettings *contextSettings; // @synthesize contextSettings=_contextSettings;
- (void).cxx_destruct;
- (void)downloadHighQualityImageIfNecessaryAtIndex:(long long)arg1;
- (_Bool)isHighQualityImageExistAtIndex:(long long)arg1;
- (_Bool)isValidImageIndex:(long long)arg1;
- (void)loadNextImage;
- (void)loadPrevImage;
- (void)preloadPreviousAndNextImage;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)savePictureToUserAlbum;
- (void)multiImageBottomBarView:(id)arg1 didClickLikeButton:(id)arg2;
- (void)multiImageBottomBarView:(id)arg1 didClickCommentButton:(id)arg2;
- (void)multiImageBottomBarView:(id)arg1 didClickSaveButton:(id)arg2;
- (void)multiImageBottomBarView:(id)arg1 didClickDetailButton:(id)arg2;
- (void)browserImageModelDownloading:(id)arg1 withProgress:(float)arg2;
- (void)browserImageModelStartLoadImage:(id)arg1;
- (void)browserImageModelDidFailToLoad:(id)arg1;
- (void)browserImageModelDidFinishLoading:(id)arg1;
- (void)updateLeftPanIndicatorViewWithLastCellToRightDistance:(double)arg1;
- (void)decideToEnterDetailOrHideIndicatorIfNeed;
- (void)handlePanOrScrollViewHorizentallyWithTriggeredByPanGesture:(_Bool)arg1;
- (void)showOrOpaqueAccessoryViewsWhenPanImageFinish;
- (void)hideOrFadeAccessoryViewsWhenPanImageBeginWithAlpha:(double)arg1;
- (double)maxPanTranslateY;
- (double)minPanScale;
- (void)panGestureHandler:(id)arg1;
- (id)currentZoomableImageScrollView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)tapImageHandler:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)longPressHanlder:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateBottomBarWithLikeState:(_Bool)arg1 likeCount:(long long)arg2 commentCount:(long long)arg3;
- (id)getCellWithImageModel:(id)arg1;
- (void)refreshUIAndScrollToPageIndex:(long long)arg1;
- (void)refreshUIAndLoadImages;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGRect)calculateActualFrameWithOriginPopupViewFrame:(struct CGRect)arg1 andImageModel:(id)arg2;
- (struct CGRect)calculateLayerContentsWithImageModel:(id)arg1 viewSize:(struct CGSize)arg2;
- (struct CGRect)calculateLayerContentsWithImageModelConsideringClipArea:(id)arg1 viewSize:(struct CGSize)arg2;
- (struct CGRect)calculateImageDisplayFrameWithImage:(id)arg1 andViewFrame:(struct CGRect)arg2;
- (void)dismissToRect:(struct CGRect)arg1 backToView:(id)arg2 forceAlphaFade:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)backToView;
- (void)dismissSelf;
- (void)presentFromController:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)presentFromController:(id)arg1 fromViews:(id)arg2;
- (id)imageBrowserCellReuseIdentifier;
- (Class)imageBrowserCellClass;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithImageModels:(id)arg1 index:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

