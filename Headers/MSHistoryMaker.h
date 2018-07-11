//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDocument, MSHistory, NSString;

@interface MSHistoryMaker : NSObject
{
    BOOL _historyIsCoalescing;
    BOOL _isMovingThroughHistory;
    BOOL _isMakingHistory;
    MSDocument *_document;
    MSHistory *_history;
    NSString *_historyMomentTitle;
    long long _deferMakingHistoryCounter;
}

@property long long deferMakingHistoryCounter; // @synthesize deferMakingHistoryCounter=_deferMakingHistoryCounter;
@property(nonatomic) BOOL isMakingHistory; // @synthesize isMakingHistory=_isMakingHistory;
@property(nonatomic) BOOL isMovingThroughHistory; // @synthesize isMovingThroughHistory=_isMovingThroughHistory;
@property(nonatomic) BOOL historyIsCoalescing; // @synthesize historyIsCoalescing=_historyIsCoalescing;
@property(retain, nonatomic) NSString *historyMomentTitle; // @synthesize historyMomentTitle=_historyMomentTitle;
@property(readonly, nonatomic) MSHistory *history; // @synthesize history=_history;
@property(readonly, nonatomic) __weak MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (BOOL)ignoreDocumentChangesInBlock:(CDUnknownBlockType)arg1;
- (void)moveThroughHistoryBackInTime:(BOOL)arg1;
- (BOOL)canMoveThroughHistoryBackInTime:(BOOL)arg1;
- (void)makeHistoryIfNecessaryUsingTransientMoment:(BOOL)arg1;
- (void)deferMakingHistoryInBlock:(CDUnknownBlockType)arg1;
- (void)makeTransientMomentInHistoryIfNecessary;
- (void)makeHistoryIfNecessary;
- (void)commitTransientMomentIfNecessary;
- (void)coalesceHistoryInBlock:(CDUnknownBlockType)arg1;
- (void)finishCoalescingHistory;
- (void)startCoalescingHistory;
- (void)registerHistoryMomentTitle:(id)arg1;
- (id)init;
- (id)initWithDocument:(id)arg1;

@end

