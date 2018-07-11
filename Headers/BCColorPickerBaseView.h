//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSControl.h>

@interface BCColorPickerBaseView : NSControl
{
    id _bc_target;
    SEL _bc_action;
}

+ (id)lightShadow;
+ (id)darkShadow;
+ (void)drawFrameInRect:(struct CGRect)arg1 block:(CDUnknownBlockType)arg2;
@property SEL bc_action; // @synthesize bc_action=_bc_action;
@property(nonatomic) __weak id bc_target; // @synthesize bc_target=_bc_target;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)drawMarkerInRect:(struct CGRect)arg1;
- (id)markerShadow;
- (void)drawCheckerboardPatternInRect:(struct CGRect)arg1;
- (void)drawContentInRect:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2;
- (struct CGRect)contentBounds;
- (void)drawRect:(struct CGRect)arg1;
- (id)initInBounds:(struct CGRect)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (SEL)action;
- (id)target;

@end

