//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

@class MSIntegratedStepper, NSTextField;
@protocol MSIncrementDecrementDelegate, MSUpDownProtocol;

@interface MSUpDownController : NSResponder
{
    BOOL didChangeTextDuringEditing;
    id <MSIncrementDecrementDelegate> _incrementDecrementDelegate;
    NSTextField<MSUpDownProtocol> *_textField;
    MSIntegratedStepper *_stepper;
}

+ (void)initialize;
@property(retain, nonatomic) MSIntegratedStepper *stepper; // @synthesize stepper=_stepper;
@property(nonatomic) __weak NSTextField<MSUpDownProtocol> *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <MSIncrementDecrementDelegate> incrementDecrementDelegate; // @synthesize incrementDecrementDelegate=_incrementDecrementDelegate;
- (void).cxx_destruct;
- (BOOL)isEditable;
- (BOOL)isEnabled;
- (BOOL)isEditing;
- (double)floatValue;
- (double)incrementValueAccountingForModifierFlags;
- (double)adjustValueForMinimum:(double)arg1;
- (void)incrementBy:(double)arg1;
- (void)decrement;
- (double)adjustValueForMaximum:(double)arg1;
- (void)increment;
- (double)incrementValue;
- (void)keyUp;
- (void)setFloatValueAndNotifyBindings:(double)arg1;
- (void)cancelOperation:(id)arg1;
- (BOOL)cancelTextEditingForInvalidReplacementString:(id)arg1;
- (BOOL)doCommandBySelector:(SEL)arg1;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing;
- (BOOL)becomeFirstResponder;
- (BOOL)eventIsInsideView:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)hideStepper;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)makeStepper;
- (id)initWithTextField:(id)arg1 createStepper:(BOOL)arg2;

@end

