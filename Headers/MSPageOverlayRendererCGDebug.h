//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSPageOverlayRendererCG.h"

@interface MSPageOverlayRendererCGDebug : MSPageOverlayRendererCG
{
    struct CGColor *_coordinateColor;
}

@property(nonatomic) struct CGColor *coordinateColor; // @synthesize coordinateColor=_coordinateColor;
- (void)drawDebugCoordinatesWithZoom:(double)arg1 context:(struct CGContext *)arg2;
- (void)renderOverlayForPage:(id)arg1 selectedLayers:(id)arg2 selectedArtboard:(id)arg3 options:(unsigned long long)arg4 rect:(struct CGRect)arg5 context:(id)arg6;
- (void)renderBackgroundForPage:(id)arg1 rect:(struct CGRect)arg2 origin:(struct CGPoint)arg3 zoom:(double)arg4 context:(struct CGContext *)arg5;
- (void)dealloc;
- (id)initWithTitleFont:(id)arg1;

@end

