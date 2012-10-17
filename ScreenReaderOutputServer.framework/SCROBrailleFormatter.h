/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSAttributedString;

@interface SCROBrailleFormatter : NSObject <NSCopying>
{
    struct __CFArray *_chunkArray;
    struct __CFDictionary *_chunkDictionary;
    struct __CFDictionary *_tokenDictionary;
    int _firstToken;
    int _lastToken;
    int _contractionMode;
    BOOL _showEightDot;
    int _displayMode;
    id _appToken;
    NSAttributedString *_statusText;
    BOOL _currentUnread;
    BOOL _anyUnread;
    BOOL _showDotsSevenAndEight;
}

- (int)lastToken;
- (int)firstToken;
- (struct __CFDictionary *)chunkDictionary;
- (struct __CFArray *)chunkArray;
- (void)translate;
- (void)addText:(id)arg1 language:(id)arg2 selection:(struct _NSRange *)arg3 token:(int)arg4 focused:(BOOL)arg5;
- (void)addText:(id)arg1 selection:(struct _NSRange *)arg2 token:(int)arg3 focused:(BOOL)arg4;
- (id)statusText;
- (void)setStatusText:(id)arg1;
- (id)appToken;
- (void)setAppToken:(id)arg1;
- (BOOL)anyUnread;
- (void)setAnyUnread:(BOOL)arg1;
- (BOOL)currentUnread;
- (void)setCurrentUnread:(BOOL)arg1;
- (int)displayMode;
- (void)setDisplayMode:(int)arg1;
- (BOOL)showDotsSevenAndEight;
- (BOOL)showEightDot;
- (int)contractionMode;
- (void)dealloc;
- (id)deepCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContractionMode:(int)arg1 showEightDot:(BOOL)arg2 showDotsSevenAndEight:(BOOL)arg3;

@end

