/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTProfileMessage.h"

@class NSData, NSString, NSNumber;

@interface FTProfileValidateEmailMessage : FTProfileMessage {
	NSString* _email;
	NSData* _pushToken;
	NSNumber* _onlyCheck;
}
@property(copy) NSString* emailAddress;
@property(copy) NSData* pushToken;
@property(copy) NSNumber* onlyCheck;
-(void)dealloc;
-(id)bagKey;
-(id)requiredKeys;
-(id)messageBody;
@end

