//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSOverridePoint : NSObject
{
    NSString *_layerIDPath;
    NSString *_layerID;
    NSString *_property;
    NSString *_dataIdentifier;
    MSOverridePoint *_parent;
    NSString *_layerName;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *layerName; // @synthesize layerName=_layerName;
@property(readonly, nonatomic) __weak MSOverridePoint *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSString *dataIdentifier; // @synthesize dataIdentifier=_dataIdentifier;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
@property(readonly, nonatomic) NSString *layerID; // @synthesize layerID=_layerID;
- (void).cxx_destruct;
- (unsigned long long)distanceToOverridePoint:(id)arg1;
- (long long)comparisonScoreAgainst:(id)arg1;
@property(readonly, nonatomic) BOOL isSymbolOverride;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *layerIDPath; // @synthesize layerIDPath=_layerIDPath;
- (id)initWithLayer:(id)arg1 property:(id)arg2 parent:(id)arg3;

@end

