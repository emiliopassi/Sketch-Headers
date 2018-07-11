//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSCloudPreferencesViewController.h"

#import "MSCloudLoginWindowControllerDelegate-Protocol.h"

@class NSButton, NSProgressIndicator, NSString, NSTextField;

@interface MSCloudPreferencesIntroViewController : MSCloudPreferencesViewController <MSCloudLoginWindowControllerDelegate>
{
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
    NSButton *_learnMoreButton;
    NSProgressIndicator *_progressIndicator;
    NSButton *_loginButton;
}

@property(retain, nonatomic) NSButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)cloudLoginControllerDidSignIn:(id)arg1;
- (void)cloudLoginControllerDidCancel:(id)arg1;
- (void)cloudLoginControllerDidOpenBrowser:(id)arg1;
- (void)cloudEnvironmentDidChangeNotification:(id)arg1;
- (void)updateTitleLabelValue;
- (void)learnMore:(id)arg1;
- (void)dismissLoginWindowController:(id)arg1;
- (void)login:(id)arg1;
- (void)loginToBrowser:(id)arg1;
- (void)signup:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

