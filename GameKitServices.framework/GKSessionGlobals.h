/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface GKSessionGlobals : NSObject
{
    unsigned int *_activePIDList;
    unsigned long _activePIDListSize;
    unsigned long _activePIDListCount;
    struct _opaque_pthread_mutex_t _lock;
}

- (void)unlock;
- (void)lock;
- (BOOL)hasActivePID:(unsigned int)arg1;
- (void)unregisterPID:(unsigned int)arg1;
- (void)registerPID:(unsigned int)arg1;
- (id)init;

@end

