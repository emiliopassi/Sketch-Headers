//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSColor, MSImmutableColor;

@protocol MSColorConverter <NSObject>
- (BOOL)shouldConvertImmutableColor:(MSImmutableColor *)arg1;
- (BOOL)shouldConvertColor:(MSColor *)arg1;
- (MSImmutableColor *)convertImmutableColor:(MSImmutableColor *)arg1;
- (MSColor *)convertColor:(MSColor *)arg1;
@end

