/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol GEOResourceManifestServerProxyDelegate <NSObject>
- (oneway void)serverProxyDidFinishLoadingForList:(id)arg1;
- (oneway void)serverProxyDidReceiveError:(id)arg1 forList:(id)arg2;
- (oneway void)serverProxyDidReceiveResourceNames:(id)arg1 attributions:(id)arg2 forKey:(struct _GEOTileKey)arg3 fromList:(id)arg4;
- (oneway void)serverProxyDidChangeActiveTileGroup:(id)arg1 finishedCallback:(id)arg2;
@end

