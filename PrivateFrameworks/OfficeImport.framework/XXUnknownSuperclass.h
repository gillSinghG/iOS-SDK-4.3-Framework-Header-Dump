/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (EMBordersPropertyCache)
-(id)addToCacheAndReturnCssString:(id)cacheAndReturnCssString;
@end

@interface XXUnknownSuperclass (CSVStringExtensions)
-(id)_createCsvRows:(unsigned*)rows usingDelimiter:(id)delimiter columnCountIsConstant:(BOOL*)constant;
-(id)createCsvRows:(unsigned*)rows;
@end

@interface XXUnknownSuperclass (OINSAppKitAdditons)
-(id)transformBezierPath:(id)path;
-(void)concatInContext:(CGContextRef)context;
@end

@interface XXUnknownSuperclass (NSStringAppKitStubAdditions)
-(double)oi_sizeWithFontName:(id)fontName size:(int)size;
-(double)oi_sizeWithFontName:(id)fontName size:(int)size bold:(bool)bold italic:(bool)italic;
-(double)oi_realSizeWithFontName:(id)fontName size:(int)size bold:(bool)bold italic:(bool)italic;
-(NSRange)oi_rangeOfCharactersFromSet:(id)set index:(int)index;
@end

@interface XXUnknownSuperclass (OCPURLAdditions)
+(id)URLWithPackagePart:(id)packagePart;
-(id)initWithPackagePart:(id)packagePart;
-(BOOL)isInternalToPackage;
@end

@interface XXUnknownSuperclass (OCMutableDataAdditions)
-(void)appendLELong:(long)aLong;
-(void)replaceBytesInRange:(NSRange)range withLELong:(long)lelong;
-(void)appendLEShort:(short)aShort;
-(void)appendString:(id)string encoding:(unsigned)encoding;
@end

@interface XXUnknownSuperclass (OCStringAdditions)
+(id)mapString:(id)string;
+(bool)skipString:(id)string;
@end

@interface XXUnknownSuperclass (WBAdditions)
+(id)dateWithWordDate:(const WrdDateTime*)wordDate;
-(void)copyToWordDate:(WrdDateTime*)wordDate;
@end

@interface XXUnknownSuperclass (WBDataAdditions)
+(id)nsDataWithOcBinaryData:(const OcBinaryData*)ocBinaryData;
@end

@interface XXUnknownSuperclass (CPCharacterSetAdditions)
+(id)CJKCharacterSet;
@end

@interface XXUnknownSuperclass (CPMessageEntryAdditions)
-(void)addMessageEntry:(id)entry;
@end

@interface XXUnknownSuperclass (CPMutableArrayAdditions)
-(id)top;
-(void)push:(id)push;
-(id)pop;
@end

@interface XXUnknownSuperclass (NSValueCGGeometryExtensions)
+(id)valueWithCGPoint:(CGPoint)cgpoint;
+(id)valueWithCGSize:(CGSize)cgsize;
+(id)valueWithCGRect:(CGRect)cgrect;
-(CGPoint)cgPointValue;
-(CGSize)cgSizeValue;
-(CGRect)cgRectValue;
@end

@interface XXUnknownSuperclass (CPStringAdditions_XmlString)
+(id)stringWithXmlString:(const char*)xmlString;
-(id)initWithXmlString:(const char*)xmlString;
-(const char*)xmlString;
-(id)initWithValueOfXmlAttribute:(xmlAttr*)xmlAttribute;
-(id)initWithContentOfXmlNode:(xmlNode*)xmlNode;
-(id)initFromXmlNode:(xmlNode*)xmlNode ns:(const char*)ns attributeName:(const char*)name;
-(id)componentsSeparatedByWhitespace;
@end

@interface XXUnknownSuperclass (CPStringAdditions)
-(BOOL)replaceSubstr:(id)substr with:(id)with;
-(BOOL)replaceSubstr:(id)substr with:(id)with range:(NSRange)range;
-(void)replaceAllSubstr:(id)substr with:(id)with;
-(void)replaceAllSubstr:(id)substr with:(id)with escStr:(id)str;
-(void)replaceAllSubstr:(id)substr with:(id)with range:(NSRange)range;
-(void)replaceAllSubstr:(id)substr with:(id)with escStr:(id)str range:(NSRange)range;
@end

@interface XXUnknownSuperclass (CPStringAdditions)
+(id)stringWithBytes:(const void*)bytes length:(unsigned)length codePointMapper:(/*function-pointer*/ void*)mapper;
+(id)stringWithBytes:(const void*)bytes length:(unsigned)length fontFamilyName:(id)name;
-(id)stringByFixingSymbolCharacters;
-(BOOL)startsWithString:(id)string;
@end

@interface XXUnknownSuperclass (SFAAdditions)
+(id)stringWithXmlChars:(const char*)xmlChars;
-(id)initWithXmlChars:(const char*)xmlChars;
-(id)initFromXmlNode:(xmlNode*)xmlNode attribute:(const char*)attribute ns:(const xmlNs*)ns;
@end

@interface XXUnknownSuperclass (SFUFormatStringUtilities)
+(id)numberSymbols;
-(id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;
-(BOOL)isNumberFormatPattern;
-(id)createRangesOfEscapedCharactersInNumberFormatPattern;
-(id)stringByRemovingEscapedCharactersFromNumberFormatPattern;
-(int)indexOfNumberFormatSubpatternSeparator;
-(id)positiveSubpatternOfNumberFormatPattern;
-(id)negativeSubpatternOfNumberFormatPattern;
-(id)numberPortionOfNumberFormatSubpattern;
-(int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
-(id)suffixOfNumberFormatSubpattern;
-(int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
-(id)prefixOfNumberFormatSubpattern;
@end

@interface XXUnknownSuperclass (TSUAdditions)
+(BOOL)overridesSelector:(SEL)selector ofBaseClass:(Class)baseClass;
@end

@interface XXUnknownSuperclass (TSUFormatStringUtilities)
+(id)numberSymbols;
-(id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;
-(BOOL)isNumberFormatPattern;
-(id)createRangesOfEscapedCharactersInNumberFormatPattern;
-(id)stringByRemovingEscapedCharactersFromNumberFormatPattern;
-(int)indexOfNumberFormatSubpatternSeparator;
-(id)positiveSubpatternOfNumberFormatPattern;
-(id)negativeSubpatternOfNumberFormatPattern;
-(id)numberPortionOfNumberFormatSubpattern;
-(int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
-(id)suffixOfNumberFormatSubpattern;
-(int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
-(id)prefixOfNumberFormatSubpattern;
@end

@interface XXUnknownSuperclass (WideStringCat)
+(id)stringWithWideCString:(int*)wideCString;
-(id)initWithWideCString:(int*)wideCString;
-(int*)cWideString;
@end

@interface XXUnknownSuperclass (OCBStringAdditions)
+(id)stringWithCsString:(const CsString*)csString;
+(id)stringWithOcText:(const OcText*)ocText;
-(id)initWithCsString:(const CsString*)csString;
-(id)initWithOcText:(const OcText*)ocText;
-(id)dataUsingWordEncoding:(int)encoding;
-(void)copyToCsString:(CsString*)csString;
-(void)copyToOcText:(OcText*)ocText;
-(void)copyToOcText:(OcText*)ocText encoding:(int)encoding;
-(int)languageTypeAtIndex:(unsigned)index effectiveRange:(NSRange*)range;
@end

