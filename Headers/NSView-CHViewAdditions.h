//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray;

@interface NSView (CHViewAdditions)
- (id)nestedSubviewWithIdentifier:(id)arg1;
- (id)containingAncestorViewOfClass:(Class)arg1;
@property(readonly, nonatomic) NSArray *allSubviews;
- (void)beginDragFromEvent:(id)arg1 image:(id)arg2 writersBlock:(CDUnknownBlockType)arg3;
- (void)beginDragFromEvent:(id)arg1 image:(id)arg2 type:(id)arg3 data:(id)arg4;
- (id)imageRepresentation;
- (void)setNeedsDisplay;
- (void)setFrameOriginY:(double)arg1;
- (void)setFrameOriginX:(double)arg1;
- (void)setFrameWidth:(double)arg1;
- (void)setFrameHeight:(double)arg1;
@end

