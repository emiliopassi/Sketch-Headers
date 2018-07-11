//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MSModelObject, NSColor, NSImage, NSString;
@protocol BCSortable><MSSharedObjectStyling;

@interface MSSharedObjectView : NSView
{
    BOOL _hasShadow;
    BOOL _previewDirty;
    struct MSModelObject *_sharedObject;
    NSString *_label;
    NSColor *_labelColor;
    NSColor *_labelBackgroundColor;
    unsigned long long _borders;
    NSImage *_previewImage;
}

@property(nonatomic) BOOL previewDirty; // @synthesize previewDirty=_previewDirty;
@property(retain, nonatomic) NSImage *previewImage; // @synthesize previewImage=_previewImage;
@property(nonatomic) BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property(nonatomic) unsigned long long borders; // @synthesize borders=_borders;
@property(retain, nonatomic) NSColor *labelBackgroundColor; // @synthesize labelBackgroundColor=_labelBackgroundColor;
@property(retain, nonatomic) NSColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) MSModelObject<BCSortable><MSSharedObjectStyling> *sharedObject; // @synthesize sharedObject=_sharedObject;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawBorder;
- (void)drawBorderFrom:(long long)arg1 to:(long long)arg2;
- (void)drawSharedObject;
- (void)drawLabel;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)updateSharedObjectPreview;
- (void)generatePreviewInBackground;

@end

