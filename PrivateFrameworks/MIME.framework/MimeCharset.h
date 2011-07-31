/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface MimeCharset : XXUnknownSuperclass {
	unsigned _encoding;
	NSString* _primaryLanguage;
	NSString* _charsetName;
	unsigned _coversLargeUnicodeSubset : 1;
	unsigned _useBase64InHeaders : 1;
	unsigned _canBeUsedForOutgoingMessages : 1;
}
+(id)allMimeCharsets:(BOOL)charsets;
+(id)allMimeCharsets;
+(id)charsetForEncoding:(unsigned long)encoding;
+(id)preferredMimeCharset;
-(id)initWithEncoding:(unsigned long)encoding;
-(void)_setPrimaryLanguage:(id)language;
-(void)dealloc;
-(unsigned long)encoding;
-(id)charsetName;
-(BOOL)canBeUsedForOutgoingMessages;
-(BOOL)coversLargeUnicodeSubset;
-(BOOL)useBase64InHeaders;
-(id)displayName;
-(id)primaryLanguage;
-(id)description;
@end
