//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface MSArchiveHeader : NSObject <MSCoding>
{
    long long _version;
    long long _compatibilityVersion;
    NSDictionary *_metadata;
    id _root;
}

+ (id)metadataForNewHeader;
@property(retain, nonatomic) id root; // @synthesize root=_root;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) long long compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)encodeAsJSON:(id)arg1;
- (void)encodeWithArchiver:(id)arg1;
- (id)initWithUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *archiveReferenceIdentifier_bc;

@end

