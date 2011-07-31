/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData, NSMutableArray, NSMutableDictionary, NSArray, RTFTextTable;

__attribute__((visibility("hidden")))
@interface RTFReaderState : XXUnknownSuperclass {
@private
	id _delegate;
	unsigned _defaultToUniCharEncoding;
	NSMutableDictionary* _documentInfoDictionary;
	CGSize _paperSize;
	float _lMargin;
	float _rMargin;
	float _bMargin;
	float _tMargin;
	CGSize _viewSize;
	int _viewScale;
	int _viewKind;
	NSMutableArray* _attributesStack;
	NSMutableDictionary* _curAttributes;
	unsigned _level;
	NSAttributeInfo _attributeInfo;
	NSMutableData* _attributeInfoStack;
	int _tableNestingLevel;
	BOOL _isRTLDocument;
	NSArray* _textBlocks;
	NSMutableArray* _nestedTables;
	RTFTextTable* _currentTable;
	RTFTextTable* _previousTable;
	NSMutableArray* _currentRowArray;
	NSMutableArray* _previousRowArray;
	int _currentRow;
	int _currentColumn;
	int _currentDefinitionColumn;
	BOOL _currentRowIsLast;
	BOOL _setTableCells;
	unsigned _currentBorderEdge;
	BOOL _currentBorderIsTable;
	NSMutableDictionary* _listDefinitions;
	int _currentListNumber;
	int _currentListLevel;
}
-(id)initWithDelegate:(id)delegate;
-(void)dealloc;
-(void)pushState;
-(void)popState;
-(id)documentInfoDictionary;
-(void)setPaperSize:(CGSize)size;
-(CGSize)paperSize;
-(void)setLeftMargin:(float)margin;
-(float)leftMargin;
-(void)setRightMargin:(float)margin;
-(float)rightMargin;
-(void)setTopMargin:(float)margin;
-(float)topMargin;
-(void)setBottomMargin:(float)margin;
-(float)bottomMargin;
-(void)setViewSize:(CGSize)size;
-(CGSize)viewSize;
-(void)setViewKind:(int)kind;
-(void)setViewScale:(int)scale;
-(id)mutableAttributes;
-(id)currentAttributes;
-(unsigned)level;
-(void)setDefaultToUniCharEncoding:(unsigned long)uniCharEncoding;
-(unsigned long)defaultToUniCharEncoding;
-(void)setToUniCharEncoding:(unsigned long)uniCharEncoding;
-(unsigned long)toUniCharEncoding;
-(void)setCodePageEncoding:(unsigned long)encoding;
-(unsigned long)codePageEncoding;
-(void)setMultiByteEncoding:(BOOL)encoding;
-(BOOL)multiByteEncoding;
-(void)setUnicodeAlternativeLength:(unsigned)length;
-(unsigned)unicodeAlternativeLength;
-(void)setFontIsValid:(BOOL)valid;
-(void)setBold:(BOOL)bold;
-(BOOL)bold;
-(void)setItalic:(BOOL)italic;
-(BOOL)italic;
-(void)setFont:(id)font;
-(id)font;
-(void)setFontSize:(float)size;
-(float)fontSize;
-(void)setHasWritingDirectionAttribute:(BOOL)attribute;
-(BOOL)hasWritingDirectionAttribute;
-(void)setBaseWritingDirection:(int)direction;
-(int)baseWritingDirection;
-(void)setTextAlignment:(int)alignment;
-(id)attributeForKey:(id)key;
-(void)setAttribute:(id)attribute forKey:(id)key;
-(void)removeAttributeForKey:(id)key;
-(id)defaultParagraphStyle;
-(id)mutableParagraphStyle;
-(id)currentParagraphStyle;
-(void)startParagraph;
-(void)endParagraph;
-(void)processString:(id)string;
-(void)_updateAttributes;
-(void)paragraphInTable;
-(void)setTableFlags:(unsigned)flags;
-(BOOL)currentTableCellIsPlaceholder;
-(void)_ensureTableCells;
-(void)_beginTableRow;
-(id)currentTable;
-(id)currentTableCell;
-(unsigned)currentBorderEdge;
-(BOOL)currentBorderIsTable;
-(BOOL)_currentTableCellIsPlaceholder;
-(void)_setCurrentBorderEdge:(unsigned)edge isTable:(BOOL)table;
-(void)_pushTableState;
-(void)_popTableState;
-(void)_setTableCells;
-(void)_clearTableCells;
-(void)setTableNestingLevel:(int)level;
-(void)startTableRowDefinition;
-(void)endTableCellDefinition;
-(void)_paragraphInTable;
-(void)endTableCell;
-(void)lastTableRow;
-(BOOL)isLastTableRow;
-(void)endTableRow;
-(void)mergeTableCellsHorizontally;
-(void)mergeTableCellsVertically;
-(void)setCurrentBorderEdge:(unsigned)edge isTable:(BOOL)table;
-(int)currentListNumber;
-(void)setCurrentListNumber:(int)number;
-(int)currentListLevel;
-(void)setCurrentListLevel:(int)level;
-(id)listDefinitions;
-(void)addListDefinition:(id)definition forKey:(int)key;
-(void)addOverride:(int)override forKey:(int)key;
-(void)_notifyProcessString:(id)string;
-(void)_notifyStartParagraph;
-(void)_notifyEndParagraph;
-(void)_notifyStartTable;
-(void)_notifyEndTable;
-(void)_notifyStartTableRow;
-(void)_notifyEndTableRow;
-(void)_notifyStartTableCell;
-(void)_notifyEndTableCellWithCell:(id)cell;
@end
