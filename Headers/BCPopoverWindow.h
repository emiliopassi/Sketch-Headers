//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@interface BCPopoverWindow : NSWindow
{
}

+ (id)attachedWindowWithView:(id)arg1;
- (id)arrowView;
@property(nonatomic) double arrowPosition; // @dynamic arrowPosition;
@property(nonatomic) unsigned long long arrowEdge; // @dynamic arrowEdge;
- (unsigned long long)collectionBehavior;
- (BOOL)canBecomeKeyWindow;
- (void)sendEvent:(id)arg1;
- (void)resignMainWindow;
- (id)initWithContentRect:(struct CGRect)arg1;

@end

