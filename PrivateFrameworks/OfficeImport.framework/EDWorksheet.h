/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDWorksheet.h"
#import "EDSheet.h"

@class SFUPointerKeyDictionary, EDMergedCellCollection, EDPane, EDRowBlocks, EDReference, EDCollection, EDWarnings, EDColumnInfoCollection;

__attribute__((visibility("hidden")))
@interface EDWorksheet : EDSheet {
@private
	EDRowBlocks* mRowBlocks;
	EDColumnInfoCollection* mColumnInfos;
	EDCollection* mConditionalFormattings;
	EDCollection* mHyperlinks;
	EDCollection* mTables;
	EDCollection* mPivotTables;
	EDMergedCellCollection* mMergedCells;
	EDPane* mPane;
	EDWarnings* mWorksheetWarnings;
	double mDefaultColumnWidth;
	unsigned short mDefaultRowHeight;
	unsigned mMaxRowOutlineLevel;
	unsigned mMaxColumnOutlineLevel;
	bool mFitToPage;
	EDReference* mMaxCellReferencedInFormulas;
	SFUPointerKeyDictionary* mMergedRows;
	SFUPointerKeyDictionary* mMergedCols;
	EDReference* mImplicitCellArea;
}
-(double)defaultColumnWidth;
-(void)setDefaultColumnWidth:(double)width;
-(unsigned short)defaultRowHeight;
-(void)setDefaultRowHeight:(unsigned short)height;
-(bool)fitToPage;
-(void)setFitToPage:(bool)page;
-(id)rowBlocks;
-(id)columnInfos;
-(id)conditionalFormattings;
-(id)hyperlinks;
-(id)tables;
-(id)pivotTables;
-(id)mergedCells;
-(id)pane;
-(void)setPane:(id)pane;
-(id)worksheetWarnings;
@end

@interface EDWorksheet (EDExportOnly)
-(id)implicitCellArea;
-(void)setImplicitCellArea:(id)area;
@end

@interface EDWorksheet (EDImportOnly)
-(id)maxCellReferencedInFormulas;
@end

@interface EDWorksheet (EDInternal)
-(void)setup;
-(void)teardown;
-(unsigned)maxRowOutlineLevel;
-(void)setMaxRowOutlineLevel:(unsigned)level;
-(void)updateMaxRowOutlineLevelIfNeeded:(unsigned)needed;
-(unsigned)maxColumnOutlineLevel;
-(void)setMaxColumnOutlineLevel:(unsigned)level;
-(void)updateMaxColumnOutlineLevelIfNeeded:(unsigned)needed;
-(void)setMergedRowsRef:(id)ref from:(unsigned)from to:(unsigned)to;
-(void)setMergedColsRef:(id)ref from:(unsigned)from to:(unsigned)to;
-(BOOL)hasMergedRow;
-(BOOL)isRowMerged:(unsigned)merged;
-(id)mergedRowRef:(unsigned)ref;
-(BOOL)hasMergedCol;
-(BOOL)isColMerged:(unsigned)merged;
-(id)mergedColRef:(unsigned)ref;
@end

@interface EDWorksheet (EDDomPersistence)
-(void)reduceMemoryIfPossible;
@end
