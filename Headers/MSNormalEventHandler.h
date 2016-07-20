//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSNormalBaseEventHandler.h"

@class MSDragLayerGestureRecognizer, MSLayer, MSLayerPositionDrawing, MSNormalEventContextualMenuBuilder, MSNormalEventData, MSOpacityKeyboardShortcutRecognizer, NSObject<NSCopying><NSCoding>;

@interface MSNormalEventHandler : MSNormalBaseEventHandler
{
    BOOL _ignoreNextKeyDownEventUntilModifiersChange;
    BOOL _nextModifierKeyChangeShouldRefreshView;
    MSLayerPositionDrawing *_positionDrawing;
    MSLayer *_highlightedLayer;
    unsigned long long _modifierFlags;
    MSNormalEventContextualMenuBuilder *_menuBuilder;
    MSNormalEventData *_eventData;
    MSOpacityKeyboardShortcutRecognizer *_opacityShortcutRecognizer;
    struct NSObject *_duplicatedObjectID;
    MSDragLayerGestureRecognizer *_dragGestureRecognizer;
    double _shiftAlignLongestDistance;
    unsigned long long _shiftAlignLongestAxis;
    struct CGSize _duplicateOffset;
}

@property(nonatomic) unsigned long long shiftAlignLongestAxis; // @synthesize shiftAlignLongestAxis=_shiftAlignLongestAxis;
@property(nonatomic) double shiftAlignLongestDistance; // @synthesize shiftAlignLongestDistance=_shiftAlignLongestDistance;
@property(readonly, nonatomic) MSDragLayerGestureRecognizer *dragGestureRecognizer; // @synthesize dragGestureRecognizer=_dragGestureRecognizer;
@property(retain, nonatomic) NSObject<NSCopying><NSCoding> *duplicatedObjectID; // @synthesize duplicatedObjectID=_duplicatedObjectID;
@property(nonatomic) struct CGSize duplicateOffset; // @synthesize duplicateOffset=_duplicateOffset;
@property(readonly, nonatomic) MSOpacityKeyboardShortcutRecognizer *opacityShortcutRecognizer; // @synthesize opacityShortcutRecognizer=_opacityShortcutRecognizer;
@property(nonatomic) BOOL nextModifierKeyChangeShouldRefreshView; // @synthesize nextModifierKeyChangeShouldRefreshView=_nextModifierKeyChangeShouldRefreshView;
@property(retain, nonatomic) MSNormalEventData *eventData; // @synthesize eventData=_eventData;
@property(retain, nonatomic) MSNormalEventContextualMenuBuilder *menuBuilder; // @synthesize menuBuilder=_menuBuilder;
@property(readonly, nonatomic) unsigned long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(retain, nonatomic) MSLayer *highlightedLayer; // @synthesize highlightedLayer=_highlightedLayer;
- (void).cxx_destruct;
- (void)zoomValueWillChangeTo:(double)arg1;
@property(readonly, nonatomic) MSLayerPositionDrawing *positionDrawing; // @synthesize positionDrawing=_positionDrawing;
- (void)currentPageDidChange;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (void)cut:(id)arg1;
- (BOOL)layerCanBeSelected:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (id)layerSnapper;
- (void)changeColor:(id)arg1;
- (void)deleteNormalLayers:(id)arg1;
- (void)delete:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (id)menu;
- (void)selectAll:(id)arg1;
- (void)ignoreNextKeyDownEventUntilModifiersChange;
- (void)moveLayer:(id)arg1 toOffset:(struct CGPoint)arg2 fromPointInAbsoluteCoordinates:(struct CGPoint)arg3;
- (void)endDuplicateDragging:(BOOL)arg1;
- (void)beginDuplicateDragging;
- (void)moveDraggedLayersToOffset:(struct CGPoint)arg1;
- (void)layerDragged:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1;
- (void)drawSubPathsForGroup:(id)arg1;
- (void)drawDragSelection;
- (struct CGRect)rectForDrawingDragSelectOrZoom;
- (void)drawMultipleSelection;
- (BOOL)shouldDrawSelectionForLayer:(id)arg1;
- (void)drawLayerHighlight;
- (void)drawLayerSelection;
- (unsigned long long)hitTestingOptions;
- (id)layerAtPoint:(struct CGPoint)arg1;
- (void)deselectAllLayers;
- (void)duplicate:(id)arg1;
- (void)keyDownMoveCanvasIncremental:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)keyDownMoveToEndOfCanvas:(unsigned short)arg1;
- (void)keyDownMoveCanvas:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)flashSnapsForLayer:(id)arg1;
- (void)opacityShortcutRecognized:(id)arg1;
- (void)keyDownResizeLayers:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (BOOL)layersAreNotIntersectingTheirArtboards:(id)arg1;
- (void)moveLayersFromArtboardToParentPage:(id)arg1;
- (void)moveLayers:(id)arg1 toArtboard:(id)arg2;
- (id)parentArtboardWeCanMoveLayersTo:(id)arg1;
- (void)moveLayersOnOrOffArtboard:(id)arg1;
- (void)keyDownMoveLayers:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)escapeKeyPressed;
- (id)artboardsInReadingOrder;
- (id)currentFocussedArtboard;
- (struct CGRect)artboardRectInViewCoordinates:(id)arg1 withScrollOrigin:(struct CGPoint)arg2;
- (struct CGRect)artboardRectInViewCoordinates:(id)arg1;
- (void)focusOnArtboard:(id)arg1;
- (void)moveToNextArtboard;
- (void)moveToPreviousArtboard;
- (void)keyDown:(id)arg1;
- (void)handleMouseMoveOrFlagChange;
- (BOOL)validateLayerForHighlighting:(id)arg1;
- (BOOL)isMouseHoveringMultipleSelectedLayerCorner;
- (long long)multipleSelectedLayerCornerAtPoint:(struct CGPoint)arg1;
- (BOOL)isMouseHoveringLayer:(id)arg1 corner:(struct CGPoint)arg2 flags:(unsigned long long)arg3;
- (BOOL)isMouseHoveringLayerCorner;
- (BOOL)shouldNotChangeSelectionForFlags:(unsigned long long)arg1;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)mouseExited;
- (void)selectLayer:(id)arg1;
- (void)mouseDraggedSelectLayers:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (struct CGRect)rectForDragSelectionOrZoom:(struct CGPoint)arg1;
- (struct CGPoint)alignPoint:(struct CGPoint)arg1 withShiftTo:(struct CGPoint)arg2;
- (void)refreshPositionDrawingIfApplicable:(unsigned long long)arg1;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)mouseDownMoveLayers:(struct CGPoint)arg1 clickCount:(long long)arg2 flags:(unsigned long long)arg3;
- (void)mouseDownDoubleClick:(struct CGPoint)arg1 onLayer:(id)arg2;
- (void)mouseDownSelectLayers:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)enterMultipleResizeModeWithMouse:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3 handle:(long long *)arg4 manager:(id)arg5;
- (void)enterLineResizeModeWithMouse:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3 manager:(id)arg4;
- (void)enterRotateModeWithMouse:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3 manager:(id)arg4;
- (void)enterResizeModeWithMouse:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3 manager:(id)arg4;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (id)toolbarIdentifier;
- (id)initWithManager:(id)arg1;

@end

