//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "MSTileRenderOperationDelegate.h"

@class MSCGContextPool, MSPage, MSTileRenderOperation, MSTileRenderer, NSColorSpace, NSString;

@interface MSTile : CALayer <MSTileRenderOperationDelegate>
{
    BOOL _drawDottedDirtyRect;
    BOOL _shouldHideOverlayControls;
    BOOL _drawingIsCancelled;
    BOOL _completedFirstRenderOrWasCancelled;
    id <MSTileDelegate> _tileDelegate;
    NSColorSpace *_colorSpace;
    double _zoomValue;
    id <MSRenderingContextCacheProvider> _renderingCacheProvider;
    CALayer *_overlayLayer;
    CALayer *_contentLayer;
    CALayer *_backgroundLayer;
    MSPage *_pageForOverlay;
    MSTileRenderer *_tileRenderer;
    MSTileRenderOperation *_currentRenderOperation;
    MSCGContextPool *_contextPool;
    struct CGPoint _scrollOrigin;
    struct CGPoint _distanceFromScrollOrigin;
}

@property(retain, nonatomic) MSCGContextPool *contextPool; // @synthesize contextPool=_contextPool;
@property(nonatomic) __weak MSTileRenderOperation *currentRenderOperation; // @synthesize currentRenderOperation=_currentRenderOperation;
@property(retain, nonatomic) MSTileRenderer *tileRenderer; // @synthesize tileRenderer=_tileRenderer;
@property(retain, nonatomic) MSPage *pageForOverlay; // @synthesize pageForOverlay=_pageForOverlay;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(retain, nonatomic) CALayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property(nonatomic) BOOL completedFirstRenderOrWasCancelled; // @synthesize completedFirstRenderOrWasCancelled=_completedFirstRenderOrWasCancelled;
@property(retain, nonatomic) id <MSRenderingContextCacheProvider> renderingCacheProvider; // @synthesize renderingCacheProvider=_renderingCacheProvider;
@property(nonatomic) BOOL drawingIsCancelled; // @synthesize drawingIsCancelled=_drawingIsCancelled;
@property(nonatomic) BOOL shouldHideOverlayControls; // @synthesize shouldHideOverlayControls=_shouldHideOverlayControls;
@property(nonatomic) BOOL drawDottedDirtyRect; // @synthesize drawDottedDirtyRect=_drawDottedDirtyRect;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) struct CGPoint distanceFromScrollOrigin; // @synthesize distanceFromScrollOrigin=_distanceFromScrollOrigin;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
@property(readonly, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) __weak id <MSTileDelegate> tileDelegate; // @synthesize tileDelegate=_tileDelegate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)moveToPosition:(struct CGPoint)arg1;
- (void)pixelGridDidChange;
- (BOOL)shouldDrawPixelated;
- (struct CGRect)rectForContentLayer;
- (double)scaleForContentLayer;
- (void)drawOverlayInContext:(struct CGContext *)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)refreshOverlayInViewRect:(struct CGRect)arg1 page:(id)arg2;
- (void)cancelDrawing;
- (void)tileRenderOperationDidFinishRendering:(id)arg1;
- (struct CGRect)normalizeRect:(struct CGRect)arg1 origin:(struct CGPoint)arg2;
- (id)renderOperationForContentRect:(struct CGRect)arg1 page:(id)arg2 document:(id)arg3;
- (void)enableDebugFramesInner:(BOOL)arg1 outer:(BOOL)arg2;
- (void)prepareLayer:(id)arg1;
- (void)makeNewOverlayLayer;
- (void)makeNewContentLayer;
- (void)makeNewBackgroundLayer;
- (void)removeFromSuperlayer;
- (id)init;
- (id)initWithColorSpace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

