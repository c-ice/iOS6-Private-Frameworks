/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQLassoGenerator-Protocol.h"

@interface GQHLasso : NSObject <GQLassoGenerator>
{
}

+ (int)handleDrawableZOrder:(const char *)arg1 state:(id)arg2;
+ (Class)beginWorkspacePage:(id)arg1 state:(id)arg2;
+ (int)handleWorkspaceStyle:(id)arg1 state:(id)arg2;
+ (int)endWorkspace:(id)arg1;
+ (int)beginWorkspace:(const char *)arg1 state:(id)arg2;
+ (int)handleStylesheet:(id)arg1 state:(id)arg2;
+ (int)endDocument:(id)arg1 state:(id)arg2;
+ (int)beginDocument:(id)arg1 state:(id)arg2;

@end

