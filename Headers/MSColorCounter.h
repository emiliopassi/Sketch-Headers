//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSColor, MSImmutableColor, NSString;

@interface MSColorCounter : NSObject
{
    MSImmutableColor *_immutableColor;
    MSColor *_color;
    unsigned long long _fillCount;
    unsigned long long _borderCount;
    unsigned long long _shadowCount;
    unsigned long long _innerShadowCount;
    unsigned long long _textCount;
    unsigned long long _artboardCount;
}

+ (void)initialize;
@property(nonatomic) unsigned long long artboardCount; // @synthesize artboardCount=_artboardCount;
@property(nonatomic) unsigned long long textCount; // @synthesize textCount=_textCount;
@property(nonatomic) unsigned long long innerShadowCount; // @synthesize innerShadowCount=_innerShadowCount;
@property(nonatomic) unsigned long long shadowCount; // @synthesize shadowCount=_shadowCount;
@property(nonatomic) unsigned long long borderCount; // @synthesize borderCount=_borderCount;
@property(nonatomic) unsigned long long fillCount; // @synthesize fillCount=_fillCount;
@property(retain, nonatomic) MSColor *color; // @synthesize color=_color;
@property(retain, nonatomic) MSImmutableColor *immutableColor; // @synthesize immutableColor=_immutableColor;
- (void).cxx_destruct;
- (long long)compareArtboardCounts:(id)arg1;
- (long long)compareTextCounts:(id)arg1;
- (long long)compareInnerShadowCounts:(id)arg1;
- (long long)compareShadowCounts:(id)arg1;
- (long long)compareBorderCounts:(id)arg1;
- (long long)compareFillCounts:(id)arg1;
- (long long)compareTotalCounts:(id)arg1;
- (long long)compare:(id)arg1 byColorUse:(unsigned long long)arg2;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned long long totalCount;
- (void)countSource:(id)arg1;

@end

