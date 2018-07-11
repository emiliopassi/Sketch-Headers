//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BCPasteboardMock : NSObject
{
    NSString *_name;
    NSMutableDictionary *_storage;
}

+ (id)pasteboardWithName:(id)arg1;
+ (id)generalPasteboard;
@property(retain, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)clearContents;
@property(readonly) long long changeCount;
- (BOOL)writeObjects:(id)arg1;
- (id)types;
- (id)availableTypeFromArray:(id)arg1;
- (id)propertyListForType:(id)arg1;
- (BOOL)setPropertyList:(id)arg1 forType:(id)arg2;
- (id)stringForType:(id)arg1;
- (BOOL)setString:(id)arg1 forType:(id)arg2;
- (id)dataForType:(id)arg1;
- (void)setData:(id)arg1 forType:(id)arg2;
- (void)addTypes:(id)arg1 owner:(id)arg2;
- (void)declareTypes:(id)arg1 owner:(id)arg2;
- (void)addDataForTypes:(id)arg1 fromOwner:(id)arg2;
- (id)init;

@end

