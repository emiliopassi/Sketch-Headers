//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSSwiftBitmapShadowRendererCG : NSObject
{
    // Error parsing type: , name: MSMinimumBlurRadius
    // Error parsing type: , name: MSMaximumShadowMaskSize
}

- (id)init;
- (void)renderShadow:(id)arg1 path:(id)arg2 windingRule:(unsigned long long)arg3 options:(id)arg4 type:(unsigned long long)arg5 strokeType:(unsigned long long)arg6 fillShouldClip:(BOOL)arg7 lineWidth:(double)arg8 cacheObject:(id)arg9 context:(id)arg10;
- (void)renderInnerShadow:(id)arg1 path:(id)arg2 windingRule:(unsigned long long)arg3 cacheObject:(id)arg4 context:(id)arg5;
- (void)renderShadow:(id)arg1 rect:(struct CGRect)arg2 context:(id)arg3 block:(CDUnknownBlockType)arg4;

@end

