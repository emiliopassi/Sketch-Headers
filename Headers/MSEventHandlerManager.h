//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSEventHandler, MSNormalEventHandler;

@interface MSEventHandlerManager : NSObject
{
    id <MSEventHandlerManagerDelegate> _delegate;
    MSEventHandler *_currentHandler;
    MSNormalEventHandler *_normalHandler;
    long long _lastMouseDownClickCount;
    unsigned long long _lastEventType;
}

@property(nonatomic) unsigned long long lastEventType; // @synthesize lastEventType=_lastEventType;
@property(nonatomic) long long lastMouseDownClickCount; // @synthesize lastMouseDownClickCount=_lastMouseDownClickCount;
@property(retain, nonatomic) MSNormalEventHandler *normalHandler; // @synthesize normalHandler=_normalHandler;
@property(retain, nonatomic) MSEventHandler *currentHandler; // @synthesize currentHandler=_currentHandler;
@property(nonatomic) __weak id <MSEventHandlerManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)recordEvent:(id)arg1;
- (void)sendMouseMovedEvent:(id)arg1;
- (void)sendMouseUpEvent:(id)arg1;
- (void)sendMouseDraggedEvent:(id)arg1;
- (void)sendMouseDownEvent:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 cache:(id)arg2;
- (id)switchToEventHandlerKey:(id)arg1;
- (id)toggleHandlerKey:(id)arg1;
- (id)handlerForKey:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

