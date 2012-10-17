/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUArrayCellConfiguration.h>

@class MPMediaLibrary;

@interface SharedLibraryCellConfiguration : IUArrayCellConfiguration
{
    MPMediaLibrary *_library;
}

+ (id)backgroundColorWithModifiers:(unsigned int)arg1;
+ (float)rowHeightForGlobalContext:(id)arg1;
- (void)configureForMediaLibrary:(id)arg1;
- (void)reloadStringsWithProperties:(id)arg1;
- (void)reloadLayoutInformation;
- (id)stringForLabelAtIndex:(unsigned int)arg1;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end

