/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class NSString;

@interface GKAccountCreatedRequest : GKDataRequest {
@private
	NSString* _playerID;
	NSString* _authToken;
	NSString* _accountName;
	BOOL _authenticateFinished;
}
@property(retain, nonatomic) NSString* playerID;
@property(retain, nonatomic) NSString* authToken;
@property(retain, nonatomic) NSString* accountName;
@property(assign, nonatomic) BOOL authenticateFinished;
-(void)dealloc;
-(id)key;
-(id)request;
-(void)handleResponseFromServer:(id)server error:(id)error;
-(BOOL)authenticationRequired;
-(BOOL)shouldProcessInBackground;
@end
