/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLGenericAlbum;

@interface PLAlbumChangeNotification : PLContainerChangeNotification
{
    BOOL _titleDidChange;
    BOOL _keyAssetDidChange;
    BOOL _invitationRecordsDidChange;
    NSDictionary *_userInfo;
}

+ (id)notificationWithAlbum:(id)arg1 snapshot:(id)arg2 changedAssets:(id)arg3;
@property(readonly, nonatomic) BOOL invitationRecordsDidChange;
@property(readonly, nonatomic) BOOL keyAssetDidChange;
@property(readonly, nonatomic) BOOL titleDidChange;
@property(readonly, nonatomic) PLGenericAlbum *album;
- (id)description;
- (id)userInfo;
- (id)name;
- (void)dealloc;
- (void)_calculateDiffs;
- (BOOL)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (id)_contentRelationshipName;

@end

