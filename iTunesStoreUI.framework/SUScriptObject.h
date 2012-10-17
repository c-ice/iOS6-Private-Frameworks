/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSMutableArray, NSMutableSet, NSString, SUClientInterface, SUScriptNativeObject, SUScriptObjectInvocationBatch, SUWebImagePool, WebFrame;

@interface SUScriptObject : NSObject
{
    NSMutableArray *_eventListeners;
    SUScriptObjectInvocationBatch *_invocationBatch;
    NSLock *_lock;
    SUScriptNativeObject *_nativeObject;
    SUScriptObject *_parentScriptObject;
    NSMutableSet *_scriptObjects;
    unsigned int _checkOutWhenHidden:1;
    unsigned int _isVisible:1;
    NSString *_className;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
- (void)finalizeForWebScript;
@property(readonly) NSMutableArray *scriptAttributeKeys;
- (id)_copyListenersForName:(id)arg1;
- (void)_checkOutAfterVisibilityChange;
@property(readonly, getter=_className) NSString *className;
- (id)stringRepresentation;
- (void)removeListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(BOOL)arg3;
- (BOOL)equals:(id)arg1;
- (void)addListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(BOOL)arg3;
@property(readonly) WebFrame *webFrame;
- (id)viewControllerFactory;
- (void)unlock;
- (void)tearDownUserInterface;
@property(readonly) BOOL sourceIsTrusted;
- (void)setVisible:(BOOL)arg1;
@property SUScriptObject *parentScriptObject;
@property(retain) SUScriptNativeObject *nativeObject;
- (BOOL)scriptObjectIsCheckedIn:(id)arg1;
- (id)parentViewController;
- (id)newImageWithURL:(id)arg1 scale:(float)arg2;
- (id)newImageWithURL:(id)arg1;
- (void)lock;
- (void)loadImageWithURL:(id)arg1 completionBlock:(id)arg2;
- (BOOL)isVisible;
@property(readonly) SUWebImagePool *imagePool;
- (id)DOMElementWithElement:(id)arg1;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(BOOL)arg3;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
@property(readonly) struct OpaqueJSContext *copyJavaScriptContext;
@property(readonly) SUClientInterface *clientInterface;
- (void)checkOutScriptObjects:(id)arg1;
- (void)checkOutScriptObject:(id)arg1;
- (void)checkInScriptObjects:(id)arg1;
- (void)checkInScriptObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)willPerformBatchedInvocations;
- (id)webThreadMainThreadBatchProxy;
- (id)invocationBatch:(BOOL)arg1;
- (void)didPerformBatchedInvocations;
- (void)checkOutBatchTarget:(id)arg1;

@end

