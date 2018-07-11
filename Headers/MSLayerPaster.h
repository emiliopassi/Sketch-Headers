//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSPasteboardLayers, NSMutableArray, NSMutableDictionary;

@interface MSLayerPaster : NSObject
{
    NSMutableDictionary *_objectIDMap;
    NSMutableArray *_insertedSymbolMasters;
    MSPasteboardLayers *_pasteboardLayers;
}

+ (id)duplicateLayers:(id)arg1;
+ (id)parentForData:(id)arg1 hint:(id)arg2 page:(id)arg3;
+ (id)parentForData:(id)arg1 hint:(id)arg2 page:(id)arg3 viewPort:(id)arg4;
+ (id)insertPasteboardData:(id)arg1 intoParent:(id)arg2 atPosition:(struct CGPoint)arg3 afterLayer:(id)arg4 viewport:(id)arg5 fitToParent:(BOOL)arg6;
+ (id)insertPagePasteboardData:(id)arg1 intoDocument:(id)arg2 afterPage:(id)arg3;
+ (id)insertPasteboardData:(id)arg1 intoParent:(id)arg2 beforeLayer:(id)arg3;
+ (id)insertPasteboardData:(id)arg1 onPage:(id)arg2 withHint:(id)arg3 viewPort:(id)arg4;
@property(readonly, nonatomic) MSPasteboardLayers *pasteboardLayers; // @synthesize pasteboardLayers=_pasteboardLayers;
@property(readonly, nonatomic) NSMutableArray *insertedSymbolMasters; // @synthesize insertedSymbolMasters=_insertedSymbolMasters;
@property(readonly, nonatomic) NSMutableDictionary *objectIDMap; // @synthesize objectIDMap=_objectIDMap;
- (void).cxx_destruct;
- (void)removeDisconnectedFlowsFromLayers:(id)arg1;
- (BOOL)propertiesAreEqualBetweenSymbol:(id)arg1 andSymbol:(id)arg2;
- (void)addForeignSymbolsToDocument:(id)arg1;
- (id)pasteSymbol:(id)arg1 fromInstanceReferenceToDocument:(id)arg2;
- (void)addSymbolMastersToDocument:(id)arg1;
- (void)updateOverrides;
- (void)ensureSymbolMastersIn:(id)arg1 haveUniqueIDInDocument:(id)arg2;
- (void)addSharedStylesInDocument:(id)arg1;
- (id)rightmostArtboardOnPage:(id)arg1 intersectingRect:(struct CGRect)arg2;
- (struct CGPoint)findFirstAvailablePositionForSize:(struct CGSize)arg1 nextToArtboardsOnPage:(id)arg2 inAllowedRect:(struct CGRect)arg3;
- (BOOL)wouldArtboardWithRect:(struct CGRect)arg1 intersectOtherArtboardsOnPage:(id)arg2;
- (id)layersFromLayersWithPathsWrapped:(id)arg1 forParent:(id)arg2;
- (id)pathsExtractedFromLayers:(id)arg1;
- (id)layersFromPasteboardSuitedForParent:(id)arg1;
- (void)fitCombinedRectForLayers:(id)arg1 parent:(id)arg2 viewport:(id)arg3;
- (void)setCombinedOrigin:(struct CGPoint)arg1 forLayers:(id)arg2;
- (id)insertPagePasteboardDataIntoDocument:(id)arg1 afterPage:(id)arg2;
- (id)insertPasteboardDataIntoParent:(id)arg1 beforeLayer:(id)arg2;
- (id)insertPasteboardDataIntoParent:(id)arg1 atPosition:(struct CGPoint)arg2 afterLayer:(id)arg3 viewport:(id)arg4 fitToParent:(BOOL)arg5;
- (id)fixupAfterPastingLayers:(id)arg1 intoParent:(id)arg2;
- (id)prepareToInsertLayers:(id)arg1 intoDocument:(id)arg2;
- (struct CGRect)centerSize:(struct CGSize)arg1 inAllowedRect:(struct CGRect)arg2;
- (struct CGRect)allowedRectForViewport:(id)arg1 root:(id)arg2;
- (struct CGRect)rectByMaintainingOriginalPositionInRoot:(id)arg1;
- (struct CGRect)targetRectForPasteboardDataInViewPort:(id)arg1 root:(id)arg2 canMoveViewport:(char *)arg3;
- (id)parentForDataWithHint:(id)arg1 page:(id)arg2;
- (id)parentForDataWithHint:(id)arg1 page:(id)arg2 viewPort:(id)arg3;
- (id)insertPasteboardDataOnPage:(id)arg1 withHint:(id)arg2 viewPort:(id)arg3;
- (id)initWithPasteboardLayers:(id)arg1;

@end

