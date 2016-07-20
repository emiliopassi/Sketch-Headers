//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSRenderingContextCacheProvider.h"

@class BCCache, MSExportRequest, NSColorSpace, NSString;

@interface MSExporter : NSObject <MSRenderingContextCacheProvider>
{
    BOOL _isPrinting;
    BOOL _allowSubpixelAntialiasing;
    MSExportRequest *_request;
    NSColorSpace *_colorSpace;
    BCCache *_cache;
    struct CGRect _bounds;
}

+ (id)exporterForRequest:(id)arg1 colorSpace:(id)arg2;
@property(nonatomic) BOOL allowSubpixelAntialiasing; // @synthesize allowSubpixelAntialiasing=_allowSubpixelAntialiasing;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) BCCache *cache; // @synthesize cache=_cache;
@property(nonatomic) BOOL isPrinting; // @synthesize isPrinting=_isPrinting;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain, nonatomic) MSExportRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)cacheForZoomLevel:(double)arg1;
@property(readonly, nonatomic) BCCache *zoomIndependentCache;
- (void)drawRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)drawSliceBackgroundIfNecessary:(struct CGContext *)arg1;
- (id)bitmapImageRep;
- (id)basicBitmapImageRep;
- (void)draw:(struct CGContext *)arg1;
- (id)TIFFData;
- (id)PNGData;
- (id)JPGData;
- (id)EPSData;
- (id)image;
- (id)data;
- (struct CGRect)boundsForVectorRender;
- (id)PDFData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

