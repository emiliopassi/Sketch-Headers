//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MSExportFormatNamingTextField, NSArray, NSButton, NSPopUpButton, NSTextField, NSView;

@interface MSExportFormatViewController : NSViewController
{
    double _designedFormatPopUpButtonWidth;
    NSPopUpButton *_formatPopup;
    NSButton *_removeSizeButton;
    NSView *_sizeView;
    MSExportFormatNamingTextField *_suffixTextField;
    NSArray *_exportFormats;
    NSTextField *_scaleField;
}

+ (id)scaleDisplayStringForValue:(double)arg1 suffix:(unsigned short)arg2;
+ (void)initialize;
@property(retain, nonatomic) NSTextField *scaleField; // @synthesize scaleField=_scaleField;
@property(retain, nonatomic) NSArray *exportFormats; // @synthesize exportFormats=_exportFormats;
@property(retain, nonatomic) MSExportFormatNamingTextField *suffixTextField; // @synthesize suffixTextField=_suffixTextField;
@property(retain, nonatomic) NSView *sizeView; // @synthesize sizeView=_sizeView;
@property(retain, nonatomic) NSButton *removeSizeButton; // @synthesize removeSizeButton=_removeSizeButton;
@property(retain, nonatomic) NSPopUpButton *formatPopup; // @synthesize formatPopup=_formatPopup;
- (void).cxx_destruct;
- (double)sizeByRemovingSuffixes:(id)arg1;
- (void)applyEditedScaleFieldValue:(double)arg1 toExportFormat:(id)arg2 scaleType:(long long)arg3 normalSize:(struct CGSize)arg4;
- (void)findSizeOfLayer:(id)arg1 forScaleType:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)commitScaleFieldEditsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)scaleFieldAction:(id)arg1;
- (void)formatPopupAction:(id)arg1;
- (void)removeExportFormat:(id)arg1;
- (id)firstExportFormat;
- (BOOL)exportFormatCanBeScaled;
- (void)prepare;
- (void)viewDidLoad;

@end

