/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BKSXPCCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface BKSApplicationSuspensionSettings : NSObject <NSCopying, BKSXPCCoding>
{
    NSNumber *_statusBarStyle;
    NSNumber *_statusBarHidden;
    NSNumber *_classicAppZoomedIn;
    NSNumber *_taskSuspendingUnsupported;
    NSNumber *_defaultPNGExpirationTime;
    NSString *_defaultPNG;
}

@property(copy, nonatomic) NSString *defaultPNG; // @synthesize defaultPNG=_defaultPNG;
@property(retain, nonatomic) NSNumber *defaultPNGExpirationTime; // @synthesize defaultPNGExpirationTime=_defaultPNGExpirationTime;
@property(retain, nonatomic) NSNumber *taskSuspendingUnsupported; // @synthesize taskSuspendingUnsupported=_taskSuspendingUnsupported;
@property(retain, nonatomic) NSNumber *classicAppZoomedIn; // @synthesize classicAppZoomedIn=_classicAppZoomedIn;
@property(retain, nonatomic) NSNumber *statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(retain, nonatomic) NSNumber *statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 zone:(struct _NSZone *)arg2;

@end

