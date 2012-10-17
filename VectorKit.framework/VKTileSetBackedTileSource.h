/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKTileSource.h>

@class GEOActiveTileSet, NSTimer, VKTilePool, _VKTileSetBackedTileSourceTimerTarget;

@interface VKTileSetBackedTileSource : VKTileSource
{
    GEOActiveTileSet *_tileSet;
    struct _GEOTileKey _downloadTemplate;
    int _minimumDownloadZoomLevel;
    int _maximumDownloadZoomLevel;
    NSTimer *_expirationTimer;
    VKTilePool *_expiredTilePool;
    struct _NSRange _zoomLevelRange;
    _VKTileSetBackedTileSourceTimerTarget *_timerTarget;
}

@property(readonly, nonatomic) GEOActiveTileSet *tileSet; // @synthesize tileSet=_tileSet;
- (int)maximumZoomLevel;
- (int)minimumZoomLevel;
- (int)defaultMaximumZoomLevel;
- (int)defaultMinimumZoomLevel;
- (unsigned int)mapLayerForZoomLevelRange;
- (void)setStylesheet:(id)arg1;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (void)_expireTiles;
- (void)_scheduleTileExpirationTimer:(double)arg1 forceUpdate:(BOOL)arg2;
- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (int)maximumDownloadZoomLevel;
- (int)minimumDownloadZoomLevel;
- (int)tileSize;
- (double)_nextTileExpirationDate;
- (double)_expirationInterval;
- (BOOL)expires;
- (void)setClient:(id)arg1;
- (void)clearCaches;
- (id)tileSource;
- (void)dealloc;
- (id)initWithTileSet:(id)arg1;

@end

