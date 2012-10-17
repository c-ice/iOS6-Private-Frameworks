/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>;

@interface TLAlert : NSObject
{
    int _type;
    unsigned long _soundID;
    NSDictionary *_vibrationPattern;
    NSObject<OS_dispatch_queue> *_targetQueue;
    id _completionHandler;
}

+ (void)playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
+ (void)playToneAndVibrationForType:(int)arg1 accountIdentifier:(id)arg2;
+ (void)playToneAndVibrationForType:(int)arg1;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(copy, nonatomic) NSDictionary *vibrationPattern; // @synthesize vibrationPattern=_vibrationPattern;
@property(nonatomic) unsigned long soundID; // @synthesize soundID=_soundID;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)stop;
- (BOOL)playWithCompletionHandler:(id)arg1 targetQueue:(void)arg2;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing;
- (unsigned long)soundBehavior;
- (void)dealloc;
- (id)initWithType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (id)initWithType:(int)arg1 accountIdentifier:(id)arg2;
- (id)initWithType:(int)arg1;

@end

