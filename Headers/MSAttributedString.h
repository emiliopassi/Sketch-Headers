//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSAttributedString, NSSet, NSString;

@interface MSAttributedString : NSObject <MSCoding, NSCopying>
{
    // Error parsing type: A^v, name: _fontNamesAtomicPointer
    NSSet *_fontNames;
    NSAttributedString *_attributedString;
    NSAttributedString *_encodedAttributedString;
    NSAttributedString *_transformedAttributedString;
    NSSet *_fontDescriptors;
}

+ (BOOL)isRequiredFontAvailableInDictionary:(id)arg1;
+ (id)fontDescriptorInDictionary:(id)arg1;
+ (id)attributedStringWithRefreshedFontDescriptors:(id)arg1;
+ (id)decodeAttributedString:(id)arg1;
+ (id)encodeAttributedString:(id)arg1;
+ (id)refreshFontDescriptorsInDictionary:(id)arg1;
+ (id)decodeAttributesInDictionary:(id)arg1;
+ (id)encodeAttributesInDictionary:(id)arg1;
@property(copy, nonatomic) NSSet *fontDescriptors; // @synthesize fontDescriptors=_fontDescriptors;
@property(retain, nonatomic) NSAttributedString *transformedAttributedString; // @synthesize transformedAttributedString=_transformedAttributedString;
@property(retain, nonatomic) NSAttributedString *encodedAttributedString; // @synthesize encodedAttributedString=_encodedAttributedString;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(copy, nonatomic) NSSet *fontNames; // @synthesize fontNames=_fontNames;
- (void).cxx_destruct;
- (BOOL)propertiesAreEqual:(id)arg1;
- (id)debugDescription;
- (id)immutableModelObject;
- (id)attributedStringByReplacingFontNames:(id)arg1;
@property(readonly, nonatomic) BOOL areRequiredFontsAvailable;
@property(readonly, nonatomic) NSSet *unavailableFontNames;
@property(readonly, nonatomic) NSString *string;
- (unsigned long long)hash;
- (void)resetComputedProperties;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeAsJSON:(id)arg1;
- (void)encodeWithArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUnarchiver:(id)arg1;
- (id)initWithEncodedAttributedString:(id)arg1;
- (id)initWithAttributedString:(id)arg1 documentColorSpace:(id)arg2;
- (id)initWithAttributedString:(id)arg1 colorSpace:(id)arg2 convert:(BOOL)arg3;
- (id)treeAsDictionary;

// Remaining properties
@property(readonly, nonatomic) NSString *archiveReferenceIdentifier_bc;

@end

