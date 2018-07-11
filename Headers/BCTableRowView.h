//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSObject, NSTableView;
@protocol BCOutlineViewNode, BCTableRowViewDelegate;

@interface BCTableRowView : NSTableRowView
{
    NSTableView *_parent;
    NSObject<BCOutlineViewNode> *_node;
    NSObject<BCTableRowViewDelegate> *_delegate;
    unsigned long long _expansionState;
}

+ (void)initialize;
@property(nonatomic) unsigned long long expansionState; // @synthesize expansionState=_expansionState;
@property(nonatomic) __weak NSObject<BCTableRowViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<BCOutlineViewNode> *node; // @synthesize node=_node;
@property(nonatomic) __weak NSTableView *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (void)drawDraggingDestinationFeedbackInRect:(struct CGRect)arg1;
- (void)drawHighlight;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (void)fillBackgroundInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) unsigned long long displayType;
@property(readonly, nonatomic, getter=isHighlit) BOOL hightlighted;
@property(readonly, nonatomic, getter=isNodeExpanded) BOOL nodeExpanded;
@property(readonly, nonatomic, getter=isNodeSelected) BOOL nodeSelected;
@property(readonly, nonatomic) BOOL isOdd;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

