/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface AttributeKey : NSObject
{
    int _index;
    NSString *_key;
}

+ (id)instanceFromPlist:(id)arg1;
- (void)dealloc;
- (id)initWithIndex:(int)arg1 attributeName:(id)arg2;
- (id)initFromPlist:(id)arg1;
- (id)key;
- (int)index;

@end

