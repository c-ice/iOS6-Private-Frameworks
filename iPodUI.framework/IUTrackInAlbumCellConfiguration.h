/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUSongCellConfigurationAbstract.h>

@class MPMediaItem, NSString;

@interface IUTrackInAlbumCellConfiguration : IUSongCellConfigurationAbstract
{
    MPMediaItem *_albumRepresentativeTrack;
    NSString *_artist;
    NSString *_actionRowTitle;
    NSString *_title;
    double _duration;
    unsigned int _index;
    int _preset;
    BOOL _isVideo;
    unsigned int _shouldStripCommonPrefixes:1;
}

+ (float)_widthForDurationText:(double)arg1;
+ (Class)globalContextClass;
+ (void)getRequiredStringProperties:(id)arg1 optionalStringProperties:(id)arg2 forDataSource:(id)arg3;
+ (id)backgroundColorWithModifiers:(unsigned int)arg1;
+ (float)rowHeightForGlobalContext:(id)arg1;
+ (BOOL)drawsRowsInAlternateStyle;
+ (void)configureTableDisplaySettings:(id)arg1 dataSource:(id)arg2;
+ (id)customActionRowConfigurationWithSimpleCellConfiguration:(id)arg1;
@property(nonatomic) int preset; // @synthesize preset=_preset;
@property(nonatomic) BOOL isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *actionRowTitle; // @synthesize actionRowTitle=_actionRowTitle;
- (float)_indexColumnWidth;
- (double)_durationInSeconds;
- (float)_durationColumnWidth;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *artist;
- (void)reloadStringsWithProperties:(id)arg1;
- (id)displayProperties;
- (void)reloadImages;
- (void)configureForEntity:(id)arg1 query:(id)arg2 entityIndex:(unsigned int)arg3 entityCount:(unsigned int)arg4;
- (void)reloadLayoutInformation;
- (id)subviewLayoutViewsWithModifiers:(unsigned int)arg1;
- (void)reloadData;
- (void)layoutSubviewLayoutViews:(id)arg1;
- (BOOL)getShadowColor:(id *)arg1 offset:(struct CGSize *)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (void)drawWithModifiers:(unsigned int)arg1;
- (void)drawBackgroundWithModifiers:(unsigned int)arg1;
- (BOOL)drawsDurationColumn;
- (struct CGRect)purchaseButtonFrame;
- (struct CGRect)downloadProgressIndicatorFrame;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)backgroundColorWithModifiers:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

