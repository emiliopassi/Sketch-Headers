//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDocumentAction.h"

@class MSShareableObjectUpdater;

@interface MSBaseSharedObjectAction : MSDocumentAction
{
    MSShareableObjectUpdater *_updater;
}

- (void).cxx_destruct;
- (void)doPerformAction:(id)arg1;
@property(readonly, nonatomic) BOOL needsRenameAfterAction;
- (void)performSharedObjectAction;
- (long long)validationStatus;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)hasDynamicTitle;
@property(readonly, nonatomic) MSShareableObjectUpdater *updater; // @synthesize updater=_updater;

@end

