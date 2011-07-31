/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import "SPSearchResult.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface ExtendedSearchResult : XXUnknownSuperclass <SPSearchResult> {
	void* _content;
	unsigned _domain;
	unsigned _resultDomain;
	NSString* _resultDisplayID;
	NSString* _query;
}
-(int)domain;
-(int)resultDomain;
-(const char*)URLUTF8String;
-(unsigned long long)identifier;
-(const char*)auxiliarySubtitleUTF8String;
-(const char*)auxiliaryTitleUTF8String;
-(const char*)summaryUTF8String;
-(const char*)subtitleUTF8String;
-(const char*)titleUTF8String;
-(const char*)resultDisplayIdentifierUTF8String;
-(void)dealloc;
-(id)initWithContent:(void*)content inDomain:(unsigned)domain withResultDomain:(unsigned)resultDomain resultDisplayIdentifier:(id)identifier query:(id)query;
-(id)initWithContent:(void*)content inDomain:(unsigned)domain query:(id)query;
@end
