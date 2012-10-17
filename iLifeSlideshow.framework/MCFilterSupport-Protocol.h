/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class NSArray, NSSet;

@protocol MCFilterSupport
@property(readonly, nonatomic) unsigned int countOfFilters;
@property(readonly) NSArray *orderedFilters;
@property(readonly) NSSet *filters;
- (void)unobserveFilter:(id)arg1;
- (void)observeFilter:(id)arg1;
- (void)moveFiltersAtIndices:(id)arg1 toIndex:(unsigned int)arg2;
- (void)removeAllFilters;
- (void)removeFiltersAtIndices:(id)arg1;
- (id)insertFilterWithFilterID:(id)arg1 atIndex:(unsigned int)arg2;
- (id)addFilterWithFilterID:(id)arg1;
- (id)filterAtIndex:(unsigned int)arg1;
- (id)imprintsForFilters;
- (void)demolishFilters;
- (void)initFiltersWithImprints:(id)arg1;
@end

