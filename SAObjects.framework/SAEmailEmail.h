/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSNumber, NSString, NSURL, SAPersonAttribute;

@interface SAEmailEmail : SADomainObject
{
}

+ (id)emailWithDictionary:(id)arg1 context:(id)arg2;
+ (id)email;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSString *timeZoneId;
@property(copy, nonatomic) NSString *subject;
@property(copy, nonatomic) NSURL *referenceId;
@property(copy, nonatomic) NSArray *recipientsTo;
@property(copy, nonatomic) NSArray *recipientsCc;
@property(copy, nonatomic) NSArray *recipientsBcc;
@property(copy, nonatomic) NSArray *receivingAddresses;
@property(copy, nonatomic) NSNumber *outgoing;
@property(copy, nonatomic) NSString *message;
@property(retain, nonatomic) SAPersonAttribute *fromEmail;
@property(copy, nonatomic) NSDate *dateSent;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

