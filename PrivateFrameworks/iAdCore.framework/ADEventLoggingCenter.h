/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import "iAdCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMapTable;

@interface ADEventLoggingCenter : XXUnknownSuperclass {
	NSMapTable* _inflightRequests;
	BOOL _retransmitScheduled;
}
@property(retain, nonatomic) NSMapTable* inflightRequests;
@property(assign) BOOL retransmitScheduled;
@property(readonly, assign) BOOL isIdle;
+(id)sharedCenter;
+(id)allocWithZone:(NSZone*)zone;
-(id)init;
-(id)_URLForRequest:(id)request baseURL:(id)url;
-(id)_sendRequests:(id)requests toURL:(id)url additionalHeaders:(id)headers;
-(void)logEvent:(id)event baseURL:(id)url;
-(void)_considerSchedulingRetransmit;
-(void)_considerPostingDidBecomeIdleNotification;
-(void)requester:(id)requester didReceiveResponse:(id)response forRequest:(id)request;
-(void)requesterDidFinish:(id)requester;
-(void)requester:(id)requester didFailWithError:(id)error;
-(id)copyWithZone:(NSZone*)zone;
-(id)retain;
-(unsigned)retainCount;
-(void)release;
-(id)autorelease;
@end

