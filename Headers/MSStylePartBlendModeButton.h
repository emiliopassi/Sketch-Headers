//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorButton.h"

@class NSArray, NSMenu, NSSet;
@protocol MSStylePartBlendModeButtonDelegate;

@interface MSStylePartBlendModeButton : MSInspectorButton
{
    NSArray *_styleParts;
    id <MSStylePartBlendModeButtonDelegate> _delegate;
    NSSet *_blendModes;
    NSMenu *_blendModeMenu;
    NSMenu *_blendModeMainMenu;
}

+ (id)toolTipForBlendModes:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMenu *blendModeMainMenu; // @synthesize blendModeMainMenu=_blendModeMainMenu;
@property(retain, nonatomic) NSMenu *blendModeMenu; // @synthesize blendModeMenu=_blendModeMenu;
@property(retain, nonatomic) NSSet *blendModes; // @synthesize blendModes=_blendModes;
@property(nonatomic) __weak id <MSStylePartBlendModeButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *styleParts; // @synthesize styleParts=_styleParts;
- (id)swatchForColor:(id)arg1;
- (id)uniqueColorsInShadowStyleParts:(id)arg1;
- (id)uniqueFillTypesInStyleParts:(id)arg1;
- (id)menuItemTitleForStylePart:(id)arg1;
- (id)stylePartsForMenuItem:(id)arg1;
- (void)updateStylePartsMenuState;
- (id)_buildBlendModeMenu;
- (BOOL)validateMenuItem:(id)arg1;
- (void)changeBlendMode:(id)arg1;
- (void)showBlendModeMenu:(id)arg1;
- (void)updateButtonState;
- (void)awakeFromNib;

@end
