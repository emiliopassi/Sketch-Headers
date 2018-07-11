//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSTextField;

@interface MSFlashViewController : NSViewController
{
    NSTextField *_message;
    NSButton *_helpButton;
    NSButton *_closeButton;
    CDUnknownBlockType _helpBlock;
    CDUnknownBlockType _closeBlock;
}

+ (id)flashViewControllerWithMessage:(id)arg1 closeBlock:(CDUnknownBlockType)arg2 helpBlock:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType helpBlock; // @synthesize helpBlock=_helpBlock;
@property(retain, nonatomic) NSButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(retain, nonatomic) NSTextField *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)helpPressed:(id)arg1;
- (void)closeFlash:(id)arg1;
- (id)init;

@end

