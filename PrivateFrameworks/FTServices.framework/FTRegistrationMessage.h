/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSDictionary, NSString, NSArray;

@interface FTRegistrationMessage : FTMessage {
	NSArray* _supportedProtocols;
	NSDictionary* _aliasInfo;
	NSString* _responseSignature;
	NSString* _responseUserID;
	NSDictionary* _responseAliasInfo;
}
@property(copy) NSArray* supportedProtocols;
@property(copy) NSDictionary* aliasInfo;
@property(copy) NSString* responseSignature;
@property(copy) NSString* responseUserID;
@property(copy) NSDictionary* responseAliasInfo;
-(void)dealloc;
-(id)additionalMessageHeaders;
-(id)bagKey;
-(id)requiredKeys;
-(id)messageBody;
-(void)handleResponseDictionary:(id)dictionary;
@end
