//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSRenderingCALayer.h"

#import "CALayerDelegate-Protocol.h"

@class CALayer, CATextLayer, MSContentCALayer, MSRenderingDriver, MSRenderingRequest, MSTileRenderOperation, NSString;

@interface MSTile : MSRenderingCALayer <CALayerDelegate>
{
    BOOL _drawingIsCancelled;
    BOOL _completedFirstRenderOrWasCancelled;
    struct CGColorSpace *_colorSpace;
    MSRenderingDriver *_driver;
    unsigned long long _index;
    MSContentCALayer *_contentLayer;
    MSRenderingRequest *_renderingRequest;
    CATextLayer *_debugLabelLayer;
    CALayer *_debugDrawingAreaLayer;
    MSTileRenderOperation *_currentRenderOperation;
    struct CGPoint _scrollOrigin;
    struct CGPoint _distanceFromScrollOrigin;
}

@property(nonatomic) __weak MSTileRenderOperation *currentRenderOperation; // @synthesize currentRenderOperation=_currentRenderOperation;
@property(retain, nonatomic) CALayer *debugDrawingAreaLayer; // @synthesize debugDrawingAreaLayer=_debugDrawingAreaLayer;
@property(retain, nonatomic) CATextLayer *debugLabelLayer; // @synthesize debugLabelLayer=_debugLabelLayer;
@property(nonatomic) BOOL completedFirstRenderOrWasCancelled; // @synthesize completedFirstRenderOrWasCancelled=_completedFirstRenderOrWasCancelled;
@property(retain) MSRenderingRequest *renderingRequest; // @synthesize renderingRequest=_renderingRequest;
@property(retain, nonatomic) MSContentCALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) MSRenderingDriver *driver; // @synthesize driver=_driver;
@property(readonly, nonatomic) BOOL drawingIsCancelled; // @synthesize drawingIsCancelled=_drawingIsCancelled;
@property(nonatomic) struct CGPoint distanceFromScrollOrigin; // @synthesize distanceFromScrollOrigin=_distanceFromScrollOrigin;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
@property(readonly, nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void).cxx_destruct;
- (void)tileRenderingDidFinish;
@property(readonly, copy) NSString *description;
- (void)moveToPosition:(struct CGPoint)arg1;
@property(nonatomic) double contentLayerScale;
- (void)cancelDrawing;
- (struct CGRect)normalizeRect:(struct CGRect)arg1 origin:(struct CGPoint)arg2;
- (id)renderOperationForContentRect:(struct CGRect)arg1 page:(id)arg2 renderingRequest:(id)arg3 contextPool:(id)arg4;
- (void)updateDebugLabel;
- (void)setupDebugLabel;
- (void)setupDebugDrawingArea;
- (void)setDebugOptionsToDrawInner:(BOOL)arg1 outer:(BOOL)arg2 dirty:(BOOL)arg3;
- (void)removeFromSuperlayer;
- (id)init;
- (void)dealloc;
- (id)initWithTiledLayer:(id)arg1 size:(struct CGSize)arg2 colorSpace:(struct CGColorSpace *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

