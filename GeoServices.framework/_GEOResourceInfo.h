/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSString, NSURL;

@interface _GEOResourceInfo : NSObject
{
    NSString *_name;
    NSURL *_url;
    NSData *_data;
    NSString *_onDiskPath;
}

@property(copy, nonatomic) NSString *onDiskPath; // @synthesize onDiskPath=_onDiskPath;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;

@end

