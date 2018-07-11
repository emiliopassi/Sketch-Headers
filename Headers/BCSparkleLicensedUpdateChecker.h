//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface BCSparkleLicensedUpdateChecker : NSObject
{
    BOOL _hasAvailableUpdates;
    unsigned long long _numberOfUnavailableReleases;
    unsigned long long _numberOfUpdatesRequiringRenewal;
    unsigned long long _numberOfUpdatesRequiringHostUpdate;
    unsigned long long _numberOfUpdatesRequiringHostUpdateAndRenewal;
    NSString *_latestUnavailableVersion;
    NSString *_latestUnavailableBuildNumber;
    NSString *_latestUnavailableVersionBeforeRenewing;
    NSString *_latestUnavailableBuildNumberBeforeRenewing;
    NSString *_latestUnavailableVersionBeforeUpdatingMac;
    NSString *_latestUnavailableBuildNumberBeforeUpdatingMac;
    NSString *_latestUnavailableVersionBeforeUpdatingMacAndRenewing;
    NSString *_latestUnavailableBuildNumberBeforeUpdatingMacAndRenewing;
    unsigned long long _indexOfBestUpdate;
    NSDate *_expiryDate;
    NSString *_buildNumber;
}

+ (id)sparkleCheckerWithLicenseExpirationDate:(id)arg1 buildNumber:(id)arg2 appcastResults:(id)arg3;
@property(readonly, nonatomic) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(readonly, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, nonatomic) unsigned long long indexOfBestUpdate; // @synthesize indexOfBestUpdate=_indexOfBestUpdate;
@property(readonly, nonatomic) NSString *latestUnavailableBuildNumberBeforeUpdatingMacAndRenewing; // @synthesize latestUnavailableBuildNumberBeforeUpdatingMacAndRenewing=_latestUnavailableBuildNumberBeforeUpdatingMacAndRenewing;
@property(readonly, nonatomic) NSString *latestUnavailableVersionBeforeUpdatingMacAndRenewing; // @synthesize latestUnavailableVersionBeforeUpdatingMacAndRenewing=_latestUnavailableVersionBeforeUpdatingMacAndRenewing;
@property(readonly, nonatomic) NSString *latestUnavailableBuildNumberBeforeUpdatingMac; // @synthesize latestUnavailableBuildNumberBeforeUpdatingMac=_latestUnavailableBuildNumberBeforeUpdatingMac;
@property(readonly, nonatomic) NSString *latestUnavailableVersionBeforeUpdatingMac; // @synthesize latestUnavailableVersionBeforeUpdatingMac=_latestUnavailableVersionBeforeUpdatingMac;
@property(readonly, nonatomic) NSString *latestUnavailableBuildNumberBeforeRenewing; // @synthesize latestUnavailableBuildNumberBeforeRenewing=_latestUnavailableBuildNumberBeforeRenewing;
@property(readonly, nonatomic) NSString *latestUnavailableVersionBeforeRenewing; // @synthesize latestUnavailableVersionBeforeRenewing=_latestUnavailableVersionBeforeRenewing;
@property(readonly, nonatomic) NSString *latestUnavailableBuildNumber; // @synthesize latestUnavailableBuildNumber=_latestUnavailableBuildNumber;
@property(readonly, nonatomic) NSString *latestUnavailableVersion; // @synthesize latestUnavailableVersion=_latestUnavailableVersion;
@property(nonatomic) unsigned long long numberOfUpdatesRequiringHostUpdateAndRenewal; // @synthesize numberOfUpdatesRequiringHostUpdateAndRenewal=_numberOfUpdatesRequiringHostUpdateAndRenewal;
@property(nonatomic) unsigned long long numberOfUpdatesRequiringHostUpdate; // @synthesize numberOfUpdatesRequiringHostUpdate=_numberOfUpdatesRequiringHostUpdate;
@property(nonatomic) unsigned long long numberOfUpdatesRequiringRenewal; // @synthesize numberOfUpdatesRequiringRenewal=_numberOfUpdatesRequiringRenewal;
@property(readonly, nonatomic) BOOL hasAvailableUpdates; // @synthesize hasAvailableUpdates=_hasAvailableUpdates;
@property(readonly, nonatomic) unsigned long long numberOfUnavailableReleases; // @synthesize numberOfUnavailableReleases=_numberOfUnavailableReleases;
- (void).cxx_destruct;
- (BOOL)isUpdateInstalled:(id)arg1;
- (long long)compareBuildNumber:(id)arg1 to:(id)arg2;
- (id)sparkleShortVersionForItem:(id)arg1;
- (id)sparkleVersionForItem:(id)arg1;
- (id)supportDateForItem:(id)arg1;
- (id)supportDateStringForItem:(id)arg1;
- (void)parseAppcastResults:(id)arg1;
- (BOOL)isUpdateItemSupportedByOSVersion:(id)arg1;
- (BOOL)isUpdateItemSupportedByLicense:(id)arg1;
- (id)initWithLicenseExpirationDate:(id)arg1 buildNumber:(id)arg2;

@end

