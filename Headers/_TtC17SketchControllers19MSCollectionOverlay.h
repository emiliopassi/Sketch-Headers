//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSOverlay.h>

@class _TtC17SketchControllers25MSCollectionOverlayLayout;
@protocol _TtP17SketchControllers29MSCollectionOverlayDataSource_;

@interface _TtC17SketchControllers19MSCollectionOverlay : MSOverlay
{
    // Error parsing type: , name: layout
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: cachedOverlayItems
}

- (void).cxx_destruct;
- (id)overlayItems:(unsigned long long)arg1 zoomScale:(double)arg2;
- (id)overlayItemImages:(struct CGColorSpace *)arg1 backingScale:(double)arg2;
- (void)reloadData;
@property(nonatomic) __weak id <_TtP17SketchControllers29MSCollectionOverlayDataSource_> dataSource; // @synthesize dataSource;
- (long long)numberOfItemsIn:(long long)arg1;
@property(nonatomic, readonly) long long numberOfSections;
@property(nonatomic, readonly) _TtC17SketchControllers25MSCollectionOverlayLayout *layout; // @synthesize layout;
- (id)init;

@end
