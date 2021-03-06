//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDragRectEventHandler.h"

@class MSLayer;

@interface MSInsertLayerEventHandler : MSDragRectEventHandler
{
    MSLayer *_prototypeLayer;
    CDUnknownBlockType _completionBlock;
    MSLayer *_insertedLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSLayer *insertedLayer; // @synthesize insertedLayer=_insertedLayer;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MSLayer *prototypeLayer; // @synthesize prototypeLayer=_prototypeLayer;
- (BOOL)allowsSwitchToInsertAction;
- (void)resizeLayer:(id)arg1 toRect:(struct CGRect)arg2;
- (id)group;
- (void)insertNewLayer:(id)arg1;
- (id)insertAsNewLayer:(struct CGRect)arg1;
- (id)performActionWithRect:(struct CGRect)arg1 fromLayer:(id)arg2 constrainProportions:(BOOL)arg3;
- (id)pathForPrototypeLayer;
- (id)overlayItems:(unsigned long long)arg1 parameters:(struct MSRenderingParameters)arg2;
- (void)setInsertionRect:(struct CGRect)arg1;
- (id)imageName;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (id)applicableActionItemIdentifier;

@end

