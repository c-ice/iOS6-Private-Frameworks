/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WebBookmark, WebBookmarkCollection;

@interface BAChangeRecord : NSObject
{
    WebBookmarkCollection *_collection;
    WebBookmark *_bookmark;
    int _changeType;
}

@property(readonly, nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, nonatomic) WebBookmarkCollection *collection; // @synthesize collection=_collection;
- (id)description;
- (id)changeTypeDescription;
- (void)dealloc;
- (id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 changeType:(int)arg3;

@end

