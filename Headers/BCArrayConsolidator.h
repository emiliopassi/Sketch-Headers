//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BCArrayConsolidator : NSObject
{
    CDUnknownBlockType _comparisonBlock;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _createBlock;
    CDUnknownBlockType _postRemoveBlock;
}

@property(copy, nonatomic) CDUnknownBlockType postRemoveBlock; // @synthesize postRemoveBlock=_postRemoveBlock;
@property(copy, nonatomic) CDUnknownBlockType createBlock; // @synthesize createBlock=_createBlock;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy, nonatomic) CDUnknownBlockType comparisonBlock; // @synthesize comparisonBlock=_comparisonBlock;
- (void).cxx_destruct;

@end
