/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "_UITableViewUpdateSupport.h"
#import "UIKit-Structs.h"

@class NSMutableArray, NSMutableIndexSet, UITableView, UITableViewRowData, NSArray;

__attribute__((visibility("hidden")))
@interface _UITableViewUpdateSupport : XXUnknownSuperclass {
@private
	int oldSection;
	int newSection;
	int oldGlobalRow;
	int newGlobalRow;
	UITableView* tableView;
	NSRange visibleRows;
	NSArray* updateItems;
	UITableViewRowData* oldRowData;
	UITableViewRowData* newRowData;
	NSRange oldRowRange;
	NSRange newRowRange;
	NSMutableIndexSet* rows;
	CGRect oldTableViewVisibleBounds;
	CGRect newTableViewVisibleBounds;
	CGRect tableViewVisibleBoundsUnion;
	float tableViewVisibleBoundsOffset;
	int oldSectionCount;
	int newSectionCount;
	int* oldSectionMap;
	int* newSectionMap;
	int oldGlobalRowCount;
	int newGlobalRowCount;
	int* oldGlobalRowMap;
	int* newGlobalRowMap;
	UIView** animatedCells;
	UIView** animatedHeaders;
	UIView** animatedFooters;
	int globalReorderingRow;
	id _context;
	NSMutableArray* viewAnimations;
	NSMutableArray* deletedSections;
	NSMutableArray* insertedSections;
}
-(id)initWithTableView:(id)tableView updateItems:(id)items oldRowData:(id)data newRowData:(id)data4 oldRowRange:(NSRange)range newRowRange:(NSRange)range6 context:(id)context;
-(void)dealloc;
@end

@interface _UITableViewUpdateSupport (Private)
-(void)_validateAnimatedCells;
-(BOOL)_isReloadSectionUpdate;
-(void)_computeVisibleBounds;
-(void)_computeSectionUpdates;
-(void)_computeRowUpdates;
-(void)_setupAnimationStructures;
-(void)_setupAnimationsForExistingVisibleCells;
-(void)_setupAnimationForReorderingRow;
-(void)_setupAnimationsForNewlyInsertedCells;
-(void)_setupAnimationsForInsertedHeadersAndFooters;
-(void)_setupInsertAnimationForHeaderInSection:(int)section withTargetRect:(CGRect)targetRect forUpdateItem:(id)updateItem;
-(void)_setupInsertAnimationForFooterInSection:(int)section withTargetRect:(CGRect)targetRect forUpdateItem:(id)updateItem;
-(id)_imageViewForView:(id)view;
-(void)_addBottomShadowViewViewForViewAnimation:(id)viewAnimation;
-(void)_setupAnimationsForDeletedCells;
-(void)_setupAnimationsForDeletedHeadersAndFooters;
-(void)_setupDeleteAnimationForHeaderInSection:(int)section withTargetRect:(CGRect)targetRect forUpdateItem:(id)updateItem;
-(void)_setupDeleteAnimationForFooterInSection:(int)section withTargetRect:(CGRect)targetRect forUpdateItem:(id)updateItem;
-(void)_setupAnimationsForExistingOffscreenCells;
-(void)_setupAnimationsForExistingHeadersAndFooters;
-(void)_setupAnimationForTableHeader;
-(void)_setupAnimationForTableFooter;
@end

