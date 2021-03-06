/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class NSString, SUMediaObject, NSMutableArray;

@interface SUScriptMediaObject : SUScriptObject {
	NSMutableArray* _scriptFunctions;
	unsigned _thumbnailOffset;
}
@property(readonly, assign) NSString* mediaType;
@property(readonly, assign) SUMediaObject* nativeMediaObject;
+(id)webScriptNameForKey:(const char*)key;
+(id)webScriptNameForSelector:(SEL)selector;
-(id)init;
-(id)initWithNativeMediaObject:(id)nativeMediaObject;
-(void)dealloc;
-(void)generateThumbnailWithMaximumSize:(int)maximumSize completionHandler:(id)handler;
-(void)loadLibraryThumbnailWithCompletionHandler:(id)completionHandler;
-(void)saveToLibraryWithCompletionHandler:(id)completionHandler;
-(id)thumbnailWithMaximumSize:(int)maximumSize;
-(id)valueForProperty:(id)property;
-(id)_className;
-(void)_addScriptFunction:(id)function;
-(void)_removeScriptFunction:(id)function;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
@end

