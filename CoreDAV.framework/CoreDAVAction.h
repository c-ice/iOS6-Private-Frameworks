/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CoreDAVAction : NSObject
{
    int _action;
    id _context;
    id _changeContext;
}

@property(retain) id changeContext; // @synthesize changeContext=_changeContext;
@property(readonly) id context; // @synthesize context=_context;
@property(readonly) int action; // @synthesize action=_action;
- (id)description;
- (id)initWithAction:(int)arg1 context:(id)arg2;
- (void)dealloc;

@end

