//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchRendering/MSTilingSystemProvider-Protocol.h>

@class CALayer, CAMetalLayer, MSRenderInstruction, NSView, _TtC11SketchModel23MSResolvedDocumentMaker;
@protocol MSTiledRendererHostView;

@interface MSEkranoplanRenderer : NSObject <MSTilingSystemProvider>
{
    struct EKDeviceStruct *_device;
    NSView<MSTiledRendererHostView> *hostView;
    CALayer *layer;
    CAMetalLayer *_metalLayer;
    _TtC11SketchModel23MSResolvedDocumentMaker *_resolvedDocumentMaker;
    MSRenderInstruction *_renderedInstruction;
}

- (void).cxx_destruct;
@property(copy) MSRenderInstruction *renderedInstruction; // @synthesize renderedInstruction=_renderedInstruction;
@property(retain, nonatomic) _TtC11SketchModel23MSResolvedDocumentMaker *resolvedDocumentMaker; // @synthesize resolvedDocumentMaker=_resolvedDocumentMaker;
@property(retain, nonatomic) CAMetalLayer *metalLayer; // @synthesize metalLayer=_metalLayer;
@property(nonatomic) __weak NSView<MSTiledRendererHostView> *hostView; // @synthesize hostView;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer;
- (BOOL)isDrawing;
- (void)updateContentWithRenderInstruction:(id)arg1 synchronously:(BOOL)arg2 hasUserFocus:(BOOL)arg3;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1 syncFirstFrame:(BOOL)arg2;

@end

