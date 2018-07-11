//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "MSEventHandlerManagerDelegate-Protocol.h"
#import "MSOverlayRendererDelegate-Protocol.h"
#import "MSTiledLayerPileHostView-Protocol.h"

@class MSCacheManager, MSDocument, MSEventHandlerManager, MSFlowRendererCollector, MSImmutableDocumentData, MSMouseTracker, MSOverlayView, MSRenderMonitor, MSRenderingDriver, MSRulerView, MSTiledLayerPile, MSViewPort, MSZoomTool, NSNumberFormatter, NSString;
@protocol MSContentDrawViewDelegate;

@interface MSContentDrawView : NSView <MSEventHandlerManagerDelegate, MSTiledLayerPileHostView, MSOverlayRendererDelegate>
{
    BOOL handToolIsActive;
    struct CGPoint handToolOriginalPoint;
    struct CGPoint handToolOriginalScrollOrigin;
    BOOL hasDraggedOutsideInitialPadding;
    struct CGPoint mouseDownPoint;
    id _eventMonitor;
    struct CGPoint _handToolOriginalPoint;
    struct CGPoint _handToolOriginalScrollOrigin;
    BOOL _shouldHideOverlayControls;
    BOOL _didMouseDown;
    BOOL _needsUpdateCursor;
    BOOL _haveStoredMostRecentFullScaleScrollOrigin;
    BOOL _redrawPending;
    BOOL _isMagnifying;
    MSTiledLayerPile *_tiledLayerPile;
    id <MSContentDrawViewDelegate> _delegate;
    MSEventHandlerManager *_eventHandlerManager;
    MSRulerView *_horizontalRuler;
    MSRulerView *_verticalRuler;
    MSOverlayView *_overlayView;
    MSDocument *_document;
    MSRenderMonitor *_pendingMonitor;
    MSCacheManager *_cacheManager;
    MSMouseTracker *_mouseTracker;
    unsigned long long _handToolState;
    MSZoomTool *_zoomTool;
    unsigned long long _previouslyRenderedColorSpace;
    MSImmutableDocumentData *_previouslyRenderedDoc;
    NSNumberFormatter *_measurementLabelNumberFormatter;
    MSRenderMonitor *_performanceMonitor;
    MSRenderingDriver *_normalDriver;
    MSRenderingDriver *_debugDriver;
    MSFlowRendererCollector *_flowCollector;
    struct CGPoint _scalingCenterInViewCoordinates;
    struct CGPoint _mostRecentFullScaleScrollOrigin;
    struct CGRect _scrollOriginRelativeContentRedrawRect;
    struct CGRect _overlayDirtyRect;
}

