//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSVersionedArchive, NSURL;

@interface MSAssetMigrationSources : NSObject
{
    MSVersionedArchive *_colorArchive;
    MSVersionedArchive *_gradientArchive;
    NSURL *_imageURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) MSVersionedArchive *gradientArchive; // @synthesize gradientArchive=_gradientArchive;
@property(retain, nonatomic) MSVersionedArchive *colorArchive; // @synthesize colorArchive=_colorArchive;

@end

