/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKDBMessage.h>

@class NSString;

@interface CKIMDBMessage : CKDBMessage
{
    int _personID;
    NSString *_personName;
}

@property(nonatomic) int personID; // @synthesize personID=_personID;
@property(retain, nonatomic) NSString *personName; // @synthesize personName=_personName;
- (void)markAsRead;
- (void)resetIMPerson;
- (void)dealloc;
- (id)initWithRecordID:(int)arg1;

@end

