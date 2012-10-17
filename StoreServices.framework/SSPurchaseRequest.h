/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSRequest.h>

#import "SSXPCCoding-Protocol.h"

@class NSArray;

@interface SSPurchaseRequest : SSRequest <SSXPCCoding>
{
    BOOL _isBackgroundRequest;
    NSArray *_purchases;
    BOOL _shouldValidatePurchases;
    BOOL _needsAuthentication;
}

@property(nonatomic) BOOL shouldValidatePurchases; // @synthesize shouldValidatePurchases=_shouldValidatePurchases;
@property(nonatomic) BOOL needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(nonatomic, getter=isBackgroundRequest) BOOL backgroundRequest; // @synthesize backgroundRequest=_isBackgroundRequest;
- (id)_purchaseForUniqueIdentifier:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:(id)arg1;
- (BOOL)start;
- (void)startWithPurchaseBlock:(id)arg1 completionBlock:(void)arg2;
@property(readonly) NSArray *purchases;
- (void)dealloc;
- (id)initWithPurchases:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) id <SSPurchaseRequestDelegate> delegate; // @dynamic delegate;

@end

