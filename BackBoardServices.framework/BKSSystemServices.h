/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface BKSSystemServices : NSObject
{
    struct XPCProxy *_server;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4;
- (void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4;
- (void)dealloc;
- (id)init;

@end

