//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSImmutableLayerGroup.h"

@interface _MSImmutableShapeGroup : MSImmutableLayerGroup
{
    long long _clippingMaskMode;
    BOOL _hasClippingMask;
}

+ (Class)mutableClass;
@property(nonatomic) BOOL hasClippingMask; // @synthesize hasClippingMask=_hasClippingMask;
@property(nonatomic) long long clippingMaskMode; // @synthesize clippingMaskMode=_clippingMaskMode;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)objectDidInit;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

