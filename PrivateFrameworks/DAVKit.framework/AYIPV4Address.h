/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVKit-Structs.h"
#import "AYAddress.h"


@interface AYIPV4Address : AYAddress {
	sockaddr_in _saddr;
}
-(id)initWithSockaddrBuffer:(sockaddr*)sockaddrBuffer;
-(id)type;
-(id)addressAsString;
-(int)port;
-(unsigned)_s_addr;
-(BOOL)isLocalAddressConnectingTo:(id)to;
-(id)addressAsData;
-(void)getAddressAsSockAddr:(sockaddr*)addr length:(int*)length;
-(id)URLToAddressWithScheme:(id)scheme andPort:(int)port URI:(id)uri;
-(void)dumpInternal;
@end
