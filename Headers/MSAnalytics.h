//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCFoundation/BCSingleton.h>

#import "MSActionObserver-Protocol.h"

@class MSGoogleAnalyticsWrapper, NSString, NSTimer;

@interface MSAnalytics : BCSingleton <MSActionObserver>
{
    BOOL _isEnabled;
    NSTimer *_hourlyTimer;
    NSTimer *_dailyTimer;
    NSTimer *_weeklyTimer;
    NSTimer *_monthlyTimer;
    MSGoogleAnalyticsWrapper *_googleAnalytics;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSGoogleAnalyticsWrapper *googleAnalytics; // @synthesize googleAnalytics=_googleAnalytics;
@property(retain, nonatomic) NSTimer *monthlyTimer; // @synthesize monthlyTimer=_monthlyTimer;
@property(retain, nonatomic) NSTimer *weeklyTimer; // @synthesize weeklyTimer=_weeklyTimer;
@property(retain, nonatomic) NSTimer *dailyTimer; // @synthesize dailyTimer=_dailyTimer;
@property(retain, nonatomic) NSTimer *hourlyTimer; // @synthesize hourlyTimer=_hourlyTimer;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
- (void)actionController:(id)arg1 didInstantActionWithID:(id)arg2 context:(id)arg3;
- (void)actionController:(id)arg1 didFinishActionWithID:(id)arg2 context:(id)arg3;
- (void)actionController:(id)arg1 willBeginActionWithID:(id)arg2 context:(id)arg3;
- (void)trackEvent:(id)arg1 withInterval:(long long)arg2 conditional:(CDUnknownBlockType)arg3;
- (void)trackEvent:(id)arg1 withValue:(id)arg2;
- (void)trackScreenWithName:(id)arg1;
- (void)stopTracking;
- (void)sendAppInfo;
- (void)startTracking;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

