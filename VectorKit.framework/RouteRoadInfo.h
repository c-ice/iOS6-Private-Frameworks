/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface RouteRoadInfo : NSObject
{
    NSString *_name;
    NSString *_shieldGroup;
    CDStruct_3f2a7a20 _routeOffset;
}

@property(readonly, nonatomic) CDStruct_3f2a7a20 routeOffset; // @synthesize routeOffset=_routeOffset;
@property(readonly, nonatomic) NSString *shieldGroup; // @synthesize shieldGroup=_shieldGroup;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithName:(id)arg1 shieldGroup:(id)arg2 offset:(CDStruct_3f2a7a20)arg3;

@end

