/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol Clock
@property(readonly, nonatomic) int runMode;
- (void)stop;
- (void)start;
- (void)updateTime;

@optional
- (void)updateFlutter;
@end

