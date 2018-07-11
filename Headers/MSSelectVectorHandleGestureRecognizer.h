//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSGestureRecognizer.h"

@protocol MSSelectVectorHandleGestureRecognizerDelegate;

@interface MSSelectVectorHandleGestureRecognizer : MSGestureRecognizer
{
    struct CGPoint _location;
    BOOL _waitingForMouseUpToDeselect;
    unsigned long long _modifierFlags;
}

@property(readonly, nonatomic) unsigned long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
- (void)reset;
- (void)mouseUp:(id)arg1 location:(struct CGPoint)arg2;
- (void)mouseDragged:(struct CGPoint)arg1 modifierFlags:(unsigned long long)arg2;
- (void)mouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 modifierFlags:(unsigned long long)arg3;
@property(readonly, nonatomic) BOOL toggleSelection;
- (struct CGPoint)locationInLayer:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <MSSelectVectorHandleGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

