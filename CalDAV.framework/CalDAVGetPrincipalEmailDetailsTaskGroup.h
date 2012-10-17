/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVTaskGroup.h"

#import "CoreDAVTaskDelegate-Protocol.h"

@class CalDAVPrincipalEmailDetailsResult, NSSet, NSString, NSURL;

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>
{
    CalDAVPrincipalEmailDetailsResult *_principalResult;
    NSURL *_principalURL;
}

@property(retain) NSURL *principalURL; // @synthesize principalURL=_principalURL;
@property(retain) CalDAVPrincipalEmailDetailsResult *principalResult; // @synthesize principalResult=_principalResult;
@property(readonly) NSString *displayName;
@property(readonly) NSSet *addresses;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)_processPropFind:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;
- (void)dealloc;

@end

