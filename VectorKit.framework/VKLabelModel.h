/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKModelObject.h>

#import "VKLabelManagerDelegate-Protocol.h"
#import "VKMapLayer-Protocol.h"

@class VKLabelManager;

@interface VKLabelModel : VKModelObject <VKMapLayer, VKLabelManagerDelegate>
{
    VKLabelManager *_labelManager;
    BOOL _debugSkipLabels;
    id <VKLabelModelDelegate> _delegate;
    BOOL _drawLabels;
}

@property(nonatomic) BOOL drawLabels; // @synthesize drawLabels=_drawLabels;
@property(nonatomic) id <VKLabelModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)labelManager:(id)arg1 setNeedsDisplay:(BOOL)arg2;
- (void)labelManager:(id)arg1 setNeedsLayout:(BOOL)arg2;
- (void)labelManager:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)labelManager:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)labelManager:(id)arg1 willSelectLabelMarker:(id)arg2;
@property(nonatomic) int labelScaleFactor;
@property(nonatomic) BOOL localizeLabels;
- (void)setCalloutController:(id)arg1;
@property(nonatomic) BOOL labelMarkerSelectionEnabled;
- (id)selectedLabelMarker;
- (id)focusedPolylinePainter;
- (void)deselectLabelMarkerAnimated:(BOOL)arg1;
- (void)selectLabelMarker:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect)arg3;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint)arg1 featurePool:(id)arg2 pointLabelsOnly:(BOOL)arg3;
- (void)setFocusedPolylinePainter:(id)arg1;
- (void)setRouteUserOffset:(CDStruct_3f2a7a20)arg1;
- (void)setCurrentLocationText:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setVectorType:(int)arg1;
- (void)setLabelMode:(int)arg1;
- (void)didTapZoom;
- (void)willTapZoom;
@property(nonatomic) BOOL occlusionTestingEnabled;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (void)clearScene;
- (unsigned int)mapLayerPosition;
- (void)setMapType:(int)arg1;
@property(readonly, nonatomic) unsigned int renderStamp;
- (void)dealloc;
- (id)init;

@end

