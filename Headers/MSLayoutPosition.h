//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSLayoutAnchor.h>

@interface MSLayoutPosition : MSLayoutAnchor
{
    BOOL _isFixed;
    CDStruct_b7168832 _fixedLine;
}

+ (id)positionAnchorWithLine:(CDStruct_b7168832)arg1 inLayer:(id)arg2 attribute:(unsigned long long)arg3;
- (id)description;
- (id)snappingTargetInCoordinateSpace:(id)arg1;
- (double)positionInCoordinateSpace:(id)arg1;
- (unsigned long long)axis;

@end

