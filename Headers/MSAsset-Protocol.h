//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@protocol MSAsset;

@protocol MSAsset <NSObject, NSCopying>
- (BOOL)isAssetEqual:(id <MSAsset>)arg1;
- (unsigned long long)assetType;
@end

