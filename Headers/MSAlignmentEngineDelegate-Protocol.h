//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSAlignmentEngine;

@protocol MSAlignmentEngineDelegate <NSObject>
- (struct CGPoint)alignmentEngine:(MSAlignmentEngine *)arg1 alignPoint:(struct CGPoint)arg2;

@optional
- (struct CGPoint)alignmentEngine:(MSAlignmentEngine *)arg1 roundPoint:(struct CGPoint)arg2;
@end

