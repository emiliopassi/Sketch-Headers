//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSAssetPickerView, NSString;

@protocol MSPresetPickerViewDelegate <NSObject>
- (void)pickerView:(MSAssetPickerView *)arg1 didPickPresetAtIndex:(unsigned long long)arg2;
- (void)pickerView:(MSAssetPickerView *)arg1 removePresetAtIndex:(unsigned long long)arg2;
- (void)addPresetForPickerView:(MSAssetPickerView *)arg1;
- (unsigned long long)numberOfPresetsInPickerView:(MSAssetPickerView *)arg1;

@optional
- (NSString *)pickerView:(MSAssetPickerView *)arg1 tooltipForPresetButtonAtIndex:(unsigned long long)arg2;
- (void)pickerView:(MSAssetPickerView *)arg1 didStopHoverPresetAtIndex:(long long)arg2;
- (void)pickerView:(MSAssetPickerView *)arg1 didHoverPresetAtIndex:(long long)arg2;
- (void)presetPickerFinishedDragging:(MSAssetPickerView *)arg1;
- (id)pickerView:(id)arg1 dragRepresentationForItemAtIndex:(unsigned long long)arg2;
- (BOOL)pickerView:(MSAssetPickerView *)arg1 insertPresetFromDragRepresentation:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)pickerView:(MSAssetPickerView *)arg1 didDragPresetAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (BOOL)pickerView:(MSAssetPickerView *)arg1 shouldShowMenuForItemAtIndex:(unsigned long long)arg2;
- (BOOL)pickerViewSupportsDrop:(MSAssetPickerView *)arg1;
- (BOOL)pickerViewSupportsDrag:(MSAssetPickerView *)arg1 fromIndex:(unsigned long long)arg2;
- (BOOL)shouldShowAddPresetButton:(MSAssetPickerView *)arg1;
- (void)drawContentForCellInPickerView:(MSAssetPickerView *)arg1 withFrame:(BOOL)arg2 atIndex:(unsigned long long)arg3 inRect:(struct CGRect)arg4;
@end

