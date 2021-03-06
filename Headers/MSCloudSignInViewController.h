//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "ASWebAuthenticationPresentationContextProviding-Protocol.h"

@class MSLinkButton, NSButton, NSError, NSImage, NSPopUpButton, NSSecureTextField, NSString, NSTextField, SCKAPIEnvironment;
@protocol MSRegistrationWindowContentDelegate;

@interface MSCloudSignInViewController : NSViewController <ASWebAuthenticationPresentationContextProviding>
{
    BOOL _wantsLicense;
    BOOL _allowCancellation;
    BOOL _isSkippable;
    BOOL _didFinish;
    BOOL _isLoading;
    id <MSRegistrationWindowContentDelegate> _delegate;
    NSString *_email;
    NSString *_password;
    NSTextField *_titleLabel;
    NSPopUpButton *_environmentPopUpButton;
    MSLinkButton *_forgotPasswordButton;
    NSTextField *_emailField;
    NSSecureTextField *_passwordField;
    NSButton *_actionButton;
    NSButton *_remoteActionButton;
    NSButton *_ssoButton;
    NSButton *_cancelButton;
    NSTextField *_statusLabel;
    NSError *_error;
}

+ (id)makeSuccesViewForTextField:(id)arg1;
+ (id)storyboardIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSTextField *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSButton *ssoButton; // @synthesize ssoButton=_ssoButton;
@property(retain, nonatomic) NSButton *remoteActionButton; // @synthesize remoteActionButton=_remoteActionButton;
@property(retain, nonatomic) NSButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSSecureTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain, nonatomic) NSTextField *emailField; // @synthesize emailField=_emailField;
@property(retain, nonatomic) MSLinkButton *forgotPasswordButton; // @synthesize forgotPasswordButton=_forgotPasswordButton;
@property(retain, nonatomic) NSPopUpButton *environmentPopUpButton; // @synthesize environmentPopUpButton=_environmentPopUpButton;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) BOOL didFinish; // @synthesize didFinish=_didFinish;
@property(nonatomic) BOOL isSkippable; // @synthesize isSkippable=_isSkippable;
@property(nonatomic) BOOL allowCancellation; // @synthesize allowCancellation=_allowCancellation;
@property(nonatomic) BOOL wantsLicense; // @synthesize wantsLicense=_wantsLicense;
@property(nonatomic) __weak id <MSRegistrationWindowContentDelegate> delegate; // @synthesize delegate=_delegate;
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;
- (id)willPresentLicensingError:(id)arg1;
- (id)willPresentError:(id)arg1;
- (void)changeEnvironment:(id)arg1;
@property(retain, nonatomic) SCKAPIEnvironment *environment;
- (void)updateEnvironmentMenuItems;
- (void)cancel:(id)arg1;
- (void)confirmRegistration;
- (void)updateCancelButtonTitle;
- (void)finishSignIn;
- (void)obtainLicenseWithAuthentication:(id)arg1;
- (void)processSignInResult:(id)arg1 error:(id)arg2;
- (void)signInWithSSO:(id)arg1;
- (void)signIn:(id)arg1;
- (void)resetPassword:(id)arg1;
- (void)visitCloudDocumentation:(id)arg1;
- (void)visitStore:(id)arg1;
- (void)signUp:(id)arg1;
- (BOOL)shouldShowSSO;
- (void)viewWillAppear;
- (void)registrationWindowDidClickHeaderLink:(id)arg1;
@property(nonatomic, readonly) NSImage *headerImage;
@property(nonatomic, readonly) NSImage *headerBackgroundImage;
@property(nonatomic, readonly) NSString *headerLinkTitle;
@property(nonatomic, readonly) NSString *headerDescription;
@property(nonatomic, readonly) NSString *headerTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

