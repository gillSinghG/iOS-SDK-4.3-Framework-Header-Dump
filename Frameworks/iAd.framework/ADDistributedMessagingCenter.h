/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, ADMessagePort;

@interface ADDistributedMessagingCenter : XXUnknownSuperclass {
	ADMessagePort* _messagePort;
	NSMutableDictionary* _registry;
}
@property(readonly, assign, nonatomic) ADMessagePort* messagePort;
@property(readonly, assign, nonatomic) NSMutableDictionary* registry;
-(void)dealloc;
-(id)initLocalWithName:(id)name;
-(id)initRemoteWithName:(id)name;
-(BOOL)doesServerExist;
-(void)stopServer;
-(void)registerForMessageName:(id)messageName target:(id)target selector:(SEL)selector;
-(void)unregisterForMessageName:(id)messageName;
-(BOOL)sendMessageName:(id)name userInfo:(id)info;
-(id)name;
-(void)messagePort:(id)port receivedMessage:(long)message withData:(id)data;
-(void)messagePortDidInvalidate:(id)messagePort;
@end
