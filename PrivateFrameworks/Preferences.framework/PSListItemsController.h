/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSListController.h"

@class PSSpecifier;

@interface PSListItemsController : PSListController {
	int _rowToSelect;
	BOOL _deferItemSelection;
	BOOL _restrictionList;
	PSSpecifier* _lastSelectedSpecifier;
}
-(void)viewWillAppear:(BOOL)view;
-(void)scrollToSelectedCell;
-(void)setRowToSelect;
-(void)setValueForSpecifier:(id)specifier defaultValue:(id)value;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)view;
-(void)suspend;
-(void)didLock;
-(void)prepareSpecifiersMetadata;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)listItemSelected:(id)selected;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)_addStaticText:(id)text;
-(id)itemsFromParent;
-(id)itemsFromDataSource;
-(id)specifiers;
-(BOOL)isRestrictionList;
-(void)setIsRestrictionList:(BOOL)list;
@end

