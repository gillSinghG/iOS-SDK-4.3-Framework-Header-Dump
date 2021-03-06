/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSMutableString.h"
#import "Foundation-Structs.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface __NSLocalizedString : NSMutableString {
@private
	NSMutableString* original;
	NSDictionary* config;
}
-(id)initWithString:(id)string withFormatConfiguration:(id)formatConfiguration;
-(id)formatConfiguration;
-(id)baseString;
-(unsigned)length;
-(unsigned short)characterAtIndex:(unsigned)index;
-(void)dealloc;
-(void)getCharacters:(unsigned short*)characters range:(NSRange)range;
-(id)substringFromIndex:(unsigned)index;
-(id)substringToIndex:(unsigned)index;
-(id)substringWithRange:(NSRange)range;
-(int)compare:(id)compare options:(unsigned)options range:(NSRange)range locale:(id)locale;
-(BOOL)isEqualToString:(id)string;
-(const unsigned short*)_fastCharacterContents;
-(const char*)_fastCStringContents:(BOOL)contents;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(void)replaceCharactersInRange:(NSRange)range withString:(id)string;
-(void)insertString:(id)string atIndex:(unsigned)index;
-(void)appendString:(id)string;
-(void)deleteCharactersInRange:(NSRange)range;
-(void)appendFormat:(id)format;
-(void)setString:(id)string;
-(void)appendCharacters:(const unsigned short*)characters length:(unsigned)length;
-(unsigned)replaceOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;
@end

