//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MSOverridePoint : NSObject
{
    NSString *_layerID;
    NSString *_property;
    MSOverridePoint *_parent;
    NSString *_layerName;
}

@property(readonly, nonatomic) NSString *layerName; // @synthesize layerName=_layerName;
@property(readonly, nonatomic) __weak MSOverridePoint *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
@property(readonly, nonatomic) NSString *layerID; // @synthesize layerID=_layerID;
- (void).cxx_destruct;
- (long long)comparisonScoreAgainst:(id)arg1;
@property(readonly, nonatomic) BOOL isSymbolOverride;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *name;
- (id)layerIDPath;
- (id)initWithLayer:(id)arg1 property:(id)arg2 parent:(id)arg3;

@end
