/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "MFRequestQueue.h"

@class NSString, DAMailAccount;

@interface DARequestQueue : MFRequestQueue {
	DAMailAccount* account;
	NSString* folderID;
	double _invalidSyncKeyTimestamp;
}
-(id)initWithAccount:(id)account folderID:(id)anId;
-(id)filterRequests:(id)requests consumers:(id)consumers newConsumers:(id*)consumers3;
-(void)_processRequests:(id)requests withConsumers:(id)consumers;
-(void)processRequests:(id)requests consumers:(id)consumers;
-(void)dealloc;
@end
