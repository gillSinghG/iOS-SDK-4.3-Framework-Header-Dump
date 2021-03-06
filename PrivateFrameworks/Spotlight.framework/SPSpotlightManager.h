/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SPSpotlightManager : XXUnknownSuperclass {
	NSString* _displayID;
}
+(id)sharedManager;
-(void)eraseIndexForApplication:(id)application category:(id)category;
-(void)application:(id)application modifiedRecordIDs:(id)ids forCategory:(id)category;
-(void)appModifiedRecordIDs:(id)ids forCategory:(id)category;
-(void)_processIdentifiers:(id)identifiers forApplication:(id)application andCategory:(id)category;
-(void)dealloc;
-(id)init;
@end

