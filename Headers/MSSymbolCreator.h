//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSSymbolCreator : NSObject
{
}

+ (id)createSymbolInstanceWithName:(id)arg1 rect:(struct CGRect)arg2 symbolID:(id)arg3;
+ (id)createSymbolMasterWitName:(id)arg1 size:(struct CGSize)arg2 onPage:(id)arg3;
+ (void)moveLayers:(id)arg1 toArtboard:(id)arg2;
+ (id)createSymbolFromLayers:(id)arg1 withName:(id)arg2 onSymbolsPage:(BOOL)arg3;
+ (BOOL)canCreateSymbolFromLayers:(id)arg1;

@end

