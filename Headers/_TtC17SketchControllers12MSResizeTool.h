//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MSLayerCoordinateSpace;

@interface _TtC17SketchControllers12MSResizeTool : NSObject
{
    // Error parsing type: , name: items
    // Error parsing type: , name: handle
    // Error parsing type: , name: referenceGeometry
    // Error parsing type: , name: size
    // Error parsing type: , name: flippedHorizontally
    // Error parsing type: , name: flippedVertically
    // Error parsing type: , name: rotation
    // Error parsing type: , name: coordinateSpace.storage
    // Error parsing type: , name: unitCoordinateSpace.storage
    // Error parsing type: , name: alignmentSettings
    // Error parsing type: , name: roundingIncrement
    // Error parsing type: , name: snappingResult
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) id <MSLayerCoordinateSpace> unitCoordinateSpace;
@property(nonatomic, retain) id <MSLayerCoordinateSpace> coordinateSpace;
@property(nonatomic) BOOL flippedVertically; // @synthesize flippedVertically;
@property(nonatomic) BOOL flippedHorizontally; // @synthesize flippedHorizontally;
@property(nonatomic) long long handle; // @synthesize handle;

@end
