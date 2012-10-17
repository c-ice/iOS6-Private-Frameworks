/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSError;

@interface MBStateInfo : NSObject <NSCoding, NSCopying>
{
    int _state;
    float _progress;
    unsigned int _estimatedTimeRemaining;
    NSError *_error;
    NSDate *_date;
}

@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned int estimatedTimeRemaining; // @synthesize estimatedTimeRemaining=_estimatedTimeRemaining;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setError:(id)arg1;
- (void)setEstimatedTimeRemaining:(unsigned int)arg1;
- (void)setProgress:(float)arg1;
- (void)setState:(int)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithState:(int)arg1 progress:(float)arg2 estimatedTimeRemaining:(unsigned int)arg3 error:(id)arg4;

@end

