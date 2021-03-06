/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "NSObject.h"


@protocol ABPersonEditDelegate <NSObject>
@optional
-(void)person:(void*)person propertyDidChange:(int)property;
-(void)notesFieldWillBecomeFirstResponderForPerson:(void*)notesField;
-(void)notesFieldDidResignFirstResponderForPerson:(void*)notesField;
-(void)personHeaderViewHeightDidChange:(void*)personHeaderViewHeight;
-(void)personScrollViewWillBeginDragging:(void*)personScrollView;
-(void)person:(void*)person tableViewTouchesBegan:(id)began withEvent:(id)event;
-(void)personWasDeleted;
-(void)nameUpdatedForPerson:(void*)person;
-(void)linksUpdatedForPerson:(void*)person;
-(void)imageUpdatedForPerson:(void*)person;
-(void)willShowDeleteButtonAtIndexPath:(id)indexPath;
-(void)didRemoveDeleteButtonAtIndexPath:(id)indexPath;
-(void)preferredPersonDidChangeToPerson:(void*)preferredPerson;
-(void)insertProperty:(int*)property insertValue:(id*)value insertLabel:(id*)label;
-(BOOL)personViewController:(id)controller shouldContinueAfterEditingConfirmed:(BOOL)confirmed forPerson:(void*)person;
-(void)personViewControllerIsGoingAway:(id)away;
-(CGSize)adjustedPopoverContentSizeForPersonView:(id)personView suggestedSize:(CGSize)size;
@end

