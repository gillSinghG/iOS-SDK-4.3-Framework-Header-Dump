/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet;

@interface SUClientQueueSession : XXUnknownSuperclass {
	int _count;
	NSSet* _downloadKinds;
	id _queue;
}
@property(assign, nonatomic) int count;
@property(retain, nonatomic) NSSet* downloadKinds;
@property(retain, nonatomic) id queue;
-(id)initWithQueue:(id)queue;
-(void)dealloc;
@end
