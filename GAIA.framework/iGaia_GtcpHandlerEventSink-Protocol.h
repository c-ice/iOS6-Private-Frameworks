/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol iGaia_GtcpHandlerEventSink
- (void)OnGhClose:(unsigned long)arg1;
- (int)OnGhReceive:(unsigned long)arg1 header:(const struct tGTCP_header *)arg2 payload:(char *)arg3;
- (void)OnGhConnect:(unsigned long)arg1;
@end

