/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSObject.h"
#import "CoreDAVItem.h"

@class NSMutableArray, NSMutableSet, NSString, NSData;

@protocol CoreDAVItem <NSObject>
-(void)parserFoundAttributes:(id)attributes;
-(void)parserFoundPayload:(id)payload;
-(void)parserFoundUnrecognizedElement:(id)element;
-(id)copyParseRules;
-(void)write:(id)write;
-(BOOL)validate;
-(void)parserSuggestsBaseURL:(id)url;
@end

@interface CoreDAVItem : XXUnknownSuperclass <CoreDAVItem> {
	NSString* _name;
	NSString* _nameSpace;
	NSMutableSet* _attributes;
	NSMutableArray* _extraChildItems;
	NSData* _payload;
}
@property(retain) NSString* name;
@property(retain) NSString* nameSpace;
@property(retain) NSMutableSet* attributes;
@property(retain) NSMutableArray* extraChildItems;
@property(retain) NSData* payload;
-(id)init;
-(id)initWithNameSpace:(id)nameSpace andName:(id)name;
-(void)dealloc;
-(id)description;
-(id)hashString;
-(id)copyParseRules;
-(void)parserFoundUnrecognizedElement:(id)element;
-(void)parserFoundPayload:(id)payload;
-(void)parserFoundAttributes:(id)attributes;
-(void)write:(id)write;
-(BOOL)validate;
-(id)payloadAsString;
-(void)setPayloadAsString:(id)string;
-(void)parserSuggestsBaseURL:(id)url;
-(id)generateXMLString;
-(id)generateItemTreeString;
-(id)generateStandardItemStringWithDepth:(unsigned)depth;
-(void)generateItemTreeString:(id)string withDepth:(unsigned)depth;
@end

