/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperationQueue;

@interface ISOperationQueue : XXUnknownSuperclass {
	NSOperationQueue* _queue;
}
+(BOOL)isActive;
+(id)mainQueue;
-(id)init;
-(void)dealloc;
-(void)addOperation:(id)operation;
-(void)cancelAllOperations;
-(id)operations;
-(void)setMaxConcurrentOperationCount:(int)count;
-(void)setSuspended:(BOOL)suspended;
@end
