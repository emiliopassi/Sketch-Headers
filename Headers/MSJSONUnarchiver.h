//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSBaseUnarchiver.h"

#import "BCJSONDecoderDelegate-Protocol.h"

@class BCJSONDecoder, NSMutableDictionary, NSSet, NSString;

@interface MSJSONUnarchiver : MSBaseUnarchiver <BCJSONDecoderDelegate>
{
    NSMutableDictionary *_references;
    NSSet *_allowedClasses;
}

+ (id)unarchiverFromCoder:(id)arg1;
+ (void)defineReplacementClasses;
+ (void)load;
@property(retain, nonatomic) NSSet *allowedClasses; // @synthesize allowedClasses=_allowedClasses;
@property(retain, nonatomic) NSMutableDictionary *references; // @synthesize references=_references;
- (void).cxx_destruct;
- (void)setArchiveVersion:(long long)arg1;
- (id)referenceObjectWithIdentifier:(id)arg1;
- (id)decodeReferenceObjectOfClass:(id)arg1 withIdentifier:(id)arg2;
- (void)addReference:(id)arg1 withIdentifier:(id)arg2;
- (struct CGSize)decodeSizeForKey:(id)arg1 withDefault:(struct CGSize)arg2;
- (long long)decodeIntegerForKey:(id)arg1 withDefault:(long long)arg2;
- (struct CGPoint)decodePointForKey:(id)arg1 withDefault:(struct CGPoint)arg2;
- (struct CGRect)decodeRectForKey:(id)arg1 withDefault:(struct CGRect)arg2;
- (BOOL)decodeBoolForKey:(id)arg1 withDefault:(BOOL)arg2;
- (double)decodeDoubleForKey:(id)arg1 withDefault:(double)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectForKey:(id)arg1;
- (BOOL)containsValueForKey:(id)arg1;
@property(readonly, nonatomic) BCJSONDecoder *decoder;
- (BOOL)decoder:(id)arg1 shouldInstantiateObjectOfClass:(Class)arg2;
- (BOOL)isClass:(Class)arg1 inAllowedSet:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

