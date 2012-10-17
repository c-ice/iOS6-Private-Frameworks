/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CHBState.h>

@class EBReaderSheetState;

@interface CHBReaderState : CHBState
{
    EBReaderSheetState *mEBReaderSheetState;
    struct XlChartBinaryReader *mXlReader;
    int mAxisGroup;
    struct XlChartPlot *mXlCurrentPlot;
    int mXlCurrentPlotIndex;
}

- (const struct XlChartSeriesFormat *)defaultFormatForXlSeries:(const struct XlChartDataSeries *)arg1;
- (const struct XlChartSeriesFormat *)xlCurrentDefaultSeriesFormat;
- (void)setXlCurrentPlot:(struct XlChartPlot *)arg1;
- (struct XlChartPlot *)xlCurrentPlot;
- (void)setXlCurrentPlotIndex:(int)arg1;
- (int)xlCurrentPlotIndex;
- (int)xlPlotCount;
- (void)readAndCacheXlChartDataSeries;
- (void)setAxisGroup:(int)arg1;
- (int)axisGroup;
- (struct XlChartBinaryReader *)xlReader;
- (id)resources;
- (id)workbook;
- (id)ebReaderSheetState;
- (id)initWithEBReaderSheetState:(id)arg1;

@end

