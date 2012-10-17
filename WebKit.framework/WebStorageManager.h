/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface WebStorageManager : NSObject
{
}

+ (void)setStorageDatabaseIdleInterval:(double)arg1;
+ (id)_storageDirectoryPath;
+ (id)sharedWebStorageManager;
- (void)syncFileSystemAndTrackerDatabase;
- (void)syncLocalStorage;
- (unsigned long long)diskUsageForOrigin:(id)arg1;
- (void)deleteOrigin:(id)arg1;
- (void)deleteAllOrigins;
- (id)origins;
- (id)init;

@end

