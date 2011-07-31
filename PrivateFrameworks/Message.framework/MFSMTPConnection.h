/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Connection.h"
#import "Message-Structs.h"

@class NSMutableArray, MFSMTPResponse, NSString, NSMutableData;

@interface MFSMTPConnection : Connection {
	MFSMTPResponse* _lastResponse;
	NSMutableArray* _serviceExtensions;
	NSMutableData* _mdata;
	NSString* _domainName;
	NSString* _saveSentMbox;
	int _originalSocketTimeout;
	int _lastCommandTimestamp;
	id _delegate;
	BOOL _hideLoggedData;
	BOOL _useSaveSent;
	BOOL _dislikesSaveSentMbox;
}
+(void)initialize;
-(id)init;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
-(int)state;
-(id)lastResponse;
-(id)domainName;
-(void)setDomainName:(id)name;
-(BOOL)supportsOutboxCopy;
-(BOOL)supportsPipelining;
-(BOOL)supports8BitMime;
-(BOOL)supportsBinaryMime;
-(BOOL)supportsEnhancedStatusCodes;
-(BOOL)supportsChunking;
-(unsigned long long)maximumMessageBytes;
-(id)authenticationMechanisms;
-(BOOL)authenticateUsingAccount:(id)account;
-(BOOL)authenticateUsingAccount:(id)account authenticator:(id)authenticator;
-(BOOL)connectUsingAccount:(id)account;
-(int)mailFrom:(id)from;
-(int)rcptTo:(id)to;
-(int)noop;
-(int)sendBData:(id)data;
-(int)sendData:(id)data;
-(int)quit;
-(void)abort;
-(id)dataForMailFrom:(id)from;
-(id)dataForRcptTo:(id)to;
-(id)dataForDataCmd;
-(int)mailFrom:(id)from recipients:(id)recipients withData:(id)data host:(id)host errorMessage:(id*)message serverResponse:(id*)response displayError:(BOOL*)error errorCode:(int*)code;
-(long)timeLastCommandWasSent;
-(int)_sendBytes:(const char*)bytes length:(unsigned)length;
-(int)_sendData:(id)data;
-(id)_dataForCommand:(const char*)command length:(unsigned)length argument:(id)argument trailer:(const char*)trailer;
-(int)_sendCommand:(const char*)command length:(unsigned)length argument:(id)argument trailer:(const char*)trailer;
-(int)_getReply;
-(int)_readResponseRange:(NSRange*)range isContinuation:(BOOL*)continuation;
-(BOOL)_connectUsingAccount:(id)account;
-(int)_doHandshakeUsingAccount:(id)account;
-(BOOL)_hasParameter:(id)parameter forKeyword:(id)keyword;
-(BOOL)_supportsExtension:(id)extension;
-(void)_setLastResponse:(id)response;
-(id)lastResponseLine;
-(BOOL)_supportsSaveSentExtension;
-(void)setUseSaveSent:(BOOL)sent toFolder:(id)folder;
@end
