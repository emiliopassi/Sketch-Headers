//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCKShareUploadDataSource-Protocol.h"

@class MSWebExporter, NSProgress, NSString, NSURL, SCKShare, SCKShareUploadOperation;
@protocol MSCloudExportableDocument, MSCloudShareUploadControllerDelegate;

@interface MSCloudShareUploadController : NSObject <SCKShareUploadDataSource>
{
    BOOL _cancelled;
    id <MSCloudShareUploadControllerDelegate> _delegate;
    SCKShare *_existingShare;
    id <MSCloudExportableDocument> _document;
    NSURL *_localURL;
    NSString *_name;
    MSWebExporter *_webExporter;
    SCKShareUploadOperation *_operation;
}

@property(retain, nonatomic) SCKShareUploadOperation *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) MSWebExporter *webExporter; // @synthesize webExporter=_webExporter;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURL *localURL; // @synthesize localURL=_localURL;
@property(nonatomic) __weak id <MSCloudExportableDocument> document; // @synthesize document=_document;
@property(readonly, nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) SCKShare *existingShare; // @synthesize existingShare=_existingShare;
@property(nonatomic) __weak id <MSCloudShareUploadControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shareUploadOperation:(id)arg1 exportDocumentWithHandler:(CDUnknownBlockType)arg2;
- (void)shareUploadOperation:(id)arg1 willStartUploadingShare:(id)arg2;
- (id)shareUploadOperation:(id)arg1 fileURLForItemWithHash:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cancel;
- (id)loadManifest;
- (void)createShare;
- (void)startUpload;
@property(readonly, nonatomic) NSProgress *progress;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

