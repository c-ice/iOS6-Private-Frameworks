/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "HSXPCCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSDictionary, NSString, NSURL, SSAccount;

@interface HSConnectionConfiguration : NSObject <HSXPCCoding, NSCopying, NSMutableCopying>
{
    SSAccount *_account;
    NSDictionary *_urlBag;
    NSURL *_baseURL;
    NSString *_buildIdentifier;
    NSDictionary *_cookieHeaders;
    NSString *_userAgent;
}

@property(readonly, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(readonly, nonatomic) NSDictionary *urlBag; // @synthesize urlBag=_urlBag;
@property(readonly, nonatomic) NSDictionary *cookieHeaders; // @synthesize cookieHeaders=_cookieHeaders;
@property(readonly, nonatomic) NSString *buildIdentifier; // @synthesize buildIdentifier=_buildIdentifier;
@property(readonly, nonatomic) SSAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (id)_dictonaryFromXPCDictonary:(id)arg1;
- (id)_copyXPCDictonaryFromDictonary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;

@end

