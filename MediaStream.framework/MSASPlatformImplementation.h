/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MSASPlatform-Protocol.h"

@interface MSASPlatformImplementation : NSObject <MSASPlatform>
{
}

- (int)MMCSConcurrentConnectionsCount;
- (id)personIDsEnabledForAlbumSharing;
- (id)pushTokenForPersonID:(id)arg1;
- (BOOL)personIDUsesProductionPushEnvironment:(id)arg1;
- (id)_accountForPersonID:(id)arg1;
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;
- (BOOL)MSASIsAllowedToUploadAssets;
- (BOOL)MSASIsAllowedToTransferMetadata;
- (BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
- (id)baseSharingURLForPersonID:(id)arg1;
- (void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;
- (BOOL)shouldLogAtLevel:(int)arg1;
- (Class)pluginClass;
- (id)pathAlbumSharingDir;
- (id)albumSharingDaemon;

@end

