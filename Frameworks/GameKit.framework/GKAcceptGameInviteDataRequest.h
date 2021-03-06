/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class GKInvite, NSDictionary, NSData;

@interface GKAcceptGameInviteDataRequest : GKDataRequest {
@private
	GKInvite* _invite;
	NSData* _connectionData;
	NSDictionary* _acceptGameInviteResponse;
@protected
	unsigned char _inviteVersion;
}
@property(retain, nonatomic) GKInvite* invite;
@property(retain, nonatomic) NSData* connectionData;
@property(retain, nonatomic) NSDictionary* acceptGameInviteResponse;
@property(assign, nonatomic) unsigned char inviteVersion;
-(void)dealloc;
-(id)key;
-(id)header;
-(id)request;
-(void)handleResponseFromServer:(id)server error:(id)error;
@end

