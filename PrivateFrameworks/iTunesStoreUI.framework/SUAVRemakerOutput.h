/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStoreUI-Structs.h"

@class NSURL, NSString, NSDictionary;

@interface SUAVRemakerOutput : XXUnknownSuperclass <NSCopying> {
	dispatch_queue_s* _dispatchQueue;
	NSURL* _mediaURL;
	NSString* _remakerMode;
	NSDictionary* _remakerOptions;
}
@property(copy) NSDictionary* remakerOptions;
@property(copy) NSString* remakerMode;
@property(copy) NSURL* mediaFileURL;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
@end

