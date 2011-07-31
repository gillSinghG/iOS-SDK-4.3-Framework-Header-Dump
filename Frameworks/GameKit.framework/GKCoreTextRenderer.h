/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, NSString, NSAttributedString;

@interface GKCoreTextRenderer : XXUnknownSuperclass {
	NSAttributedString* _attributedText;
	CTFrameRef _textFrame;
	CTFramesetterRef _framesetter;
	id _contentPath;
	float _leading;
	BOOL _shouldQuoteText;
	BOOL _shouldDrawEmoji;
	BOOL _shouldSizeToTextImageBounds;
	BOOL _hasTruncationClusters;
	BOOL _adjustsFontSizeToFitWidth;
	NSString* _truncationSymbol;
	int _numberOfLines;
	float _minimumFontSize;
	int _baselineAdjustment;
	UIColor* _textColor;
	UIColor* _shadowColor;
	CGSize _shadowOffset;
	CGRect _bounds;
}
@property(retain, nonatomic) NSAttributedString* attributedText;
@property(readonly, assign, nonatomic) CTFrameRef textFrame;
@property(readonly, assign, nonatomic) CTFramesetterRef framesetter;
@property(retain, nonatomic) id contentPath;
@property(assign, nonatomic) float leading;
@property(assign, nonatomic) BOOL shouldQuoteText;
@property(assign, nonatomic) BOOL shouldDrawEmoji;
@property(assign, nonatomic) BOOL shouldSizeToTextImageBounds;
@property(assign, nonatomic) BOOL hasTruncationClusters;
@property(assign, nonatomic) BOOL adjustsFontSizeToFitWidth;
@property(copy, nonatomic) NSString* truncationSymbol;
@property(assign, nonatomic) int numberOfLines;
@property(assign, nonatomic) float minimumFontSize;
@property(assign, nonatomic) int baselineAdjustment;
@property(retain, nonatomic) UIColor* textColor;
@property(retain, nonatomic) UIColor* shadowColor;
@property(assign, nonatomic) CGSize shadowOffset;
@property(assign, nonatomic) CGRect bounds;
@property(readonly, assign, nonatomic) float baselineYOffset;
-(id)init;
-(void)dealloc;
-(void)invalidateTextFrame;
-(void)invalidateFramesetter;
-(CGSize)suggestFrameSizeForString:(id)string withConstraints:(CGSize)constraints fitsRange:(XXStruct_K5nmsA*)range;
-(CGSize)suggestFrameSizeWithConstraints:(CGSize)constraints fitsRange:(XXStruct_K5nmsA*)range;
-(id)string:(id)string withCTFont:(CTFontRef)ctfont;
-(id)overallAttribute:(id)attribute forString:(id)string;
-(float)calculatedFontSizeForString:(id)string bounds:(CGRect)bounds;
-(float)lineHeightForFont:(CTFontRef)font;
-(float)lineImageHeightForAttributedString:(id)attributedString;
-(float)lineHeightForAttributedString:(id)attributedString;
-(CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(int)lines adjustForShadow:(BOOL)shadow;
-(CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(int)lines;
-(CTRunRef)truncateLine:(CTLineRef)line removingStringRange:(XXStruct_K5nmsA)range runAttributes:(CFDictionaryRef)attributes truncationSymbol:(id)symbol;
-(void)_drawInContext:(CGContextRef)context drawEmoji:(BOOL)emoji;
-(void)drawInContext:(CGContextRef)context;
@end
