//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSPopUpButtonCell.h>

@class NSImage;

@interface MSPopUpButtonTextAndRightEdgeImageCell : NSPopUpButtonCell
{
    NSImage *_rightEdgeImage;
}

@property(retain, nonatomic) NSImage *rightEdgeImage; // @synthesize rightEdgeImage=_rightEdgeImage;
- (void).cxx_destruct;
- (void)drawImageWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)attributedTitle;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;

@end
