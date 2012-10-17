/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKModelObject.h>

#import "VKMapLayer-Protocol.h"

@class VGLRenderState;

@interface VKSkyModel : VKModelObject <VKMapLayer>
{
    VGLRenderState *_renderState;
    struct _VGLColor _horizonColor;
    struct _VGLColor _baseColor;
    float _skyStartOffset;
}

- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (void)dealloc;
- (id)init;
- (unsigned int)mapLayerPosition;

@end

