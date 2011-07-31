/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Assistant.framework/Assistant
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AFConnection.h"

@class DKConnection;
@protocol AFAssistantUIService;

@interface AFConnection : XXUnknownSuperclass {
	DKConnection* _connection;
	id<AFAssistantUIService> _delegate;
	int _outstandingRequests;
}
@property(assign, nonatomic) id<AFAssistantUIService> delegate;
+(id)sharedConnection;
-(void)setActiveAccountIdentifier:(id)identifier;
-(id)activeAccount;
-(void)deleteAccountWithIdentifier:(id)identifier;
-(void)registerNewAccount:(id)account completion:(id)completion;
-(void)saveAccount:(id)account;
-(id)accounts;
-(void)clearConversationContext;
-(void)sendGenericAceCommand:(id)command;
-(void)startRequestWithText:(id)text;
-(void)startRequestWithText:(id)text timeout:(double)timeout;
-(void)_cancelRequestTimeout;
-(void)_scheduleRequestTimeout:(double)timeout;
-(void)_invokeRequestTimeout;
-(void)_resetConnection;
-(id)_connection;
-(void)_sendDelegateError:(id)error;
-(void)_sendDelegateCallbackWithReply:(id)reply;
-(void)dealloc;
-(void)cancelConversation;
-(void)startConversationWithDelegate:(id)delegate;
@end

@interface AFConnection (Private)
-(void)_sendMessage:(id)message info:(id)info reply:(id)reply;
@end
