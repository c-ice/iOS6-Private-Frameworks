/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NSURL, RUIPage, UIAlertView;

@interface RUIObjectModel : NSObject
{
    NSString *_name;
    NSURL *_sourceURL;
    NSURL *_scriptURL;
    NSString *_inlineScript;
    NSString *_validationFunction;
    NSMutableArray *_defaultPages;
    NSMutableDictionary *_namedPages;
    NSMutableArray *_displayedPages;
    int _currentPage;
    id <RUIObjectModelDelegate> _delegate;
    struct OpaqueJSContext *_ctx;
    NSDictionary *_alert;
    NSDictionary *_clientInfo;
    NSDictionary *_serverInfo;
    int _refreshDelay;
    NSString *_refreshURL;
    NSTimer *_refreshTimer;
    int _nextButtonStyle;
    UIAlertView *_confirmationAlert;
    UIAlertView *_secondConfirmationAlert;
    NSDictionary *_confirmationAttributes;
    NSString *_confirmationURLString;
    NSString *_confirmationButtonName;
}

+ (id)objectModelForXMLNamed:(id)arg1;
@property(nonatomic) int nextButtonStyle; // @synthesize nextButtonStyle=_nextButtonStyle;
@property(retain, nonatomic) NSString *refreshURL; // @synthesize refreshURL=_refreshURL;
@property(nonatomic) int refreshDelay; // @synthesize refreshDelay=_refreshDelay;
@property(retain, nonatomic) NSDictionary *serverInfo; // @synthesize serverInfo=_serverInfo;
@property(retain, nonatomic) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) NSDictionary *alert; // @synthesize alert=_alert;
@property(retain, nonatomic) NSString *validationFunction; // @synthesize validationFunction=_validationFunction;
@property(retain, nonatomic) NSString *inlineScript; // @synthesize inlineScript=_inlineScript;
@property(retain, nonatomic) NSURL *scriptURL; // @synthesize scriptURL=_scriptURL;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, nonatomic) NSDictionary *namedPages; // @synthesize namedPages=_namedPages;
@property(readonly, nonatomic) NSArray *defaultPages; // @synthesize defaultPages=_defaultPages;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (BOOL)RUIPage:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;
- (void)RUIPage:(id)arg1 toggledEditing:(BOOL)arg2;
- (void)RUIPage:(id)arg1 pressedNavBarButton:(id)arg2;
- (void)_nextPage;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)tableViewOMDidChange:(id)arg1;
- (BOOL)tableViewOM:(id)arg1 deleteRowAtIndexPath:(id)arg2;
- (void)tableViewOM:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3;
- (void)tableViewOM:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)remoteUIWebViewControllerDonePressed:(id)arg1;
- (id)_pageContainingTableView:(id)arg1;
- (void)_handleButtonPressConfirmed:(id)arg1 attributes:(id)arg2;
- (void)_handleButtonPress:(id)arg1 attributes:(id)arg2;
- (void)_handleLinkPressConfirmed:(id)arg1 attributes:(id)arg2;
- (void)_handleLinkPress:(id)arg1 attributes:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)_cleanupConfirmation;
- (void)_presentSecondConfirmationWithAttributes:(id)arg1;
- (void)_presentConfirmationWithAttributes:(id)arg1;
- (BOOL)hasSecondConfirmationAttributes:(id)arg1;
- (BOOL)hasConfirmationAttributes:(id)arg1;
- (id)stringForAttributeName:(id)arg1 withAttributes:(id)arg2;
- (BOOL)hasAttributeOrAttributeFunctionNamed:(id)arg1 withAttributes:(id)arg2;
- (id)relativeURLWithString:(id)arg1;
- (id)rowForFormField:(id)arg1;
- (id)alertView;
- (void)setPages:(id)arg1;
@property(readonly, nonatomic) NSArray *allPages;
@property(readonly, nonatomic) NSArray *pages;
@property(readonly, nonatomic) RUIPage *visiblePage;
@property(readonly, nonatomic) NSArray *displayedPages;
- (id)postbackDictionary;
- (void)populatePostbackDictionary:(id)arg1;
- (id)postbackData;
- (BOOL)goBack;
- (void)back:(id)arg1;
- (id)newNavigationControllerForPresentation;
- (void)presentInParentViewController:(id)arg1 animated:(BOOL)arg2;
- (id)_firstPageForPresentation;
- (void)refreshTimeout;
- (void)_populatePageNavItem:(id)arg1 withNextButton:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)_cleanupRefreshTimer;
- (id)init;
- (void)setJSGlobalContext:(struct OpaqueJSContext *)arg1;
- (void)runScript;
- (id)invokeStringFunction:(id)arg1;
- (BOOL)validateWithFunction:(id)arg1;
- (BOOL)prepareScriptContext;

@end

