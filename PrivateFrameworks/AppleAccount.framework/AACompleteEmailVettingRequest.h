/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAEmailVettingRequest.h"

@class NSString;

@interface AACompleteEmailVettingRequest : AAEmailVettingRequest {
	NSString* _token;
}
+(Class)responseClass;
-(id)initWithURLString:(id)urlstring account:(id)account token:(id)token;
-(void)dealloc;
-(id)bodyDictionary;
@end
