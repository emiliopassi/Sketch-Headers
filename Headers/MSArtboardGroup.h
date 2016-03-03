//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSArtboardGroup.h"

#import "MSArtboardGroup.h"
#import "MSLayerWithBackgroundColour.h"
#import "MSRootLayer.h"

@class MSLayoutGrid, MSRulerData, MSSimpleGrid, NSDictionary, NSObject<NSCopying><NSCoding>, NSString;

@interface MSArtboardGroup : _MSArtboardGroup <MSRootLayer, MSLayerWithBackgroundColour, MSArtboardGroup>
{
    id <MSSliceLayerWatcher> _sliceWatcher;
}

+ (unsigned long long)traits;
@property(nonatomic) __weak id <MSSliceLayerWatcher> sliceWatcher; // @synthesize sliceWatcher=_sliceWatcher;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (id)rootForNameUniquing;
- (void)layerDidResizeFromRect:(struct CGRect)arg1 corner:(long long)arg2;
- (BOOL)isExpanded;
- (BOOL)canRotate;
- (id)otherArtboardUnderArtboard;
- (void)moveWithGuideOffset:(struct CGSize)arg1;
- (void)setRect:(struct CGRect)arg1;
- (void)removeFromParent;
- (BOOL)resizeToFitChildrenWithOption:(long long)arg1;
- (id)parentRoot;
- (id)parentArtboard;
- (id)slice;
- (BOOL)hasGuides;
- (void)markLayerDirtyOfType:(unsigned long long)arg1 margins:(struct CGSize)arg2;
@property(nonatomic) struct CGPoint rulerBase;
@property(readonly, nonatomic) BOOL isLocked;
- (void)setIsLocked:(BOOL)arg1;
@property(readonly, nonatomic) double rotation;
- (BOOL)isOpen;
- (BOOL)canBeTransformed;
- (BOOL)canBeContainedByGroup;
- (BOOL)enableAutomaticScaling;
@property(readonly, nonatomic) BOOL hasClickThrough;
- (id)layersBelowPoint:(struct CGPoint)arg1 clickThroughBehavior:(long long)arg2 keepLockedLayers:(BOOL)arg3 zoomValue:(double)arg4;
- (void)setName:(id)arg1;
- (BOOL)shouldClickThroughMouse:(struct CGPoint)arg1 clickThroughBehavior:(long long)arg2 zoomValue:(double)arg3;
- (BOOL)hitTestInNameLabel:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (BOOL)includeInLayersBelowPoint;
- (BOOL)hitTest:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (id)defaultArtboardStyle;
- (void)objectDidChange;
- (void)performInitEmptyObject;
- (BOOL)canBeHidden;
- (id)inspectorViewControllerNames;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (id)previewImages;
- (unsigned long long)displayType;
- (id)parentForInsertingLayers;
- (id)displayName;
- (id)parentRootForAbsoluteRect;
- (BOOL)canBePartOfSymbol;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) id <MSColor> backgroundColorGeneric; // @dynamic backgroundColorGeneric;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <MSExportOptions> exportOptionsGeneric;
@property(readonly, nonatomic) id <MSRect> frameGeneric;
@property(copy, nonatomic) MSSimpleGrid *grid;
@property(readonly, nonatomic) id <MSSimpleGrid> gridGeneric; // @dynamic gridGeneric;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) MSRulerData *horizontalRulerData;
@property(readonly, nonatomic) id <MSRulerData> horizontalRulerDataGeneric; // @dynamic horizontalRulerDataGeneric;
@property(readonly, nonatomic) BOOL includeBackgroundColorInExport;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatDoNotCascade;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) long long layerListExpandedType;
@property(readonly, nonatomic) id <MSArray> layersGeneric;
@property(copy, nonatomic) MSLayoutGrid *layout;
@property(readonly, nonatomic) id <MSLayoutGrid> layoutGeneric; // @dynamic layoutGeneric;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL nameIsFixed;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) NSObject<NSCopying><NSCoding> *originalObjectID;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) NSObject<NSCopying><NSCoding> *sharedObjectID;
@property(readonly, nonatomic) BOOL shouldBreakMaskChain;
@property(readonly, nonatomic) id <MSStyle> styleGeneric;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;
@property(copy, nonatomic) MSRulerData *verticalRulerData;
@property(readonly, nonatomic) id <MSRulerData> verticalRulerDataGeneric; // @dynamic verticalRulerDataGeneric;

@end

