//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CHWindowController.h"

#import "WKNavigationDelegate-Protocol.h"

@class NSButton, NSString, NSURL, WKWebView;

@interface MSNewsTriggerWindowController : CHWindowController <WKNavigationDelegate>
{
    BOOL _finishedLoadingData;
    NSURL *_url;
    NSString *_newsID;
    WKWebView *_webView;
    NSButton *_dontShowAgainButton;
}

@property(nonatomic) BOOL finishedLoadingData; // @synthesize finishedLoadingData=_finishedLoadingData;
@property(nonatomic) NSButton *dontShowAgainButton; // @synthesize dontShowAgainButton=_dontShowAgainButton;
@property(nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *newsID; // @synthesize newsID=_newsID;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)dontShowNewsWithIDAnymore:(id)arg1;
- (void)close:(id)arg1;
- (void)windowDidLoad;
- (id)initWithURL:(id)arg1 newsID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

