/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <Foundation/NSPropertyListSerialization.h>

@class NSDictionary, NSData, NSDate, NSString, NSArray;

@interface FTMessage : NSPropertyListSerialization {
	NSDictionary* _userInfo;
	NSData* _serviceData;
	NSDictionary* _clientInfo;
	NSData* _sessionToken;
	NSDate* _creationDate;
}
@property(copy) NSDictionary* clientInfo;
@property(copy) NSData* serviceData;
@property(copy) NSData* sessionToken;
@property(copy) NSDictionary* userInfo;
@property(readonly, assign) NSDate* creationDate;
@property(readonly, assign) NSDictionary* additionalMessageHeaders;
@property(readonly, assign) NSDictionary* messageBody;
@property(readonly, assign) NSArray* requiredKeys;
@property(readonly, assign) NSString* bagKey;
@property(readonly, assign) BOOL payloadCanBeLogged;
@property(readonly, assign) BOOL isValidMessage;
@property(readonly, assign) BOOL hasRequiredKeys;
-(id)init;
-(void)dealloc;
-(void)handleResponseDictionary:(id)dictionary;
@end
