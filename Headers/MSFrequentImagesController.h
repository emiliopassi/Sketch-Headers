//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSFrequentObjectsController.h"

@protocol MSFrequentImagesControllerDelegate;

@interface MSFrequentImagesController : MSFrequentObjectsController
{
}

+ (id)menuItemAttributedTitleForColorCounter:(id)arg1;
+ (id)menuItemForImageCounter:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)previewImageForImageCounter:(id)arg1;
- (void)frequentImagePicked:(id)arg1;
- (void)refreshMenuItems:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <MSFrequentImagesControllerDelegate> delegate; // @dynamic delegate;

@end

