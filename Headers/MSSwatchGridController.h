//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MSColor, MSInspectorPopUpButton, NSCollectionView, NSView;
@protocol MSSwatchGridControllerDelegate;

@interface MSSwatchGridController : NSViewController
{
    // Error parsing type: , name: document
    // Error parsing type: , name: delegate
    // Error parsing type: , name: selectedSwatchColor
    // Error parsing type: , name: librariesButton
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: emptyView
    // Error parsing type: , name: $__lazy_storage_$_documentViewItem
    // Error parsing type: , name: foreignLibraryViewItems
    // Error parsing type: , name: selectedLibraryViewItem
    // Error parsing type: , name: componentTree
    // Error parsing type: , name: sections
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)refreshIfNecessary:(id)arg1;
- (void)onDoubleClick:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocument:(id)arg1;
@property(nonatomic, retain) NSView *emptyView; // @synthesize emptyView;
@property(nonatomic, retain) NSCollectionView *collectionView; // @synthesize collectionView;
@property(nonatomic) __weak MSInspectorPopUpButton *librariesButton; // @synthesize librariesButton;
@property(nonatomic) __weak MSColor *selectedSwatchColor; // @synthesize selectedSwatchColor;
@property(nonatomic) __weak id <MSSwatchGridControllerDelegate> delegate; // @synthesize delegate;

@end

