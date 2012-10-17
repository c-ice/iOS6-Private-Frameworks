/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ATStoreInfo, NSDictionary, NSError, NSString, NSURL;

@interface ATAsset : NSObject
{
    NSString *_identifier;
    NSString *_dataclass;
    NSString *_assetType;
    NSDictionary *_variantOptions;
    NSString *_localPath;
    NSURL *_icon;
    NSString *_prettyName;
    BOOL _isDownload;
    BOOL _isRestore;
    BOOL _bypassStore;
    BOOL _installOnly;
    BOOL _readyForStore;
    long long _storePID;
    unsigned int _priority;
    float _downloadProgress;
    float _installProgress;
    id _storeCompletion;
    id _storeProgress;
    ATStoreInfo *_storeInfo;
    NSString *_storePlist;
    NSString *_infoPlist;
    NSError *_error;
}

+ (id)assetWithSerializedAsset:(id)arg1;
+ (id)iCloudRestoreAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 assetType:(id)arg3 restorePath:(id)arg4 displayName:(id)arg5;
+ (id)uploadAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 sourcePath:(id)arg3 prettyName:(id)arg4;
+ (id)downloadAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 prettyName:(id)arg3;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *infoPlist; // @synthesize infoPlist=_infoPlist;
@property(retain, nonatomic) NSString *storePlist; // @synthesize storePlist=_storePlist;
@property(retain, nonatomic) ATStoreInfo *storeInfo; // @synthesize storeInfo=_storeInfo;
@property(nonatomic) id storeProgress; // @synthesize storeProgress=_storeProgress;
@property(nonatomic) id storeCompletion; // @synthesize storeCompletion=_storeCompletion;
@property(retain, nonatomic) NSURL *icon; // @synthesize icon=_icon;
@property(nonatomic) float installProgress; // @synthesize installProgress=_installProgress;
@property(nonatomic) float downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(nonatomic) long long storePID; // @synthesize storePID=_storePID;
@property(nonatomic) BOOL readyForStore; // @synthesize readyForStore=_readyForStore;
@property(nonatomic) BOOL installOnly; // @synthesize installOnly=_installOnly;
@property(nonatomic) BOOL bypassStore; // @synthesize bypassStore=_bypassStore;
@property(nonatomic) BOOL isRestore; // @synthesize isRestore=_isRestore;
@property(nonatomic) BOOL isDownload; // @synthesize isDownload=_isDownload;
@property(retain, nonatomic) NSString *prettyName; // @synthesize prettyName=_prettyName;
@property(retain, nonatomic) NSString *path; // @synthesize path=_localPath;
@property(retain, nonatomic) NSDictionary *variantOptions; // @synthesize variantOptions=_variantOptions;
@property(retain, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(retain, nonatomic) NSString *dataclass; // @synthesize dataclass=_dataclass;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dealloc;
- (void)invokeStoreCompletion;
- (id)manifestEntry;
- (id)serializedAsset;
- (id)description;

@end

