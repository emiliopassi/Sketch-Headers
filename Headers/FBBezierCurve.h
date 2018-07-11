//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBBezierContour, FBEdgeCrossing, NSArray, NSMutableArray;

@interface FBBezierCurve : NSObject
{
    struct FBBezierCurveData _data;
    NSMutableArray *_crossings;
    FBBezierContour *_contour;
    unsigned long long _index;
    BOOL _startShared;
}

+ (id)bezierCurveWithBezierCurveData:(struct FBBezierCurveData)arg1;
+ (id)bezierCurveWithEndPoint1:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3 endPoint2:(struct CGPoint)arg4;
+ (id)bezierCurveWithLineStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2;
+ (id)bezierCurvesFromBezierPath:(id)arg1;
@property(readonly, nonatomic) struct FBBezierCurveData data; // @synthesize data=_data;
@property(nonatomic, getter=isStartShared) BOOL startShared; // @synthesize startShared=_startShared;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) __weak FBBezierContour *contour; // @synthesize contour=_contour;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (void)debugDrawColor:(id)arg1 controlPointColor:(id)arg2 scale:(double)arg3;
- (void)sortCrossings;
- (BOOL)isNext:(id)arg1;
- (BOOL)crossesEdge:(id)arg1 atIntersectRange:(id)arg2;
- (BOOL)crossesEdge:(id)arg1 atIntersection:(id)arg2;
- (BOOL)hasCrossingsUsingNonself:(BOOL)arg1;
- (id)lastCrossingUsingNonself:(BOOL)arg1;
- (id)firstCrossingUsingNonself:(BOOL)arg1;
@property(readonly, nonatomic) FBEdgeCrossing *lastCrossing;
@property(readonly, nonatomic) FBEdgeCrossing *firstCrossing;
@property(readonly, copy, nonatomic) NSArray *crossings;
- (void)selfIntersectingEdgesWithBlock:(CDUnknownBlockType)arg1;
- (void)intersectingEdgesWithBlock:(CDUnknownBlockType)arg1;
- (id)previousCrossing:(id)arg1;
- (id)nextCrossing:(id)arg1;
- (void)crossingsCopyWithBlock:(CDUnknownBlockType)arg1;
- (void)crossingsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL hasCrossings;
@property(readonly, nonatomic) FBBezierCurve *previousNonpointNonHorizontalLine;
@property(readonly, nonatomic) FBBezierCurve *nextNonpointNonHorizontalLine;
@property(readonly, nonatomic) FBBezierCurve *previousNonpoint;
@property(readonly, nonatomic) FBBezierCurve *nextNonpoint;
@property(readonly, nonatomic) FBBezierCurve *previous;
@property(readonly, nonatomic) FBBezierCurve *next;
- (void)removeCrossingsInNonCrossingOverlapRuns;
- (void)reorderCoincidentCrossingA:(id)arg1 crossingB:(id)arg2;
- (void)removeDuplicateCrossings;
- (void)removeAllCrossings;
- (void)removeCrossing:(id)arg1;
- (void)addCrossing:(id)arg1;
- (id)description;
- (id)clone;
@property(readonly, nonatomic) NSMutableArray *crossings_;
- (id)bezierPath;
- (struct CGPoint)tangentAtParameter:(double)arg1;
- (struct CGPoint)tangentFromLeftOffset:(double)arg1;
- (struct CGPoint)tangentFromRightOffset:(double)arg1;
- (struct CGPoint)pointFromLeftOffset:(double)arg1;
- (struct CGPoint)pointFromRightOffset:(double)arg1;
@property(readonly, nonatomic) struct CGRect boundingRect;
@property(readonly, nonatomic) struct CGRect bounds;
- (struct FBBezierCurveLocation)closestLocationToPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) BOOL isPointOrHorizontalLine;
@property(readonly, nonatomic) BOOL isHorizontalLine;
@property(readonly, nonatomic) BOOL looksLikeLine;
@property(readonly, nonatomic) BOOL isEndHorizontal;
@property(readonly, nonatomic) BOOL isStartHorizontal;
@property(readonly, nonatomic, getter=isPoint) BOOL point;
- (double)lengthAtParameter:(double)arg1;
- (double)length;
- (double)refineParameter:(double)arg1 forPoint:(struct CGPoint)arg2;
- (struct CGPoint)pointAtParameter:(double)arg1 leftBezierCurve:(id *)arg2 rightBezierCurve:(id *)arg3;
- (struct CGPoint)pointAtParameter:(double)arg1;
- (id)curveWithTransform:(struct CGAffineTransform)arg1;
- (id)reversedCurve;
- (void)splitSubcurvesWithRange:(struct FBRange)arg1 left:(id *)arg2 middle:(id *)arg3 right:(id *)arg4;
- (id)subcurveWithRange:(struct FBRange)arg1;
- (void)intersectionsWithBezierCurve:(id)arg1 overlapRange:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;
- (BOOL)doesHaveIntersectionsWithBezierCurve:(id)arg1;
- (BOOL)mightIntersectWith:(id)arg1;
- (void)checkForLine;
- (BOOL)isEqual:(id)arg1;
- (id)initWithLineStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 contour:(id)arg3;
- (id)initWithEndPoint1:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3 endPoint2:(struct CGPoint)arg4 contour:(id)arg5;
- (id)initWithBezierCurveData:(struct FBBezierCurveData)arg1;
@property(readonly, nonatomic) BOOL isStraightLine;
@property(readonly, nonatomic) struct CGPoint endPoint2;
@property(readonly, nonatomic) struct CGPoint controlPoint2;
@property(readonly, nonatomic) struct CGPoint controlPoint1;
@property(readonly, nonatomic) struct CGPoint endPoint1;

@end

