/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISURLOperation.h"

@class NSNumber;
@protocol ISStoreURLOperationDelegate;

@interface ISStoreURLOperation : ISURLOperation {
	NSNumber* _authenticatedDSID;
	BOOL _needsAuthentication;
	BOOL _needsURLBag;
	BOOL _urlKnownToBeTrusted;
	BOOL _useUserSpecificURLBag;
}
@property(assign) id<ISStoreURLOperationDelegate> delegate;
@property(retain) NSNumber* authenticatedDSID;
@property(assign) BOOL needsAuthentication;
@property(assign) BOOL needsURLBag;
@property(assign) BOOL urlKnownToBeTrusted;
@property(assign) BOOL useUserSpecificURLBag;
+(void)addITunesStoreHeadersToRequest:(id)request;
+(void)handleITunesStoreResponseHeaders:(id)headers;
+(id)itemPingOperationWithIdentifier:(unsigned long long)identifier urlBagKey:(id)key;
+(id)pingOperationWithUrl:(id)url;
+(id)propertyListOperationWithURLBagKey:(id)urlbagKey;
+(void)_addITunesStoreHeadersToRequest:(id)request withBagContext:(id)bagContext;
+(id)_restrictionsHeaderValue;
-(id)init;
-(void)dealloc;
-(id)authenticatedAccountDSID;
-(BOOL)handleRedirectFromDataProvider:(id)dataProvider;
-(void)handleResponse:(id)response;
-(id)newRequestWithURL:(id)url;
-(void)run;
-(BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id*)error;
-(id)_account;
-(void)_addStandardQueryParametersForURL:(id)url;
-(BOOL)_authenticateReturningError:(id*)error;
-(BOOL)_canSendTokenToURL:(id)url;
-(id)_copyURLBagContext;
-(void)_runURLOperation;
-(id)_urlFromURLBagForRequestProperties:(id)requestProperties inBagContext:(id)bagContext;
@end

