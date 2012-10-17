/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class MCAnimationKeyframe, MPAnimationPath, NSMutableDictionary;

@interface MPAnimationKeyframe : NSObject <NSCoding, NSCopying>
{
    NSMutableDictionary *_attributes;
    MPAnimationPath *_parentPath;
    MCAnimationKeyframe *_keyframe;
    double _time;
    int _offsetType;
    double _preControl;
    double _postControl;
}

@property(nonatomic) int offsetType; // @synthesize offsetType=_offsetType;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) double postControl; // @synthesize postControl=_postControl;
@property(nonatomic) double preControl; // @synthesize preControl=_preControl;
- (id)parentPath;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)fullDebugLog;
- (void)dump;
- (int)relativeTimeCompare:(id)arg1;
- (void)copyVars:(id)arg1;
- (void)setKeyframe:(id)arg1;
- (id)parentDocument;
- (void)setParentPath:(id)arg1;

@end

