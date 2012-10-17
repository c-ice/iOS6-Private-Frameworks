/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (TSUAdditions)
+ (id)stringByHexEncodingData:(id)arg1;
+ (id)stringWithXMLString:(const char *)arg1;
+ (id)stringByBase64EncodingBytes:(const char *)arg1 length:(int)arg2 breakLines:(BOOL)arg3;
+ (id)stringByBase64EncodingBytes:(const char *)arg1 length:(int)arg2;
+ (id)listSeparator;
+ (id)stringByIndentingString:(id)arg1;
+ (id)stringByIndentingString:(id)arg1 times:(unsigned int)arg2;
+ (id)stringWithUUID;
- (id)tolerantStringByAppendingPathExtension:(id)arg1;
- (BOOL)containsOnlyCharactersFromSet:(id)arg1;
- (id)unescapeXML;
- (id)escapeXML;
- (id)stringByMakingFirstCharacterLowercase;
- (id)encodeStringBase64;
- (id)stringByTrimmingCharactersInSetFromFront:(id)arg1;
- (id)stringWithPathRelativeTo:(id)arg1 allowBacktracking:(BOOL)arg2;
- (id)stringWithPathRelativeTo:(id)arg1;
- (id)substringWithComposedCharacterSequencesToFileSystemLength:(unsigned int)arg1;
- (id)substringWithComposedCharacterSequencesToIndex:(unsigned int)arg1;
- (id)stringWithRealpath;
- (BOOL)isChildOfPath:(id)arg1;
- (BOOL)isDescendantOfPath:(id)arg1;
- (id)escapeForIcuRegex;
- (unsigned int)countInstancesOfString:(id)arg1 options:(unsigned int)arg2;
- (id)stringByReplacingInstancesOfCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)stringByRemovingCharactersInSet:(id)arg1 options:(unsigned int)arg2;
- (id)md5Hash;
- (id)stringByFixingBrokenSurrogatePairs;
- (id)stringByUniquingPathInsideDirectory:(id)arg1;
- (id)stringByAddingCSVEscapes;
- (id)stringQuotedIfContainsCharacterSet:(id)arg1;
- (id)stringByExpandingTableFormatting;
@end

