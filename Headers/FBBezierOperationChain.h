//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FBBezierOperationChain : NSObject
{
    NSMutableArray *_operands;
}

- (void).cxx_destruct;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (void)saveWithName:(id)arg1;
- (id)archive;
- (void)appendBezierPath:(id)arg1 withOperation:(int)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithBezierPath:(id)arg1;
- (id)init;

@end

