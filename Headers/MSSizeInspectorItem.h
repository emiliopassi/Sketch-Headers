//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSBaseSizeInspectorItem.h"

@class NSButton;

@interface MSSizeInspectorItem : MSBaseSizeInspectorItem
{
    NSButton *_flipHorizontalButton;
    NSButton *_flipVerticalButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSButton *flipVerticalButton; // @synthesize flipVerticalButton=_flipVerticalButton;
@property(retain, nonatomic) NSButton *flipHorizontalButton; // @synthesize flipHorizontalButton=_flipHorizontalButton;
- (void)updateButtonState:(id)arg1;
- (void)refreshIfNecessary:(id)arg1;
- (void)updateUI;
- (void)updateDisplayedValues;

@end

