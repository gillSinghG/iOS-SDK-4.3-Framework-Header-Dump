/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface ISDialogButton : XXUnknownSuperclass {
	int _actionType;
	id _parameter;
	NSString* _title;
	int _urlType;
}
@property(assign) int actionType;
@property(retain) id parameter;
@property(retain) NSString* title;
@property(assign) int urlType;
+(id)buttonWithTitle:(id)title;
-(void)dealloc;
-(BOOL)isEqual:(id)equal superficial:(BOOL)superficial;
-(void)loadFromDictionary:(id)dictionary;
-(void)performDefaultActionForDialog:(id)dialog;
-(id)_accountURLForURL:(id)url authenticationContext:(id)context;
-(int)_actionTypeForString:(id)string;
-(void)_openURLWithRequest:(id)request;
-(int)_urlTypeForString:(id)string;
@end
