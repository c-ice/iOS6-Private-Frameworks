/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FTServices/FTIDSMessage.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface FTRecoverSignatureMessage : FTIDSMessage <NSCopying>
{
    NSData *_responseSignature;
    NSString *_protocolVersion;
}

@property(copy) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(copy) NSData *responseSignature; // @synthesize responseSignature=_responseSignature;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeaders;
- (id)requiredKeys;
- (id)bagKey;
- (BOOL)hasRequiredKeys:(id *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

