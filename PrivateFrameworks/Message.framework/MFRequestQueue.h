/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSConditionLock;

@interface MFRequestQueue : XXUnknownSuperclass {
	NSConditionLock* _condition;
	NSMutableArray* _requests;
	NSMutableArray* _consumers;
	unsigned _waitingOutside;
	unsigned _waitingInside;
}
-(id)init;
-(void)addRequest:(id)request consumer:(id)consumer;
-(void)willAddRequests:(id)requests consumers:(id)consumers;
-(void)addRequests:(id)requests consumers:(id)consumers;
-(void)processRequest:(id)request consumer:(id)consumer;
-(void)_processRequests:(id)requests consumers:(id)consumers;
-(void)processRequests:(id)requests consumers:(id)consumers;
-(void)dealloc;
@end

