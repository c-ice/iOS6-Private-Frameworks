/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, NSDate, NSManagedObject, NSMutableSet, NSNumber, NSObject, NSSet, NSString;

@interface _PLManagedAsset : PLManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *albumsSet;
@property(readonly, nonatomic) NSMutableSet *sidecarFilesSet;
@property(readonly, nonatomic) NSMutableSet *albumsBeingKeyAssetForSet;
- (void)setPrimitiveCompleteValue:(BOOL)arg1;
- (BOOL)primitiveCompleteValue;
@property BOOL completeValue;
- (void)setPrimitiveHeightValue:(short)arg1;
- (short)primitiveHeightValue;
@property short heightValue;
- (void)setPrimitiveFlaggedValue:(BOOL)arg1;
- (BOOL)primitiveFlaggedValue;
@property BOOL flaggedValue;
- (void)setPrimitiveDurationValue:(double)arg1;
- (double)primitiveDurationValue;
@property double durationValue;
@property(retain, nonatomic) NSNumber *duration;
- (void)setPrimitiveOrientationValue:(short)arg1;
- (short)primitiveOrientationValue;
@property short orientationValue;
@property(retain, nonatomic) NSString *importSessionID;
@property(retain, nonatomic) NSString *originalPath;
- (void)setPrimitiveEmbeddedThumbnailLengthValue:(int)arg1;
- (int)primitiveEmbeddedThumbnailLengthValue;
- (void)setPrimitiveOriginalFilesizeValue:(int)arg1;
- (int)primitiveOriginalFilesizeValue;
@property int originalFilesizeValue;
@property(retain, nonatomic) NSNumber *originalFilesize;
- (void)setPrimitiveEmbeddedThumbnailHeightValue:(short)arg1;
- (short)primitiveEmbeddedThumbnailHeightValue;
- (void)setPrimitiveThumbnailIndexValue:(int)arg1;
- (int)primitiveThumbnailIndexValue;
- (void)setPrimitiveOriginalOrientationValue:(short)arg1;
- (short)primitiveOriginalOrientationValue;
@property short originalOrientationValue;
@property(retain, nonatomic) NSNumber *originalOrientation;
- (void)setPrimitiveEmbeddedThumbnailOffsetValue:(int)arg1;
- (int)primitiveEmbeddedThumbnailOffsetValue;
@property(retain, nonatomic) NSString *originalFilename;
@property(nonatomic) short originalWidthValue;
@property(retain, nonatomic) NSNumber *originalWidth;
@property(nonatomic) short originalHeightValue;
@property(retain, nonatomic) NSNumber *originalHeight;
@property(retain, nonatomic) NSString *originalAssetsUUID;
@property(retain, nonatomic) NSString *creatorBundleID;
- (void)setPrimitiveWidthValue:(short)arg1;
- (short)primitiveWidthValue;
@property short widthValue;
@property(retain, nonatomic) NSNumber *highDynamicRangeType;
- (void)setPrimitiveKindValue:(short)arg1;
- (short)primitiveKindValue;
@property short kindValue;
- (void)setPrimitiveEmbeddedThumbnailWidthValue:(short)arg1;
- (short)primitiveEmbeddedThumbnailWidthValue;
- (id)objectID;
- (void)awakeFromInsert;

// Remaining properties
@property(retain, nonatomic) NSManagedObject *additionalAttributes; // @dynamic additionalAttributes;
@property(retain, nonatomic) NSSet *albums; // @dynamic albums;
@property(retain, nonatomic) NSSet *albumsBeingKeyAssetFor; // @dynamic albumsBeingKeyAssetFor;
@property(retain, nonatomic) NSNumber *complete; // @dynamic complete;
@property(retain, nonatomic) NSDate *dateCreated; // @dynamic dateCreated;
@property(retain, nonatomic) NSString *directory; // @dynamic directory;
@property(retain, nonatomic) NSObject *faceRectangles; // @dynamic faceRectangles;
@property(retain, nonatomic) NSString *filename; // @dynamic filename;
@property(retain, nonatomic) NSNumber *flagged; // @dynamic flagged;
@property(retain, nonatomic) NSNumber *height; // @dynamic height;
@property(retain, nonatomic) NSNumber *kind; // @dynamic kind;
@property(retain, nonatomic) NSData *locationData; // @dynamic locationData;
@property(retain, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(retain, nonatomic) NSNumber *orientation; // @dynamic orientation;
@property(retain, nonatomic) NSNumber *savedAssetType; // @dynamic savedAssetType;
@property(retain, nonatomic) NSSet *sidecarFiles; // @dynamic sidecarFiles;
@property(nonatomic) double sortToken; // @dynamic sortToken;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *uniformTypeIdentifier; // @dynamic uniformTypeIdentifier;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(retain, nonatomic) NSNumber *width; // @dynamic width;

@end

