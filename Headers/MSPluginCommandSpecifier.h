//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface MSPluginCommandSpecifier : NSObject <NSCopying>
{
    NSString *_pluginBundleIdentifier;
    NSString *_commandIdentifier;
}

@property(readonly, copy, nonatomic) NSString *commandIdentifier; // @synthesize commandIdentifier=_commandIdentifier;
@property(readonly, copy, nonatomic) NSString *pluginBundleIdentifier; // @synthesize pluginBundleIdentifier=_pluginBundleIdentifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCommandSpecifier:(id)arg1;
- (unsigned long long)hash;
- (id)stringValue;
- (id)initWithPluginBundleIdentifier:(id)arg1 commandIdentifier:(id)arg2;

@end

