//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCustomShapeLayer.h"

@interface _MSRectangleShape : MSCustomShapeLayer
{
    BOOL _hasConvertedToNewRoundCorners;
    double _fixedRadius;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)setPrimitiveHasConvertedToNewRoundCorners:(BOOL)arg1;
- (BOOL)primitiveHasConvertedToNewRoundCorners;
- (void)setPrimitiveFixedRadius:(double)arg1;
- (double)primitiveFixedRadius;
@property(nonatomic) BOOL hasConvertedToNewRoundCorners; // @synthesize hasConvertedToNewRoundCorners=_hasConvertedToNewRoundCorners;
@property(nonatomic) double fixedRadius; // @synthesize fixedRadius=_fixedRadius;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

