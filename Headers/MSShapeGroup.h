//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSShapeGroup.h"

#import "MSShapeGroup.h"

@class MSPath, NSBezierPath;

@interface MSShapeGroup : _MSShapeGroup <MSShapeGroup>
{
}

+ (struct CGRect)groupBoundsForContainer:(id)arg1;
+ (BOOL)groupBoundsShouldBeIntegral;
+ (id)shapeWithPath:(id)arg1;
+ (id)shapeWithRect:(struct CGRect)arg1;
+ (id)shapeWithBezierPath:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingPreviewImages;
- (BOOL)shouldStripShadowsAndInnerShadow;
- (void)layerDidResizeFromRect:(struct CGRect)arg1 corner:(long long)arg2;
- (BOOL)canRotate;
- (void)adjustStyleToFitSubPaths;
- (void)debugWritePaths:(long long)arg1;
- (BOOL)isVerticalLine;
- (BOOL)isHorizontalLine;
- (void)makeLinePixelAligned;
- (BOOL)isLine;
- (BOOL)hasLines;
@property(readonly, nonatomic) BOOL isPartOfClippingMask;
- (void)moveTransformsToChildren;
- (void)reversePath;
- (void)flatten;
- (void)simplify;
@property(nonatomic) BOOL isClosed;
- (void)setEdited:(BOOL)arg1;
- (BOOL)canContainLayer:(id)arg1;
- (struct CGRect)safeFrameForBezierPath:(id)arg1;
@property(retain, nonatomic) NSBezierPath *bezierPath;
@property(readonly, nonatomic) BOOL hasDecorations;
@property(readonly, nonatomic) NSBezierPath *decoratedBezierPathInBounds;
- (id)bezierPathOfSubPath:(id)arg1 inRect:(struct CGRect)arg2;
- (id)bezierPathInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) NSBezierPath *bezierPathInBounds;
@property(readonly, nonatomic) MSPath *pathInBounds;
- (id)_bezierPathInSize:(struct CGSize)arg1;
- (void)applyPropertiesToBezier:(id)arg1;
- (id)pathWithTransformsUsingCache:(id)arg1;
@property(readonly, nonatomic) NSBezierPath *bezierPathWithTransforms;
- (BOOL)hitTestPoint:(struct CGPoint)arg1 inBezier:(id)arg2 zoomValue:(double)arg3;
- (id)hitTestablePathInBoundsForZoomValue:(double)arg1;
- (BOOL)hitTestAsLine:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (BOOL)containsPoint:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (id)defaultName;
- (BOOL)resizeToFitChildrenWithOption:(long long)arg1;
- (long long)selectionHandleAtPoint:(struct CGPoint)arg1 zoom:(double)arg2;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (void)performInitEmptyObject;
- (Class)overrideViewControllerClass;
- (BOOL)canSmartRotate;
- (BOOL)isStraightTriangle;
- (BOOL)shouldFlattenAfterRotate;
- (id)handlerName;
- (BOOL)handleDoubleClick;
- (id)lastPoint;
- (id)firstPoint;
- (struct CGPoint)rulerBase;
@property(nonatomic) double length; // @dynamic length;
@property(nonatomic) double y2; // @dynamic y2;
@property(nonatomic) double x2; // @dynamic x2;
@property(nonatomic) double y1; // @dynamic y1;
@property(nonatomic) double x1; // @dynamic x1;
- (void)setP2:(struct CGPoint)arg1;
- (void)setP1:(struct CGPoint)arg1;
- (struct CGPoint)p2;
- (struct CGPoint)p1;
- (id)inspectorViewControllers;
- (void)drawHoverWithZoom:(double)arg1 cache:(id)arg2;
- (void)copyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (void)moveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)expandableInLayerList;
- (BOOL)selectedInLayerList;
- (void)prepareAsMask;
- (BOOL)supportsInnerOuterBorders;
- (void)changeInnerOuterBordersIfHasOpenPaths;
- (BOOL)canSplitPaths;
- (id)splitPathIntoShape:(id)arg1;
- (id)splitPathsIntoShapes;
- (id)unselectedPreviewImage;
- (id)selectedPreviewImage;
- (id)fillFromBorder:(id)arg1;
- (double)lineWidthForOutliningWithBorder:(id)arg1;
- (id)outlinePathForPath:(id)arg1 withBorder:(id)arg2;
- (id)outlineShapeWithBorder:(id)arg1;
- (BOOL)canConvertToOutlines;
- (id)layersByConvertingToOutlines;
- (BOOL)booleanOperationCanBeReset;
- (BOOL)canFlatten;
- (BOOL)canProbablyFlatten;
- (BOOL)hasFlattenablePath;
- (void)cutBezierSegmentAtIndex:(unsigned long long)arg1;
- (void)possiblyFixRectangleBorderBeforeCut;
- (BOOL)canCutSegments;
- (id)imageFillForOverrides;
- (BOOL)acceptsOverrideValue:(id)arg1;
- (void)applyOverridesFromSource:(id)arg1;
- (id)bezierOperationChain;
- (id)CSSAttributes;
- (id)CSSAttributeString;

@end

