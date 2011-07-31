/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@interface CKMediaObjectManager : XXUnknownSuperclass {
	NSMutableDictionary* _mediaObjectDict;
}
+(id)sharedInstance;
-(void)_registerAllMediaTypes;
-(id)newMediaObjectForFilename:(id)filename mimeType:(id)type exportedFilename:(id)filename3;
-(id)newMediaObjectForData:(id)data mimeType:(id)type exportedFilename:(id)filename;
-(Class)mediaObjectClassForMIMEType:(id)mimetype;
-(void)dealloc;
@end
