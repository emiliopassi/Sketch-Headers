//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStyledLayer.h"

@class NSTextStorage;

@protocol _MSTextLayer <MSStyledLayer>
@property(readonly, nonatomic) long long textBehaviour;
@property(readonly, nonatomic) NSTextStorage *storage;
@property(readonly, nonatomic) long long lineSpacingBehaviour;
@property(readonly, nonatomic) BOOL heightIsClipped;
@property(readonly, nonatomic) struct CGRect glyphBounds;
@property(readonly, nonatomic) BOOL dontSynchroniseWithSymbol;
@property(readonly, nonatomic) BOOL automaticallyDrawOnUnderlyingPath;
@end

