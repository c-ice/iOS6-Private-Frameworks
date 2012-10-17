/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AssistantCallbackUIDelegateResult-Protocol.h"

@interface AssistantCallbackController : NSObject <AssistantCallbackUIDelegateResult>
{
    BOOL _saveScanState;
    id _uiDelegate;
    struct AssistantCallbackContext *_callbackContext;
}

+ (long)removeKeychainPasswordForBaseStation:(id)arg1;
+ (id)keychainPasswordForBaseStation:(id)arg1;
+ (long)updateKeychainBasePassword:(id)arg1 forMACAddress:(id)arg2 withBaseName:(id)arg3;
+ (long)updateKeychainNetworkPassword:(id)arg1 forNetworkNamed:(id)arg2;
@property(nonatomic) id <AssistantCallbackUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
- (void)callbackAskUserAQuestionResult:(int)arg1 result:(long)arg2;
- (void)callbackAskUserToChooseFromStringListResult:(long)arg1 selectedString:(id)arg2;
- (void)callbackAskUserForPasswordResult:(long)arg1 password:(id)arg2;
- (long)subclassAssistantCallback:(struct AssistantCallbackContext *)arg1;
- (void *)assistantCallback;
- (void)dealloc;
- (id)init;
- (void)directedScanDone:(id)arg1;
- (void)scanForNetworksDone:(id)arg1;
- (long)startScanForNetworks;
- (long)startDirectedScan:(id)arg1 waitingForNetwork:(BOOL)arg2;
- (void)joinNetworkDone:(id)arg1;
- (long)startJoinNetwork:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3;
- (void)userResponseToWarning:(long)arg1;
- (void)userResponseToJoinNetwork:(long)arg1;
- (long)assistantCallback:(struct AssistantCallbackContext *)arg1 withSelector:(int)arg2;

@end

