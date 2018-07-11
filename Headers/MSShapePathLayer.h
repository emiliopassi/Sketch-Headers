//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_MSShapePathLayer.h"

@class MSCurvePoint, MSPath;

@interface MSShapePathLayer : _MSShapePathLayer
{
    BOOL _isEditing;
}

+ (void)performBatchEdits:(CDUnknownBlockType)arg1;
+ (id)shapeWithPath:(id)arg1;
+ (id)keyPathsForValuesAffectingBadgeMap;
+ (id)keyPathsForValuesAffectingPreviewImages;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (BOOL)isPolygon;
- (BOOL)isRectangle;
- (BOOL)attemptToSimplifyBetweenPoint:(id)arg1 andPoint:(id)arg2;
- (BOOL)simplifyPathOnce;
- (void)simplify;
- (id)pointsAroundIndex:(unsigned long long)arg1;
- (BOOL)isLine;
- (BOOL)shouldHitTestOnFill:(id)arg1;
- (id)flattenedLayer;
- (void)flatten;
@property(readonly, nonatomic) BOOL canFlatten;
@property(readonly, nonatomic) MSCurvePoint *lastPoint;
@property(readonly, nonatomic) MSCurvePoint *firstPoint;
@property(readonly, nonatomic) unsigned long long numberOfCurvePoints;
@property(readonly, nonatomic) BOOL hasRoundedCorners;
- (id)layerSuitableForInsertingIntoGroup:(id)arg1;
- (BOOL)canBeContainedByGroup;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setEndMarkerType:(unsigned long long)arg1;
- (void)setStartMarkerType:(unsigned long long)arg1;
- (double)distanceSquaredToSegmentAtIndex:(unsigned long long)arg1 fromPoint:(struct CGPoint)arg2 tolerance:(double)arg3;
- (unsigned long long)indexOfSegmentAtPoint:(struct CGPoint)arg1 tolerance:(struct CGSize)arg2;
- (void)multiplyBy:(double)arg1;
- (BOOL)isPartOfClippingMask;
- (void)setBooleanOperation:(long long)arg1;
- (BOOL)isNearlyEmpty;
- (struct CGPoint)convertPointToPathCoordinates:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromPathCoordinates:(struct CGPoint)arg1;
- (void)didEdit;
- (struct CGPoint)pointCenteredAfterPointIndex:(unsigned long long)arg1;
@property(copy, nonatomic) MSPath *pathInFrame; // @dynamic pathInFrame;
- (void)adjustGeometryToBoundsRect:(struct CGRect)arg1;
- (struct CGRect)boundsOfPathIntegral:(BOOL)arg1;
- (void)adjustFrameAfterEditIntegral:(BOOL)arg1;
- (void)applyAffineTransformToPath:(struct CGAffineTransform)arg1;
- (void)reversePath;
- (BOOL)editable;
- (void)resetPoints;
- (void)setNilValueForKey:(id)arg1;
- (void)resetPointsBasedOnUserInteraction;
- (void)applyPropertiesToBezier:(id)arg1;
- (void)performInitEmptyObject;
- (id)styledLayer;
- (BOOL)shouldDrawSelectionStroke;
- (BOOL)shouldDrawSelection;
- (BOOL)canSmartRotate;
- (Class)handlerClass;
- (BOOL)handleDoubleClick;
- (struct CGRect)boundsForCursorPreview;
- (id)bezierPathForCursorPreview;
- (id)insertionCursor;
- (id)unselectedPreviewImage;
- (id)selectedPreviewImage;
- (BOOL)isMasked;
- (void)handleBadgeClickWithAltState:(BOOL)arg1;
- (void)moveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)isExportableViaDragAndDrop;
- (id)badgeMenu;
- (void)onBooleanOperation:(id)arg1;
- (unsigned long long)selectedBadgeMenuItem;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (unsigned long long)shareableObjectType;
- (BOOL)booleanOperationCanBeReset;
- (BOOL)supportsInnerOuterBorders;
- (id)setupWithLayerBuilderDictionary:(id)arg1;

@end

