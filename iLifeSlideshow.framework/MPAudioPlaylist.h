/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class MCAudioPlaylist, MCMontage, MCPlug, MPPlaylistInternal, NSMutableArray, NSMutableDictionary, NSObject<MPAudioSupport>;

@interface MPAudioPlaylist : NSObject <NSCopying, NSCoding>
{
    NSMutableArray *_songs;
    MCAudioPlaylist *_audioPlaylist;
    MCPlug *_plug;
    NSObject<MPAudioSupport> *_parentObject;
    MCMontage *_montage;
    NSMutableDictionary *_attributes;
    MPPlaylistInternal *_internal;
}

+ (id)audioPlaylist;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property float duckLevel; // @dynamic duckLevel;
@property double duckOutDuration; // @dynamic duckOutDuration;
@property double duckInDuration; // @dynamic duckInDuration;
@property double fadeOutDuration; // @dynamic fadeOutDuration;
@property double fadeInDuration; // @dynamic fadeInDuration;
- (double)duration;
- (id)parentObject;
- (void)moveSongsFromIndices:(id)arg1 toIndex:(int)arg2;
- (void)removeAllSongs;
- (void)removeSongsAtIndices:(id)arg1;
- (void)insertSongs:(id)arg1 atIndex:(int)arg2;
- (void)addSongs:(id)arg1;
- (void)addSong:(id)arg1;
- (id)songs;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)audioPlaylist;
- (id)parentDocument;
- (void)setDuration:(double)arg1;
- (void)setParentObject:(id)arg1;
- (void)setPlug:(id)arg1;
- (void)setAudioPlaylist:(id)arg1;
- (void)setMontage:(id)arg1;
- (id)montage;
- (void)cleanup;
- (void)copySongs:(id)arg1;
- (void)copyStruct:(id)arg1;
- (void)replaceObjectInSongsAtIndex:(int)arg1 withObject:(id)arg2;
- (void)removeObjectFromSongsAtIndex:(int)arg1;
- (void)insertObject:(id)arg1 inSongsAtIndex:(int)arg2;
- (id)objectInSongsAtIndex:(int)arg1;
- (int)countOfSongs;

@end

