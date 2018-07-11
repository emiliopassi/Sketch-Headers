//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CHSheetController.h"

@class NSSegmentedControl, NSView, NSViewController;

@interface MSManageSharedObjectSheet : CHSheetController
{
    NSSegmentedControl *_tabSegmentControl;
    NSView *_containerView;
    NSViewController *_contentDrawViewController;
}

+ (void)setTabIndex:(unsigned long long)arg1;
+ (unsigned long long)tabIndex;
@property(retain, nonatomic) NSViewController *contentDrawViewController; // @synthesize contentDrawViewController=_contentDrawViewController;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSSegmentedControl *tabSegmentControl; // @synthesize tabSegmentControl=_tabSegmentControl;
- (void).cxx_destruct;
- (void)segmentedAction:(id)arg1;
- (id)childControllerClasses;
- (void)awakeFromNib;

@end

