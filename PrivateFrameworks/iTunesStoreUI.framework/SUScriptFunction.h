/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WebScriptObject, NSLock, NSMutableSet, SUScriptObject;

@interface SUScriptFunction : XXUnknownSuperclass {
	NSMutableSet* _delegates;
	WebScriptObject* _function;
	NSLock* _lock;
	SUScriptObject* _thisObject;
}
@property(assign) SUScriptObject* thisObject;
@property(retain) WebScriptObject* scriptObject;
-(id)init;
-(id)initWithScriptObject:(id)scriptObject;
-(void)dealloc;
-(BOOL)callWithArguments:(id)arguments;
-(BOOL)callWithArguments:(id)arguments delegate:(id)delegate didFinishSelector:(SEL)selector;
-(id)callSynchronouslyWithArguments:(id)arguments;
-(void)lock;
-(void)unlock;
-(void)_callFunction:(id)function withArguments:(id)arguments delegate:(id)delegate;
-(id)_copyAdjustedArgumentsForArguments:(id)arguments;
-(void)_sendResult:(id)result toDelegate:(id)delegate;
@end

