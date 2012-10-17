/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MessageBody.h"

#import "MFCollectingDataConsumer-Protocol.h"

@class MFBufferedDataConsumer, NSData;

@interface _MFOutgoingMessageBody : MessageBody <MFCollectingDataConsumer>
{
    MFBufferedDataConsumer *_consumer;
    NSData *_rawData;
    unsigned long _count;
    BOOL _lastNewLine;
}

- (id)data;
- (void)done;
- (int)appendData:(id)arg1;
- (id)rawData;
- (BOOL)isLastCharacterNewLine;
- (unsigned long)count;
- (void)dealloc;
- (id)init;

@end

