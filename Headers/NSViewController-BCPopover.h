//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@interface NSViewController (BCPopover)
- (id)presentViewController:(id)arg1 asBCPopoverRelativeToRect:(struct CGRect)arg2 ofView:(id)arg3 preferredEdge:(unsigned long long)arg4 screenEdgeBehaviour:(long long)arg5;
- (id)presentViewController:(id)arg1 asBCPopoverRelativeToView:(id)arg2 preferredEdge:(unsigned long long)arg3 screenEdgeBehaviour:(long long)arg4;
- (void)addChildViewController:(id)arg1 fittingIntoView:(id)arg2;
- (void)ensureLoaded;
- (id)rootViewController;
- (id)targetViewControllerForAction:(SEL)arg1 sender:(id)arg2;
@end

