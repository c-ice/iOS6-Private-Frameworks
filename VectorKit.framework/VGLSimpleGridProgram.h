/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VGLProgram.h>

@interface VGLSimpleGridProgram : VGLProgram
{
    int _uColor;
    struct _VGLColor _color;
    int _uInvFwidth;
    CDStruct_6e3f967a _invFwidth;
    int _uGridView;
    CDUnion_f5b85e25 _gridView;
}

+ (id)program;
@property(nonatomic) CDUnion_f5b85e25 gridView; // @synthesize gridView=_gridView;
@property(nonatomic) CDStruct_6e3f967a invFwidth; // @synthesize invFwidth=_invFwidth;
@property(nonatomic) struct _VGLColor color; // @synthesize color=_color;
- (id)init;

@end

