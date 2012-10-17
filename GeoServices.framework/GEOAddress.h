/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEOStructuredAddress, NSMutableArray;

@interface GEOAddress : PBCodable
{
    NSMutableArray *_formattedAddressLines;
    int _formattedAddressType;
    GEOStructuredAddress *_structuredAddress;
    struct {
        unsigned int formattedAddressType:1;
    } _has;
}

@property(retain, nonatomic) GEOStructuredAddress *structuredAddress; // @synthesize structuredAddress=_structuredAddress;
@property(retain, nonatomic) NSMutableArray *formattedAddressLines; // @synthesize formattedAddressLines=_formattedAddressLines;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasFormattedAddressType;
@property(nonatomic) int formattedAddressType; // @synthesize formattedAddressType=_formattedAddressType;
@property(readonly, nonatomic) BOOL hasStructuredAddress;
- (id)formattedAddressLineAtIndex:(unsigned int)arg1;
- (unsigned int)formattedAddressLinesCount;
- (void)addFormattedAddressLine:(id)arg1;
- (void)clearFormattedAddressLines;
- (void)dealloc;
- (id)addressDictionary;
- (id)initWithAddressString:(id)arg1;

@end

