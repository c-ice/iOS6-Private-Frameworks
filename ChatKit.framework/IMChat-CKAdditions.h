/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IMChat.h"

@interface IMChat (CKAdditions)
- (void)__ck_targetToService:(id)arg1;
- (BOOL)__ck_hasValidAccountForService:(id)arg1;
- (BOOL)__ck_accountIsOperational:(id)arg1 forService:(id)arg2;
- (void)__ck_setAndIncrementDowngradeMarkersForManual:(BOOL)arg1;
- (BOOL)__ck_hasDowngradeMarkers;
- (void)__ck_clearDowngradeMarkers;
- (void)__ck_setPreviousAccount:(id)arg1 forService:(id)arg2;
- (id)__ck_previousAccountForService:(id)arg1;
- (id)__ck_placeholderDate;
@end

