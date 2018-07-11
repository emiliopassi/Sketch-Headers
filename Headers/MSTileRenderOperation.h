//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "CALayerDelegate-Protocol.h"

@class MSCGContextPool, MSImmutablePage, MSRenderingContext, MSRenderingDriver, MSRenderingRequest, MSTile, NSString;

@interface MSTileRenderOperation : NSOperation <CALayerDelegate>
{
    MSTile *_tile;
    MSRenderingDriver *_driver;
    MSRenderingRequest *_renderingRequest;
    struct CGImage *_image;
    MSImmutablePage *_pageForContent;
    MSCGContextPool *_contextPool;
    MSRenderingContext *_context;
    struct CGPoint _distanceFromScrollOrigin;
    struct CGRect _contentBounds;
    struct CGRect _contentRectNeedingRedraw;
}

@property(retain) MSRenderingContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) MSCGContextPool *contextPool; // @synthesize contextPool=_contextPool;
@property(retain, nonatomic) MSImmutablePage *pageForContent; // @synthesize pageForContent=_pageForContent;
@property(nonatomic) struct CGPoint distanceFromScrollOrigin; // @synthesize distanceFromScrollOrigin=_distanceFromScrollOrigin;
@property(nonatomic) struct CGRect contentRectNeedingRedraw; // @synthesize contentRectNeedingRedraw=_contentRectNeedingRedraw;
@property(readonly, nonatomic) struct CGImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_contentBounds;
@property(readonly, nonatomic) MSRenderingRequest *renderingRequest; // @synthesize renderingRequest=_renderingRequest;
@property(readonly, nonatomic) MSRenderingDriver *driver; // @synthesize driver=_driver;
@property(nonatomic) __weak MSTile *tile; // @synthesize tile=_tile;
- (void).cxx_destruct;
- (void)drawBackgroundInContext:(struct CGContext *)arg1;
- (id)makeRenderingContextForPage:(id)arg1 rect:(struct CGRect)arg2 scale:(double)arg3 zoom:(double)arg4 context:(struct CGContext *)arg5;
- (void)drawContentInContext:(struct CGContext *)arg1 clipRect:(struct CGRect)arg2;
- (void)combineContent:(struct CGContext *)arg1 withBackground:(struct CGContext *)arg2;
- (void)main;
- (unsigned long long)_tileIndex;
- (void)cancelDrawing;
- (void)dealloc;
- (id)initWithRenderingRequest:(id)arg1 contextPool:(id)arg2 driver:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

