//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSMultipleColorStylePartInspectorViewController.h"

#import "BCPopoverDelegate-Protocol.h"

@class BCPopover, NSString;

@interface MSMultipleFillInspectorViewController : MSMultipleColorStylePartInspectorViewController <BCPopoverDelegate>
{
    BOOL _isDisplayingTint;
    BCPopover *_popover;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) BOOL isDisplayingTint; // @synthesize isDisplayingTint=_isDisplayingTint;
- (void)popoverWillClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (id)menuTitlePaste;
- (id)menuTitleCopy;
- (id)createInspectorForStyleParts:(id)arg1;
- (Class)stylePartInspectorClass;
- (unsigned long long)stylePartType;
- (void)dismissViewController:(id)arg1;
- (unsigned long long)traitsForAvancedOptions;
- (long long)advancedOptionsButtonState;
- (void)viewWillDisappear;
- (unsigned long long)supportedActionsForLayers:(id)arg1;
- (id)learnMoreButtonTooltip;
- (id)disabledStylePartsButtonTooltip;
- (id)advancedOptionsButtonTooltip;
- (id)addStylePartButonTooltip;
- (id)title;
- (long long)learnMoreButtonState;
- (long long)addStylePartButtonState;
- (void)prepare;
- (void)learnMoreButtonAction:(id)arg1;
- (void)advancedOptionsButtonAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

