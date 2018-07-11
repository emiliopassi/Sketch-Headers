//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSPopoverAction.h"

#import "MSCloudShareUploadControllerDelegate-Protocol.h"

@class MSCloudShareUploadController, NSArray, NSString, NSViewController, SCKAPIOperation;
@protocol MSCloudExportableDocument;

@interface MSCloudAction : MSPopoverAction <MSCloudShareUploadControllerDelegate>
{
    NSViewController *_popoverViewController;
    NSArray *_progressImages;
    MSCloudShareUploadController *_upload;
    SCKAPIOperation *_refreshOperation;
}

+ (void)addRemoteLibraryWithURL:(id)arg1 parameters:(id)arg2;
+ (void)openCloudUploadURL:(id)arg1 parameters:(id)arg2;
+ (Class)popoverClass;
+ (BOOL)cloudEnabled;
+ (void)attemptRecoveryFromCloudError:(id)arg1 optionIndex:(unsigned long long)arg2;
+ (id)cloudError:(id)arg1 addingRecoveryOptionsWithAttempter:(id)arg2;
+ (BOOL)isErrorRecoverable:(id)arg1;
@property(retain, nonatomic) SCKAPIOperation *refreshOperation; // @synthesize refreshOperation=_refreshOperation;
@property(retain, nonatomic) MSCloudShareUploadController *upload; // @synthesize upload=_upload;
@property(retain, nonatomic) NSViewController *popoverViewController; // @synthesize popoverViewController=_popoverViewController;
- (void).cxx_destruct;
- (void)setCloudPlatform:(id)arg1;
- (BOOL)validate;
- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
@property(readonly, nonatomic) NSArray *progressImages; // @synthesize progressImages=_progressImages;
- (void)updateProgressImage;
- (id)image;
- (id)label;
- (id)tooltip;
- (BOOL)showInToolbar;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (id)willPresentError:(id)arg1;
- (void)cloudShareController:(id)arg1 didChangeProgress:(id)arg2;
- (void)cloudShareController:(id)arg1 uploadDidFailWithError:(id)arg2;
- (void)cloudShareController:(id)arg1 didUploadShare:(id)arg2;
- (void)refreshShareWithHandler:(CDUnknownBlockType)arg1;
- (void)startUploadUpdating:(id)arg1;
@property(readonly, nonatomic) id <MSCloudExportableDocument> exportedDocument;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

