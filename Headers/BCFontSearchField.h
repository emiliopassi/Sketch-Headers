//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSearchField.h>

#import "NSTextViewDelegate-Protocol.h"

@class NSString, NSTableView;

@interface BCFontSearchField : NSSearchField <NSTextViewDelegate>
{
    NSTableView *_searchResults;
}

@property(nonatomic) __weak NSTableView *searchResults; // @synthesize searchResults=_searchResults;
- (void).cxx_destruct;
- (void)moveFocusToTableView;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

