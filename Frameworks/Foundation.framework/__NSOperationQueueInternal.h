/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperation;

__attribute__((visibility("hidden")))
@interface __NSOperationQueueInternal : XXUnknownSuperclass {
@private
	dispatch_queue_s* __dispatchQ;
	dispatch_semaphore_s* __poker;
	NSOperation* __firstOperation;
	NSOperation* __lastOperation;
	NSOperation* __pendingFirstOperation;
	NSOperation* __pendingLastOperation;
	int __pendingAddLock;
	int __maxNumOps;
	int __actualMaxNumOps;
	int __numExecOps;
	int __outerRC;
	unsigned char __mainQ;
	unsigned char __suspended;
	BOOL __nameBuffer[165];
}
-(id)init;
-(void)dealloc;
-(void)finalize;
@end
