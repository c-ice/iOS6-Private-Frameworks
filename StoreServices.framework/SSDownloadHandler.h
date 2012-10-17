/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, SSXPCConnection;

@interface SSDownloadHandler : NSObject
{
    SSXPCConnection *_controlConnection;
    id <SSDownloadHandlerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_downloadPhasesToIgnore;
    long long _handlerID;
    SSXPCConnection *_observerConnection;
    BOOL _sessionsNeedPowerAssertion;
    BOOL _sessionsShouldBlockOtherDownloads;
}

- (void)_setValue:(id)arg1 forProperty:(const char *)arg2;
- (BOOL)_sendSessionPauseWithMessage:(id)arg1;
- (BOOL)_sendSessionHandleWithMessage:(id)arg1;
- (BOOL)_sendSessionCancelWithMessage:(id)arg1;
- (void)_sendDisconnectMessage;
- (BOOL)_sendAuthenticationSessionWithMessage:(id)arg1;
- (id)_newSessionWithMessage:(id)arg1;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (id)_controlConnection;
- (void)_connectToDaemon;
- (id)description;
@property BOOL sessionsShouldBlockOtherDownloads;
@property BOOL sessionsNeedPowerAssertion;
@property(copy) NSArray *downloadPhasesToIgnore;
@property id <SSDownloadHandlerDelegate> delegate;
- (void)resetDisavowedSessions;
@property(readonly) long long handlerIdentifier;
- (void)dealloc;
- (id)init;

@end

