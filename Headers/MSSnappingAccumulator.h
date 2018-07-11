//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface MSSnappingAccumulator : NSObject
{
    NSMutableArray *_dimensionSnaps;
    NSMutableArray *_spacingSnaps;
    NSMutableArray *_edgeSnaps;
    unsigned long long _axis;
}

@property(readonly, nonatomic) NSArray *spacingSnaps; // @synthesize spacingSnaps=_spacingSnaps;
@property(readonly, nonatomic) NSArray *dimensionSnaps; // @synthesize dimensionSnaps=_dimensionSnaps;
@property(readonly, nonatomic) NSArray *edgeSnaps; // @synthesize edgeSnaps=_edgeSnaps;
@property(readonly, nonatomic) unsigned long long axis; // @synthesize axis=_axis;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)removeAllSpacingSnaps;
- (void)addDistanceMeasurement:(id)arg1;
- (void)removeAllDimensionSnaps;
- (void)addDimensionMeasurement:(id)arg1;
- (void)removeAllEdgeSnaps;
- (void)addLineRelationship:(id)arg1;
- (id)initWithAxis:(unsigned long long)arg1;

@end

