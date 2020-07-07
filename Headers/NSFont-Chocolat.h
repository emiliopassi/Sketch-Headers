//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSFont.h>

@class NSURL;

@interface NSFont (Chocolat)
+ (BOOL)isEmbeddableFontWithDescriptor:(const struct __CTFontDescriptor *)arg1;
+ (BOOL)isSystemFontWithDescriptor:(const struct __CTFontDescriptor *)arg1;
+ (BOOL)isFontFileRegisteredWithURL:(id)arg1;
+ (id)fileURLWithDescriptor:(const struct __CTFontDescriptor *)arg1;
+ (id)postscriptNameFromDescriptor:(const struct __CTFontDescriptor *)arg1;
+ (BOOL)isTrueTypeOrOpenTypeFontWithDescriptor:(const struct __CTFontDescriptor *)arg1;
+ (id)embeddableFontExtensions;
@property(nonatomic, readonly) BOOL isEmbeddable;
@property(nonatomic, readonly) BOOL isSystemFont;
@property(nonatomic, readonly) NSURL *fileURL;
@end
