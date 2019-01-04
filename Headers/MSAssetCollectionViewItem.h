//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

#import "NSMenuDelegate-Protocol.h"

@class NSArray, NSString, NSTextField, NSView;
@protocol MSAsset, MSAssetCollectionViewItemDelegate;

@interface MSAssetCollectionViewItem : NSCollectionViewItem <NSMenuDelegate>
{
    BOOL _assetHighlighted;
    id <MSAssetCollectionViewItemDelegate> _delegate;
    NSArray *_alternativeCollections;
    id <MSAsset> _asset;
    NSString *_assetName;
    NSArray *_currentSpecialMenuItems;
    NSView *_previewView;
    NSTextField *_nameField;
}

+ (id)drawAssetViewBackgroundReturningContentPathInBounds:(struct CGRect)arg1 highlighted:(BOOL)arg2;
@property(retain, nonatomic) NSTextField *nameField; // @synthesize nameField=_nameField;
@property(retain, nonatomic) NSView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) NSArray *currentSpecialMenuItems; // @synthesize currentSpecialMenuItems=_currentSpecialMenuItems;
@property(retain, nonatomic) NSString *assetName; // @synthesize assetName=_assetName;
@property(retain, nonatomic) id <MSAsset> asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSArray *alternativeCollections; // @synthesize alternativeCollections=_alternativeCollections;
@property(nonatomic) BOOL assetHighlighted; // @synthesize assetHighlighted=_assetHighlighted;
@property(nonatomic) __weak id <MSAssetCollectionViewItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commitNameEditing:(id)arg1;
- (void)delete:(id)arg1;
- (void)rename:(id)arg1;
- (void)moveToAssetCollection:(id)arg1;
- (void)copyToAssetCollection:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)endEditingMode;
- (void)beginNameEditingMode;
- (void)updateUI;
- (id)effectiveAssetName;
- (id)defaultAssetName;
- (void)drawAssetView:(id)arg1 dirtyRect:(struct CGRect)arg2;
- (void)setSelected:(BOOL)arg1;
- (id)previewColorSpace;
- (void)viewDidLoad;
- (void)setAsset:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
