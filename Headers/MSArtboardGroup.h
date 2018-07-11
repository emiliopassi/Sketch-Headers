//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_MSArtboardGroup.h"

#import "MSArtboardGroup-Protocol.h"
#import "MSColorConvertible-Protocol.h"
#import "MSLayerWithMutableBackgroundColor-Protocol.h"
#import "MSRootLayer-Protocol.h"

@class MSArtboardPreset, MSLayoutGrid, MSPath, MSRulerData, MSSimpleGrid, NSString;

@interface MSArtboardGroup : _MSArtboardGroup <MSArtboardGroup, MSRootLayer, MSLayerWithMutableBackgroundColor, MSColorConvertible>
{
}

+ (unsigned long long)traits;
+ (struct CGRect)artboardRectFromLayersInArray:(id)arg1;
- (void)setShouldBreakMaskChain:(BOOL)arg1;
- (void)convertColorsUsing:(id)arg1;
- (void)makeChildRectsIntegral;
- (id)immutableBackgroundColor;
- (id)closestClippingLayer;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (id)rootForNameUniquing;
- (void)moveChildrenToIdenticalPositionAfterResizeFromRect:(struct CGRect)arg1;
- (struct CGSize)calculateMinimumSize;
- (void)layerDidEndResize;
- (void)layerDidResizeFromRect:(struct CGRect)arg1 corner:(long long)arg2;
- (BOOL)isExpanded;
- (BOOL)canRotate;
- (id)otherArtboardUnderArtboard;
- (void)moveBySuggestedOffset:(struct CGVector)arg1;
@property(retain, nonatomic) MSArtboardPreset *preset;
- (void)setRect:(struct CGRect)arg1;
- (BOOL)resizeToFitChildrenWithOption:(long long)arg1;
- (id)parentRoot;
- (id)parentArtboard;
- (void)refreshOverlayWithAbsoluteMargins:(struct CGSize)arg1;
@property(nonatomic) struct CGPoint rulerBase;
- (BOOL)isLocked;
- (void)setIsLocked:(BOOL)arg1;
@property(readonly, nonatomic) double rotation;
- (BOOL)isOpen;
- (BOOL)canBeTransformed;
- (BOOL)canBeContainedByGroup;
- (BOOL)isAutomaticScalingEnabled;
- (BOOL)hasClickThrough;
- (BOOL)hitTestInNameLabel:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (void)setIsVisible:(BOOL)arg1;
- (id)selectionHitTest:(struct CGPoint)arg1 options:(unsigned long long)arg2 zoomValue:(double)arg3 resultIndex:(unsigned long long *)arg4;
- (BOOL)isSelectableOnCanvasWithOptions:(unsigned long long)arg1;
- (id)defaultArtboardStyle;
- (void)objectDidInit;
- (void)performInitEmptyObject;
- (BOOL)canBeHidden;
- (BOOL)shouldRefreshOverlayForFlows;
- (id)inspectorViewControllerNames;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (id)contextualMenuPreviewImage;
- (id)unselectedPreviewImage;
- (id)selectedPreviewImage;
- (unsigned long long)displayType;
- (struct CGRect)optimalBoundingBox;
- (id)parentForInsertingLayers;
- (id)displayName;
- (BOOL)shouldResizeToFitRect:(struct CGRect)arg1;
- (void)resizeToFitChildren;
- (id)parentRootForAbsoluteRect;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) MSSimpleGrid *grid;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) MSRulerData *horizontalRulerData;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(copy, nonatomic) MSLayoutGrid *layout;
@property(readonly, nonatomic) NSString *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) MSPath *pathForBooleanOperations;
@property(readonly, nonatomic) MSPath *pathInBounds;
@property(readonly, nonatomic) MSPath *pathInFrame;
@property(readonly, nonatomic) MSPath *pathInFrameWithTransforms;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly) Class superclass;
@property(copy, nonatomic) MSRulerData *verticalRulerData;

@end

