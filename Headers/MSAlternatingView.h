//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface MSAlternatingView : NSView
{
    BOOL didDrag;
    BOOL isInside;
    BOOL isDown;
    NSView *_otherView;
}

@property(nonatomic) __weak NSView *otherView; // @synthesize otherView=_otherView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)buttonImage;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)awakeFromNib;
- (void)toggleColorComponentTextFieldFocusIfAppropriate;
- (void)mouseUp:(id)arg1;
- (BOOL)shouldSwapColorModeForEvent:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;

@end

