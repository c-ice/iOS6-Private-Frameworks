/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (CPStringAdditions)
+ (id)stringWithBytes:(const void *)arg1 length:(unsigned int)arg2 fontFamilyName:(id)arg3;
+ (id)stringWithBytes:(const void *)arg1 length:(unsigned int)arg2 codePointMapper:(void *)arg3;
- (BOOL)startsWithString:(id)arg1;
- (id)stringByFixingSymbolCharactersForFont:(struct __CTFont *)arg1;
- (id)stringByFixingSymbolCharacters;
@end

