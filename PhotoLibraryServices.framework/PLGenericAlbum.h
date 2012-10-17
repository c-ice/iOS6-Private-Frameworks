/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/_PLGenericAlbum.h>

#import "PLAssetContainer-Protocol.h"
#import "PLDerivedAlbumOrigin-Protocol.h"
#import "PLIndexMappersDataOrigin-Protocol.h"

@class NSDictionary, NSMutableOrderedSet, NSNumber, NSObject<PLIndexMappingCache>, NSOrderedSet, NSString, NSURL, PLManagedAsset, PLPhotoLibrary, UIImage;

@interface PLGenericAlbum : _PLGenericAlbum <PLAssetContainer, PLDerivedAlbumOrigin, PLIndexMappersDataOrigin>
{
    NSObject<PLIndexMappingCache> *_derivededAlbums[5];
    BOOL isRegisteredForChanges;
    BOOL didRegisteredWithUserInterfaceContext;
}

+ (void)addSingletonObjectsToContext:(id)arg1;
+ (id)albumsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)insertAlbumWithKind:(int)arg1 title:(id)arg2 uuid:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)eventsWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)albumsWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)allAlbumsRegisteredWithManagedObjectContext:(id)arg1;
+ (id)allAlbumsInManagedObjectContext:(id)arg1;
+ (struct NSObject *)albumFromGroupURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)insertNewFaceAlbumIntoLibrary:(id)arg1;
+ (id)insertNewCloudSharedAlbumWithTitle:(id)arg1 lastInterestingDate:(id)arg2 intoLibrary:(id)arg3;
+ (id)insertNewEventIntoLibrary:(id)arg1;
+ (id)insertNewEventWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewAlbumIntoLibrary:(id)arg1;
+ (id)insertNewAlbumWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewAlbumWithKind:(int)arg1 title:(id)arg2 intoLibrary:(id)arg3;
+ (id)_insertNewAlbumWithKind:(int)arg1 title:(id)arg2 lastInterestingDate:(id)arg3 intoLibrary:(id)arg4;
+ (id)albumsMatchingPredicate:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsForStreamID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithName:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)allAlbumsInLibrary:(id)arg1;
+ (id)filesystemImportProgressAlbumInLibrary:(id)arg1;
+ (id)otaRestoreProgressAlbumInLibrary:(id)arg1;
+ (id)syncProgressAlbumInLibrary:(id)arg1;
+ (id)iTunesLibraryAlbumInLibrary:(id)arg1;
+ (id)wallpaperAlbumInLibrary:(id)arg1;
+ (id)allPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allNonPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allAssetsAlbumInLibrary:(id)arg1;
+ (id)cameraRollAlbumInLibrary:(id)arg1;
+ (id)_singletonManagedAlbumWithKind:(int)arg1 library:(id)arg2;
+ (id)_singletonFetchingAlbumWithKind:(int)arg1 library:(id)arg2;
+ (id)keyPathsForValuesAffectingKindValue;
+ (id)keyPathsForValuesAffectingName;
@property(nonatomic) BOOL didRegisteredWithUserInterfaceContext; // @synthesize didRegisteredWithUserInterfaceContext;
@property(nonatomic) BOOL isRegisteredForChanges; // @synthesize isRegisteredForChanges;
- (void)enumerateDerivedIndexMappers:(id)arg1;
- (BOOL)hasDerivedIndexMappers;
- (void)enumerateDerivedAlbums:(id)arg1;
- (void)unregisterAllDerivedAlbums;
- (void)registerDerivedAlbum:(struct NSObject *)arg1;
- (id)_prettyDescription;
- (id)_compactDebugDescription;
- (id)_kindDescription;
- (unsigned int)countForAssetsOfKind:(int)arg1;
@property(readonly, nonatomic) unsigned int indexOfPosterImage;
- (void)unregisterForChanges;
- (void)registerForChanges;
- (void)updateStackedImageShouldNotifyImmediately:(BOOL)arg1;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (void)batchFetchAssets:(id)arg1;
- (id)assetsByObjectIDAtIndexes:(id)arg1;
- (id)displayableIndexesForCount:(unsigned int)arg1;
- (id)titleForSectionStartingAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) id sectioningComparator;
@property(readonly, nonatomic) id sortingComparator;
@property(readonly, nonatomic) NSURL *groupURL;
@property(readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
- (BOOL)canPerformEditOperation:(int)arg1;
@property(readonly, nonatomic) BOOL canShowComments;
@property(readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isCameraAlbum;
@property(readonly, nonatomic) BOOL isLibrary;
@property(nonatomic) int kindValue;
@property(readonly, nonatomic) UIImage *posterImage;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(nonatomic) BOOL hasUnseenContentBoolValue;
@property(readonly, nonatomic) unsigned int videosCount;
@property(readonly, nonatomic) unsigned int photosCount;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) unsigned int count;
@property(readonly, nonatomic) unsigned int assetsCount;
@property(readonly, nonatomic) unsigned int approximateCount;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (void)delete;
@property(retain, nonatomic) NSDictionary *slideshowSettings;
- (void)setKind:(id)arg1;
@property(readonly, nonatomic) NSNumber *kind;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *uuid;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) NSOrderedSet *assets; // @dynamic assets;
@property(retain, nonatomic) NSString *importSessionID; // @dynamic importSessionID;
@property(retain, nonatomic) PLManagedAsset *keyAsset; // @dynamic keyAsset;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableAssets; // @dynamic mutableAssets;
@property(nonatomic) unsigned int pendingItemsCount; // @dynamic pendingItemsCount;
@property(nonatomic) unsigned int pendingItemsType; // @dynamic pendingItemsType;

@end

