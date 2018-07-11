//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSAllRenderers-Protocol.h"

@class NSString;
@protocol MSProfilingRendererDelegate, MSRenderer;

@interface MSProfilingRenderer : NSObject <MSAllRenderers>
{
    BOOL _isGroup;
    id <MSRenderer> _baseRenderer;
    id <MSProfilingRendererDelegate> _profilingDelegate;
    NSString *_label;
}

@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) BOOL isGroup; // @synthesize isGroup=_isGroup;
@property(readonly, nonatomic) id <MSProfilingRendererDelegate> profilingDelegate; // @synthesize profilingDelegate=_profilingDelegate;
@property(readonly, nonatomic) id <MSRenderer> baseRenderer; // @synthesize baseRenderer=_baseRenderer;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithBaseRenderer:(id)arg1 profilingDelegate:(id)arg2 isGroup:(BOOL)arg3 label:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