+ (struct CGPoint)absoluteCoordinatesFromViewCoordinates:(struct CGPoint)arg1 forViewPort:(id)arg2;
+ (struct CGPoint)viewCoordinatesFromAbsoluteCoordinates:(struct CGPoint)arg1 forViewPort:(id)arg2;
+ (struct CGPoint)scrollOriginAfterScalingViewPort:(id)arg1 toZoomValue:(double)arg2 scalingCenterInViewCoordinates:(struct CGPoint)arg3;
+ (id)viewPortAfterScalingViewPort:(id)arg1 toZoom:(double)arg2 centeredOnAbsoluteCoordinates:(struct CGPoint)arg3;
@property(retain, nonatomic) MSFlowRendererCollector *flowCollector; // @synthesize flowCollector=_flowCollector;
@property(retain, nonatomic) MSRenderingDriver *debugDriver; // @synthesize debugDriver=_debugDriver;
@property(retain, nonatomic) MSRenderingDriver *normalDriver; // @synthesize normalDriver=_normalDriver;
@property(retain, nonatomic) MSRenderMonitor *performanceMonitor; // @synthesize performanceMonitor=_performanceMonitor;
@property(retain, nonatomic) NSNumberFormatter *measurementLabelNumberFormatter; // @synthesize measurementLabelNumberFormatter=_measurementLabelNumberFormatter;
@property(nonatomic) BOOL isMagnifying; // @synthesize isMagnifying=_isMagnifying;
@property(nonatomic) BOOL redrawPending; // @synthesize redrawPending=_redrawPending;
@property(nonatomic) BOOL haveStoredMostRecentFullScaleScrollOrigin; // @synthesize haveStoredMostRecentFullScaleScrollOrigin=_haveStoredMostRecentFullScaleScrollOrigin;
@property(nonatomic) struct CGPoint mostRecentFullScaleScrollOrigin; // @synthesize mostRecentFullScaleScrollOrigin=_mostRecentFullScaleScrollOrigin;
@property(nonatomic) struct CGPoint scalingCenterInViewCoordinates; // @synthesize scalingCenterInViewCoordinates=_scalingCenterInViewCoordinates;
@property(nonatomic) struct CGRect overlayDirtyRect; // @synthesize overlayDirtyRect=_overlayDirtyRect;
@property(nonatomic) struct CGRect scrollOriginRelativeContentRedrawRect; // @synthesize scrollOriginRelativeContentRedrawRect=_scrollOriginRelativeContentRedrawRect;
@property(retain, nonatomic) MSImmutableDocumentData *previouslyRenderedDoc; // @synthesize previouslyRenderedDoc=_previouslyRenderedDoc;
@property(nonatomic) unsigned long long previouslyRenderedColorSpace; // @synthesize previouslyRenderedColorSpace=_previouslyRenderedColorSpace;
@property(readonly, nonatomic) MSZoomTool *zoomTool; // @synthesize zoomTool=_zoomTool;
@property(readonly, nonatomic) BOOL needsUpdateCursor; // @synthesize needsUpdateCursor=_needsUpdateCursor;
@property(nonatomic) unsigned long long handToolState; // @synthesize handToolState=_handToolState;
@property(nonatomic) BOOL didMouseDown; // @synthesize didMouseDown=_didMouseDown;
@property(readonly, nonatomic) MSMouseTracker *mouseTracker; // @synthesize mouseTracker=_mouseTracker;
@property(retain, nonatomic) MSCacheManager *cacheManager; // @synthesize cacheManager=_cacheManager;
@property(retain, nonatomic) MSRenderMonitor *pendingMonitor; // @synthesize pendingMonitor=_pendingMonitor;
@property(nonatomic) BOOL shouldHideOverlayControls; // @synthesize shouldHideOverlayControls=_shouldHideOverlayControls;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
@property(nonatomic) __weak MSOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak MSRulerView *verticalRuler; // @synthesize verticalRuler=_verticalRuler;
@property(nonatomic) __weak MSRulerView *horizontalRuler; // @synthesize horizontalRuler=_horizontalRuler;
@property(retain, nonatomic) MSEventHandlerManager *eventHandlerManager; // @synthesize eventHandlerManager=_eventHandlerManager;
@property(nonatomic) __weak id <MSContentDrawViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MSTiledLayerPile *tiledLayerPile; // @synthesize tiledLayerPile=_tiledLayerPile;
- (void).cxx_destruct;
- (struct CGPoint)zoomPoint:(struct CGPoint)arg1;
- (struct CGSize)convertSizeToPage:(struct CGSize)arg1;
- (struct CGPoint)convertPointFromPage:(struct CGPoint)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayer:(id)arg2;
- (void)layerPositionPossiblyChanged;
- (void)ignoreNextKeyDownEventUntilModifiersChange;
- (void)returnToDefaultHandlerIfNeededForResize;
- (void)windowDidResize:(id)arg1;
- (void)viewWillStartLiveResize;
- (void)smartMagnifyWithEvent:(id)arg1;
- (void)eventHandlerManager:(id)arg1 didChangeCurrentHandler:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)selectToolbarItemWithIdentifier:(id)arg1;
- (void)refreshSidebarWithMask:(unsigned long long)arg1;
- (id)pages;
- (id)currentPage;
- (id)contentDrawView;
- (id)selectedLayers;
- (void)handleFlagsChangedEvent:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)updateCursorIfNeeded;
- (void)setNeedsUpdateCursor;
- (BOOL)updateCursor;
- (void)changeFont:(id)arg1;
- (BOOL)isOpaque;
- (id)menuForEvent:(id)arg1;
- (void)switchToSymbolHandlerIfPasteboardContentsDetected:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertTabIgnoringFieldEditor:(id)arg1;
- (void)keyUp:(id)arg1;
- (BOOL)performActionWithIdentifier:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)handToolMouseUp;
- (void)handToolMouseDragged:(id)arg1;
- (void)handToolMouseDown:(id)arg1;
- (void)displayPropertiesDidChange;
- (void)completeMagnifyWithFactor;
- (void)magnifyByFactor:(double)arg1 centerOnMouse:(BOOL)arg2;
- (void)scrollWheelScroll:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)centerSelectionInVisibleArea;
- (void)centerLayersInCanvas;
- (void)centerRect:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)centerRect:(struct CGRect)arg1;
- (void)trackMouse:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)doMouseDraggedEvent:(id)arg1;
- (void)mouseDraggedOutsideCanvas;
- (BOOL)isPointOutsideCanvas:(struct CGPoint)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (struct CGRect)transformRectToViewCoords:(struct CGRect)arg1;
- (void)performOverlayRefreshInViewRect:(struct CGRect)arg1 forPage:(id)arg2;
- (void)redrawTileContentIfOpportune;
- (void)redrawTiles;
- (void)scheduleRedraw;
- (void)refreshRulers;
- (void)refreshOverlayInViewRect:(struct CGRect)arg1;
- (void)refreshOverlayInRect:(struct CGRect)arg1;
- (void)refreshOverlay;
- (struct CGPoint)mouseInView;
- (void)reloadAllTiles;
- (void)redrawAllTiles;
- (void)beginReplacingTiledLayers;
- (void)removeAllTiledLayers;
- (void)animationDidFinishAtViewPort:(id)arg1;
- (void)animationDidFinish;
- (void)endZoomToolMode;
- (void)zoomOut;
- (void)setZoomValueCenteredInCanvas:(double)arg1;
- (void)scaleTilesBy:(double)arg1;
- (void)scaleTilesBy:(double)arg1 withScalingCenterInViewCoordinates:(struct CGPoint)arg2;
- (void)zoomToActualSizeAnimated:(BOOL)arg1;
- (void)zoomToFitRect:(struct CGRect)arg1;
- (void)animateToZoom:(double)arg1 scalingCenteredOnAbsoluteCoordinates:(struct CGPoint)arg2;
- (void)animateToZoom:(double)arg1;
- (void)zoomIn;
@property(nonatomic) double zoomValue;
- (struct CGRect)visibleContentRect;
- (void)animateScrollOriginToPoint:(struct CGPoint)arg1;
- (struct CGPoint)viewCenterInAbsoluteCoordinatesForViewPort:(id)arg1;
- (struct CGPoint)centerForScalingInAbsoluteCoordinates;
@property(nonatomic) struct CGPoint scrollOrigin;
- (void)animateToViewPort:(id)arg1;
- (id)viewPortAfterScalingToZoom:(double)arg1 selectionCentered:(BOOL)arg2;
- (id)viewPortAfterScalingToZoom:(double)arg1 centeredOnAbsoluteCoordinates:(struct CGPoint)arg2;
- (id)viewPortWithCenter:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (id)viewPortForZoomToFitRect:(struct CGRect)arg1;
@property(retain, nonatomic) MSViewPort *viewPort;
- (void)refreshOverlayAfterSettingsChange;
- (void)refreshEverythingAfterSettingsChange;
- (void)queuePendingMonitor;
- (void)tiledLayerPileDidRefreshTileContent:(id)arg1 finishTime:(unsigned long long)arg2;
- (void)tiledLayerPile:(id)arg1 requiresRedrawInRect:(struct CGRect)arg2;
- (void)renderOverlayInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (unsigned long long)overlayOptionsForPage:(id)arg1 zoom:(double)arg2 fullScreen:(BOOL)arg3;
- (void)scrollTilesBy:(struct CGPoint)arg1;
- (void)scrollToScrollOrigin:(struct CGPoint)arg1;
- (void)tile;
- (void)placeOriginInTopLeft;
- (void)centerDocumentAndPlaceScrollOriginInTopLeft;
- (void)centerInBounds;
- (void)pageDidChange:(id)arg1;
- (void)didMoveThroughHistory:(id)arg1;
- (void)willMoveThroughHistory:(id)arg1;
- (void)visualSettingChanged:(id)arg1;
- (void)prepare;
- (void)enableLayerBackedDrawing;
- (void)pixelGridDidChange;
- (void)viewDidChangeBackingProperties;
- (BOOL)canDrawConcurrently;
- (long long)tag;
- (BOOL)isFlipped;
- (void)removeFromSuperview;
- (void)viewDidMoveToWindow;
- (void)removeObserversForNotifications;
- (void)addObserversForNotifications;
@property(readonly, nonatomic) MSRenderingDriver *driver;
- (BOOL)useDebugDriver;
- (void)initDrivers;
- (void)dealloc;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)clickShouldDismissPopover:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

