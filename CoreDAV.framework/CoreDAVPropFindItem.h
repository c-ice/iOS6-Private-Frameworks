/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CoreDAVPropFindItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_propName;
    CoreDAVItemWithNoChildren *_allProp;
    CoreDAVItem *_include;
    CoreDAVItem *_prop;
}

+ (id)copyParseRules;
@property(retain) CoreDAVItem *prop; // @synthesize prop=_prop;
@property(retain) CoreDAVItem *include; // @synthesize include=_include;
@property(retain) CoreDAVItemWithNoChildren *allProp; // @synthesize allProp=_allProp;
@property(retain) CoreDAVItemWithNoChildren *propName; // @synthesize propName=_propName;
- (id)description;
- (void)dealloc;
- (id)init;

@end

