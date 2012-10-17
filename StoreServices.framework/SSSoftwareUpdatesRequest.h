/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSRequest.h>

@class SSSoftwareUpdatesContext;

@interface SSSoftwareUpdatesRequest : SSRequest
{
    SSSoftwareUpdatesContext *_context;
}

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:(id)arg1;
- (BOOL)start;
@property(readonly) SSSoftwareUpdatesContext *updateQueueContext;
- (void)startWithUpdatesResponseBlock:(id)arg1;
- (void)dealloc;
- (id)initWithUpdateQueueContext:(id)arg1;

// Remaining properties
@property(nonatomic) id <SSSoftwareUpdatesRequestDelegate> delegate; // @dynamic delegate;

@end

