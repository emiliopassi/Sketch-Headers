//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSImmutableModelObject.h"

@class NSArray;

@interface _MSImmutableGradient : MSImmutableModelObject
{
    double _elipseLength;
    struct CGPoint _from;
    long long _gradientType;
    struct CGPoint _to;
    NSArray *_stops;
}

+ (Class)mutableClass;
@property(retain, nonatomic) NSArray *stops; // @synthesize stops=_stops;
@property(nonatomic) struct CGPoint to; // @synthesize to=_to;
@property(nonatomic) long long gradientType; // @synthesize gradientType=_gradientType;
@property(nonatomic) struct CGPoint from; // @synthesize from=_from;
@property(nonatomic) double elipseLength; // @synthesize elipseLength=_elipseLength;
- (void).cxx_destruct;
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

