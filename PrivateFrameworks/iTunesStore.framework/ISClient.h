/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSLock;

@interface ISClient : XXUnknownSuperclass {
	NSString* _appleClientApplication;
	NSString* _appleClientVersions;
	NSString* _identifier;
	NSLock* _lock;
	NSString* _mediaLibraryIdentifier;
	NSString* _partnerHeader;
	BOOL _prefersHighQuality;
	NSString* _softwareLibraryIdentifier;
}
@property(retain) NSString* appleClientApplication;
@property(retain) NSString* identifier;
@property(retain) NSString* partnerHeader;
@property(assign) BOOL prefersHighQuality;
@property(retain) NSString* softwareLibraryIdentifier;
@property(readonly, assign) NSString* mediaLibraryIdentifier;
@property(readonly, assign) NSString* appleClientVersions;
+(id)currentClient;
-(id)init;
-(void)dealloc;
-(id)localStoreFrontID;
-(void)_softwareMapInvalidatedNotification:(id)notification;
-(void)_syncDidEndNotification:(id)_sync;
-(BOOL)_defaultPrefersHighQuality;
-(void)_registerForMainThreadNotifications;
@end

