/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptViewControllerNativeObject.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"


@interface SUScriptABPeoplePickerNativeObject : SUScriptViewControllerNativeObject <ABPeoplePickerNavigationControllerDelegate> {
}
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(void)_dispatchPickEventWithPerson:(void*)person property:(int)property identifier:(int)identifier;
@end
