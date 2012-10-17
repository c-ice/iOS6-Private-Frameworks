/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface TLTextToneInfo : NSObject
{
    unsigned long _previewSound;
    unsigned long _actualSound;
    NSString *_filePath;
}

@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) unsigned long actualSound; // @synthesize actualSound=_actualSound;
@property(readonly, nonatomic) unsigned long previewSound; // @synthesize previewSound=_previewSound;
- (void)dealloc;
- (id)initWithPreviewSound:(unsigned long)arg1 actualSound:(unsigned long)arg2 filePath:(id)arg3;

@end

