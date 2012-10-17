/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSEntity.h>

@class NSArray, NSString, NSURLRequest, SSURLRequestProperties;

@interface SSDownloadAsset : SSEntity
{
    int _assetType;
    SSURLRequestProperties *_localProperties;
}

+ (id)assetWithURL:(id)arg1 type:(int)arg2;
+ (long long)_setValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_existsMessage;
- (id)_copyURLRequestProperties;
@property(readonly, getter=isExternal) BOOL external;
@property(readonly) long long fileSize;
@property(readonly) NSString *finalizedPath;
@property(readonly) NSString *downloadPath;
@property(readonly) NSString *downloadFileName;
- (int)assetType;
- (id)initWithURLRequest:(id)arg1 type:(int)arg2;
- (id)copyXPCEncoding;
- (int)_legacyAssetType;
- (id)_initWithDownloadMetadata:(id)arg1 type:(id)arg2;
@property(readonly) SSURLRequestProperties *URLRequestProperties;
- (void)_resetLocalIVars;
@property(readonly) NSURLRequest *URLRequest;
@property(readonly) NSArray *sinfs;
- (long long)bytesDownloaded;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1;

@end

