/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import "VideoConferenceRealTimeChannel.h"
#import "GameKitServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableData, NSDictionary;

__attribute__((visibility("hidden")))
@interface TCPTunnelClient : XXUnknownSuperclass <VideoConferenceRealTimeChannel> {
@private
	BOOL _isConnected;
	int _connectedFD;
	id _handler;
	id _allocationResponseHandler;
	id _terminationHandler;
	id _bindingResponseHandler;
	id _destroyHandler;
	dispatch_queue_s* _outQueue;
	dispatch_queue_s* _inQueue;
	dispatch_source_s* _readSource;
	dispatch_source_s* _timer;
	float _fTimeout;
	NSMutableData* _currentlyReadingMessage;
	int _currentlyReadingDataGoalLength;
	unsigned short _currentMsgType;
	int _currentPadding;
	NSString* _participantID;
	unsigned short _channelNumber;
	opaque_pthread_mutex_t mutex;
	NSDictionary* _reqRespDict;
	NSDictionary* _relayUpdateDict;
	tagIPPORT _serverIPPort;
	int _callID;
}
@property(retain) NSString* participantID;
-(id)initWithRelayRequestDictionary:(id)relayRequestDictionary withCallID:(int)callID;
-(void)destroyDispatchTimer;
-(void)createDispatchTimer:(float)timer withDetailedError:(int)detailedError;
-(BOOL)sendAllocateMsg;
-(BOOL)sendChannelBindingMsgWithDict:(id)dict;
-(BOOL)sendRefreshMsg:(unsigned)msg;
-(void)unbindChannel;
-(void)closeTunnelSocket;
-(BOOL)isTunnelSocketClosed;
-(void)dealloc;
-(void)processSocketRead;
-(void)vcArg:(id)arg sendControlData:(id)data withTimeout:(float)timeout withDetail:(int)detail;
-(void)vcArg:(id)arg sendRealTimeData:(id)data toParticipantID:(id)participantID;
-(void)setReceiveHandler:(id)handler;
-(void)setAllocationResponseHandler:(id)handler;
-(void)setTerminationHandler:(id)handler;
-(void)setBindingResponseHandler:(id)handler;
-(void)setDestroyHandler:(id)handler;
-(void)lock;
-(void)unlock;
-(void)receivedControlData:(id)data;
@end

