/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface EXDrawing : NSObject
{
}

+ (void)readFromPart:(id)arg1 state:(id)arg2;
+ (void)readClientDataFromParentNode:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readDrawableNode:(struct _xmlNode *)arg1 anchor:(id)arg2 state:(id)arg3;
+ (struct EDCellAnchorMarker)readAnchorMarkerFromNode:(struct _xmlNode *)arg1;
+ (void)readAbsoluteAnchorNode:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readOneCellAnchorNode:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readTwoCellAnchorNode:(struct _xmlNode *)arg1 state:(id)arg2;

@end

