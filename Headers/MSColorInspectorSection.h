//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MSAssetPickerHeaderViewDelegate-Protocol.h"
#import "MSPresetPickerViewDelegate-Protocol.h"
#import "NSScrubberDataSource-Protocol.h"
#import "NSScrubberDelegate-Protocol.h"
#import "NSScrubberFlowLayoutDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"

@class MSAssetPickerView, NSArray, NSMapTable, NSString;
@protocol MSColorInspectorSectionDelegate;

@interface MSColorInspectorSection : NSViewController <MSPresetPickerViewDelegate, MSAssetPickerHeaderViewDelegate, NSTouchBarDelegate, NSScrubberDataSource, NSScrubberDelegate, NSScrubberFlowLayoutDelegate>
{
    id <MSColorInspectorSectionDelegate> _delegate;
    NSArray *_styleParts;
    MSAssetPickerView *_globalPresetPicker;
    MSAssetPickerView *_documentPresetPicker;
    NSMapTable *_scrubberToAssets;
}

+ (id)viewsByAddingColorInspectorSeparators:(id)arg1;
+ (void)refreshColorPickerViewHeight:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSMapTable *scrubberToAssets; // @synthesize scrubberToAssets=_scrubberToAssets;
@property(retain, nonatomic) MSAssetPickerView *documentPresetPicker; // @synthesize documentPresetPicker=_documentPresetPicker;
@property(retain, nonatomic) MSAssetPickerView *globalPresetPicker; // @synthesize globalPresetPicker=_globalPresetPicker;
@property(copy, nonatomic) NSArray *styleParts; // @synthesize styleParts=_styleParts;
@property(nonatomic) __weak id <MSColorInspectorSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)moveAssetAtIndex:(unsigned long long)arg1 beforeObjectAtIndex:(unsigned long long)arg2 ForPickerView:(id)arg3;
- (id)indexesOfAsset:(id)arg1 forPickerView:(id)arg2;
- (void)removeAssetAtIndex:(unsigned long long)arg1 forPickerView:(id)arg2;
- (id)assetAtIndex:(unsigned long long)arg1 forPickerView:(id)arg2;
- (void)insertAsset:(id)arg1 atIndex:(unsigned long long)arg2 forPickerView:(id)arg3;
- (void)addAsset:(id)arg1 forPickerView:(id)arg2;
- (unsigned long long)numberOfAssetsForPickerView:(id)arg1;
- (unsigned long long)assetType;
- (void)scrubber:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (struct CGSize)scrubber:(id)arg1 layout:(id)arg2 sizeForItemAtIndex:(long long)arg3;
- (struct CGSize)fittingAssetScrubberLabelItemSizeForTitle:(id)arg1;
- (id)scrubberItemViewForAssetAtIndex:(unsigned long long)arg1 amongAssets:(id)arg2 isLastItemInScrubber:(BOOL)arg3;
- (id)colorAssetCollectionLabelWithTitle:(id)arg1;
- (id)scrubberItemViewWrapping:(id)arg1;
- (id)scrubber:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (id)assetScrubberLabelItemTitleOfKind:(long long)arg1;
- (unsigned long long)firstGlobalAssetScrubberIndexAfterDocumentAssets:(id)arg1;
- (long long)assetScrubberItemKindAtIndex:(long long)arg1;
- (long long)numberOfItemsForScrubber:(id)arg1;
- (id)touchBarCompatibleAssetsForPickerView:(id)arg1;
- (id)makeTouchBarItemForIdentifier:(id)arg1;
- (id)customTouchBarItemIdentifiers;
- (BOOL)shouldShowAddPresetButton:(id)arg1;
- (id)assetPickerViewKeys;
- (id)assetPickerViews;
- (id)viewsWithColorPickerView:(id)arg1 blendingView:(id)arg2 topViewIsEmpty:(BOOL)arg3;
- (void)refreshAction:(id)arg1;
- (void)dealloc;
- (BOOL)pickerView:(id)arg1 didDragPresetAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (BOOL)pickerViewSupportsDrag:(id)arg1 fromIndex:(unsigned long long)arg2;
- (BOOL)pickerViewSupportsDrop:(id)arg1;
- (void)pickerView:(id)arg1 didPickPresetAtIndex:(unsigned long long)arg2;
- (void)pickerView:(id)arg1 removePresetAtIndex:(unsigned long long)arg2;
- (void)addPresetForPickerView:(id)arg1;
- (void)drawContentForCellInPickerView:(id)arg1 withFrame:(BOOL)arg2 atIndex:(unsigned long long)arg3 inRect:(struct CGRect)arg4;
- (unsigned long long)numberOfPresetsInPickerView:(id)arg1;
- (void)colorPickerChangedTo:(id)arg1;
- (void)popoverWillClose;
- (void)validate;
- (BOOL)isEnabled;
- (long long)fillType;
- (void)reloadPresetPicker:(id)arg1;
- (void)reloadPresetPicker;
- (id)assetCollectionForPresetPicker:(id)arg1;
- (void)assetHeaderViewDidClick:(id)arg1;
- (double)minimumHeight;
- (id)scrollViewWithStackedViews:(id)arg1;
- (id)stackViewsInVerticalScrollView:(id)arg1 frame:(struct CGRect)arg2;
- (void)didMoveThroughHistory:(id)arg1;
- (BOOL)hasPresetPickers;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

