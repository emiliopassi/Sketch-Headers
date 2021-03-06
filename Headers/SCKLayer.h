//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchCloudKit/SCKObject.h>

#import <SketchCloudKit/SCKDiffable-Protocol.h>

@class NSString, SCKArtboard, SCKFlowConnection;

@interface SCKLayer : SCKObject <SCKDiffable>
{
    BOOL _isFixedToViewport;
    NSString *_name;
    SCKFlowConnection *_flowConnection;
    struct CGRect _boundingRect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isFixedToViewport; // @synthesize isFixedToViewport=_isFixedToViewport;
@property(readonly, nonatomic) SCKFlowConnection *flowConnection; // @synthesize flowConnection=_flowConnection;
@property(readonly, nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) SCKArtboard *artboard;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)diffComparedTo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

