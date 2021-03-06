/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKSetPlayerDataRequest.h"

@class NSDictionary, UIColor, NSData, NSString;

@interface GKSetAvatarRequest : GKSetPlayerDataRequest {
@private
	NSData* _data;
	NSDictionary* _description;
	UIColor* _color;
	NSString* _avatarURL;
}
@property(retain, nonatomic) NSData* data;
@property(retain, nonatomic) NSDictionary* description;
@property(readonly, assign, nonatomic) NSString* avatarURL;
@property(retain, nonatomic) UIColor* color;
-(void)dealloc;
-(id)key;
-(id)request;
-(void)handleResponseFromServer:(id)server error:(id)error;
@end

