/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/EDKeyedCollection.h>

@interface EDContentFormatsCollection : EDKeyedCollection
{
    unsigned int mNextContentFormatId;
}

- (unsigned int)addOrEquivalentObject:(id)arg1;
- (unsigned int)addObject:(id)arg1;
- (id)init;
- (_Bool)isOverwritingKeyOK;
- (void)addDefaultWithNSString:(id)arg1 formatId:(unsigned int)arg2;
- (void)setupDefaults;

@end

