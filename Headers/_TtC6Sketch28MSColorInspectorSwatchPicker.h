//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSColorInspectorSection.h"

@class MSColor, MSInspectorPopoverButton, MSSwatch;
@protocol _TtP6Sketch22MSSwatchPickerDelegate_;

@interface _TtC6Sketch28MSColorInspectorSwatchPicker : MSColorInspectorSection
{
    // Error parsing type: , name: document
    // Error parsing type: , name: delegate
    // Error parsing type: , name: color
    // Error parsing type: , name: popoverButton
    // Error parsing type: , name: $__lazy_storage_$_assetPickerController
}

+ (id)presetPickerVisibilityDefaultsKey;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)showPicker:(id)arg1;
- (id)scrollableViews;
- (id)assetPickerDataSources;
- (unsigned long long)assetType;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocument:(id)arg1;
@property(nonatomic, retain) MSInspectorPopoverButton *popoverButton; // @synthesize popoverButton;
@property(nonatomic, readonly) MSSwatch *swatch;
@property(nonatomic, retain) MSColor *color; // @synthesize color;
@property(nonatomic, retain) id <_TtP6Sketch22MSSwatchPickerDelegate_> delegate; // @synthesize delegate;

@end
