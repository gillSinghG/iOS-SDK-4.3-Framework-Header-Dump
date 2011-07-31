/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AddressBookUI-Structs.h"
#import "UIPopoverControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "ABPersonEditDelegate.h"
#import "ABNewPersonViewControllerDelegate.h"
#import "ABPopoverRepresentDelegate.h"
#import "ABPersonTableViewDataSourceDelegate.h"
#import "ABPickerViewControllerDismissDelegate.h"
#import "ABPersonViewControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"

@class UIView, NSString, ABModel, UITableView, ABDatePickerViewController, ABPersonTableViewDataSource, UIPopoverController, NSMutableArray, ABPeoplePickerNavigationController, UIBarButtonItem, NSArray, UIViewController, NSIndexPath, UIFont;
@protocol ABStyleProvider, ABPersonViewControllerPrivateDelegate;

@interface ABPersonViewControllerHelper : XXUnknownSuperclass <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonTableViewDataSourceDelegate, ABPickerViewControllerDismissDelegate, UIActionSheetDelegate, UIPopoverControllerDelegate, ABPopoverRepresentDelegate, ABPersonEditDelegate, ABPersonViewControllerDelegate> {
@private
	UIViewController* _viewController;
	id<ABPersonEditDelegate> _editDelegate;
	id _imagePicker;
	ABDatePickerViewController* _datePickerViewController;
	BOOL _isAnimatingDatePickerInputView;
	BOOL _willPresentDatePickerViewController;
	id _activeDialog;
	id _deletionDelegate;
	id _actionSheetDelegate;
	BOOL _showsLinkedPeople;
	BOOL _shouldShowLinkingUI;
	CFArrayRef _personViewControllers;
	BOOL _allowsSettingAsPreferredCardForName;
	BOOL _appearsInLinkingPeoplePicker;
	BOOL _animatedRight;
	BOOL _automaticallySetEditing;
	BOOL _allowsAddingToAddressBook;
	BOOL _showsPeoplePickerCancelButton;
	BOOL _savesNewContactOnSuspend;
	void* _addressBook;
	void* _displayedPerson;
	NSArray* _displayedPeople;
	NSMutableArray* _peopleForUnifiedCard;
	BOOL _hasLinkChanges;
	CFDictionaryRef _valueByProperty;
	ABModel* _model;
	id<ABStyleProvider> _styleProvider;
	ABPersonTableViewDataSource* _personTableViewDataSource;
	BOOL _isLocation;
	BOOL _shareMessageBodyIsHTML;
	NSString* _shareMessageBody;
	NSString* _shareMessageSubject;
	NSString* _addToPersonButtonTitle;
	UIBarButtonItem* _reusableCancelButton;
	BOOL _personHeaderViewScrolls;
	UITableView* _controllerTableView;
	unsigned _modelDatabaseExternalChangeCancellationCount;
	unsigned _modelDatabaseLocalChangeCancellationCount;
	BOOL _ignoresReloadData;
	NSIndexPath* _popoverCellIndexPath;
	NSIndexPath* _popoverViewInCellIndexPath;
	UIViewController* _savedPopoverContentViewController;
	UIPopoverController* _presentationPopoverController;
	ABPeoplePickerNavigationController* _peoplePickerForLinking;
	ABPeoplePickerNavigationController* _peoplePickerForAddToContacts;
	BOOL _disablePopoverUpdates;
	BOOL _isUnlinkingPerson;
	int _favoritesListChangeNotificationCount;
}
@property(copy, nonatomic) NSString* addToPersonButtonTitle;
@property(retain, nonatomic) ABDatePickerViewController* datePickerViewController;
@property(assign, nonatomic) unsigned modelDatabaseChangeCancellationCount;
@property(assign, nonatomic) BOOL ignoresReloadData;
@property(retain, nonatomic) NSIndexPath* popoverCellIndexPath;
@property(retain, nonatomic) NSIndexPath* popoverViewInCellIndexPath;
@property(assign, nonatomic) BOOL savesNewContactOnSuspend;
@property(retain, nonatomic) id activeDialog;
@property(assign, nonatomic) BOOL automaticallySetEditing;
@property(assign, nonatomic) BOOL allowsAddingToAddressBook;
@property(assign, nonatomic) BOOL showsPeoplePickerCancelButton;
@property(assign, nonatomic) BOOL isLocation;
@property(retain, nonatomic) ABModel* model;
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;
@property(assign, nonatomic) BOOL personHeaderViewScrolls;
@property(assign, nonatomic) id<ABPersonEditDelegate> editDelegate;
@property(assign, nonatomic) BOOL shareMessageBodyIsHTML;
@property(copy, nonatomic) NSString* shareMessageBody;
@property(copy, nonatomic) NSString* shareMessageSubject;
@property(readonly, assign, nonatomic) UIView* viewForActionSheet;
@property(readonly, assign, nonatomic, getter=isAttributionEnabled) BOOL attributionEnabled;
@property(readonly, assign, nonatomic) NSString* attribution;
@property(assign, nonatomic) BOOL actionShouldPickHighlightedItem;
@property(readonly, assign, nonatomic) id<ABPersonViewControllerPrivateDelegate> personViewDelegate;
@property(retain, nonatomic) UIView* personHeaderView;
@property(readonly, assign, nonatomic) BOOL hasPopoverController;
@property(readonly, assign, nonatomic) UITableView* controllerTableView;
@property(readonly, assign, nonatomic) ABPersonTableViewDataSource* personTableViewDataSource;
@property(readonly, assign, nonatomic) BOOL hasLinkChanges;
@property(readonly, assign, nonatomic) BOOL hasImageChanges;
@property(readonly, assign, nonatomic) BOOL hasNameChanges;
@property(readonly, assign, nonatomic) BOOL hasChanges;
@property(readonly, assign, nonatomic) BOOL canSave;
@property(assign, nonatomic) BOOL allowsConferencing;
@property(assign, nonatomic) BOOL allowsSounds;
@property(assign, nonatomic) BOOL allowsDeletion;
@property(assign, nonatomic) BOOL allowsSettingAsPreferredCardForName;
@property(assign, nonatomic) BOOL allowsSendingTextMessage;
@property(assign, nonatomic) BOOL allowsSharing;
@property(assign, nonatomic) BOOL allowsAddToFavorites;
@property(assign, nonatomic) BOOL allowsActions;
@property(readonly, assign, nonatomic) UIBarButtonItem* reusableCancelButton;
@property(assign, nonatomic) BOOL allowsCardEditing;
@property(readonly, assign, nonatomic, getter=isReadonly) BOOL readonly;
@property(assign, nonatomic) BOOL appearsInLinkingPeoplePicker;
@property(assign, nonatomic) BOOL shouldShowLinkingUI;
@property(assign, nonatomic) BOOL shouldShowLinkedPeople;
@property(retain, nonatomic) UIView* customMessageView;
@property(retain, nonatomic) UIFont* messageDetailFont;
@property(copy, nonatomic) NSString* messageDetail;
@property(retain, nonatomic) UIFont* messageFont;
@property(copy, nonatomic) NSString* message;
@property(copy, nonatomic) NSString* alternateName;
@property(readonly, assign, nonatomic) NSArray* displayedPeople;
@property(assign, nonatomic) void* displayedPerson;
@property(assign, nonatomic) void* addressBook;
@property(readonly, assign, nonatomic) UIViewController* viewController;
+(void*)_newFakePersonForMergedPeople:(id)mergedPeople;
-(id)initWithViewController:(id)viewController style:(int)style;
-(void)dealloc;
-(void)setActiveDialog:(id)dialog handleDismiss:(BOOL)dismiss;
-(void)client:(id)client didDismissActionSheet:(id)sheet;
-(id)_existingViewControllerTableView;
-(void*)_personToUseForAddressBook;
-(void)setDisplayedPeople:(id)people;
-(void)_invalidatePeopleForUnifiedCard;
-(void)_updateDisplayedPeople;
-(void)_setDisplayedPerson:(void*)person invalidatePeopleForUnifiedCard:(BOOL)unifiedCard;
-(void)setStringValue:(id)value forProperty:(int)property;
-(void)updateLinkBarButtonItem;
-(void)_favoritesListChanged:(id)changed;
-(void)conference:(id)conference person:(void*)person property:(int)property identifier:(int)identifier;
-(void)_conferencingAvailabilityChanged:(id)changed;
-(void)updateAllowsSettingAsPreferredCardForName;
-(void)setAsPreferredCardForName:(id)name;
-(void)setPrimaryProperty:(int)property countryCode:(id)code;
-(void)reloadData;
-(void)reloadDataInvalidatingPeopleForUnifiedCard:(BOOL)unifiedCard;
-(void)reloadNameData;
-(void)reloadLinkingUISection;
-(void)reloadDeleteButton;
-(void)reloadImageData;
-(void)reloadPropertyGroups;
-(void)endEditingTransactions;
-(void)_finalizeLinkChanges;
-(void)updateRecord;
-(void)setAttribution:(id)attribution enabled:(BOOL)enabled target:(id)target action:(SEL)action;
-(id)addActionWithTitle:(id)title shortTitle:(id)title2 target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;
-(id)addActionWithTitle:(id)title shortTitle:(id)title2 detailText:(id)text style:(int)style target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;
-(void)removeActionWithSelector:(SEL)selector target:(id)target forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering animated:(BOOL)animated;
-(void)removeActionWithSelector:(SEL)selector target:(id)target forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;
-(BOOL)hasActionWithTitle:(id)title target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;
-(id)unknownPersonViewDelegate;
-(BOOL)makeFirstFieldBecomeFirstResponder;
-(void)getVCardData:(id*)data exportMode:(int)mode fileName:(id*)name;
-(BOOL)loadChatKitAndReturnBundle:(id*)bundle;
-(BOOL)loadMessageUIAndReturnBundle:(id*)bundle;
-(id)vCardFileName;
-(id)controllerToPresentSheet;
-(void)_presentShareContactByEmailViewController:(id)controller;
-(void)shareContactByEmail:(id)email;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
-(void)shareContactByTextMessage:(id)message;
-(void)smsComposeControllerCancelled:(id)cancelled;
-(void)smsComposeControllerSendStarted:(id)started;
-(void)shareActionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)shareContactFromButtonItem:(id)buttonItem sender:(id)sender;
-(void)shareContactFromButtonItem:(id)buttonItem;
-(void)shareContact:(id)contact;
-(void)pushViewController:(id)controller animated:(BOOL)animated;
-(void)pushViewController:(id)controller;
-(void)presentModalViewController:(id)controller;
-(void)updateEditButton;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)didDismissModalViewController;
-(id)prepareViewWithDisplayedProperties:(CFArrayRef)displayedProperties person:(void*)person allowActions:(BOOL)actions;
-(void)loadUnknownViewWithPerson:(void*)person allowActions:(BOOL)actions;
-(void)loadViewWithDisplayedProperties:(CFArrayRef)displayedProperties person:(void*)person allowDeletion:(BOOL)deletion allowActions:(BOOL)actions;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(void)ab_updatePopoverSize;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(float)ab_heightToFitForViewInPopoverView;
-(void)removeSelectedPersonFromBarButtonItem:(id)barButtonItem;
-(void)removeSelectedPerson;
-(void)removeDisplayedPeople;
-(void)deleteDialog:(id)dialog clickedButtonAtIndex:(int)index;
-(id)selectedPeople;
-(id)primarySourceNameForPerson:(void*)person;
-(id)secondarySourceNameForPerson:(void*)person;
-(id)personImageView;
-(void)imagePickerWillBeShown:(id)imagePicker;
-(void)imagePickerWillBeRemoved:(id)imagePicker;
-(void)imagePicker:(id)picker pickedPhoto:(id)photo;
-(id)imagePickerControllerViewForApplyImageAnimation:(id)applyImageAnimation;
-(BOOL)popoverSizeUpdatesDisabled;
-(void)setPopoverSizeUpdatesDisabled:(BOOL)disabled;
-(id)imagePickerControllerViewControllerToPresentModal:(id)presentModal;
-(id)imagePickerControllerViewControllerToPresentCamera:(id)presentCamera;
-(void)removeImagePickerControllerFromUI;
-(void)finishTearingDownImagePickerController;
-(void)showImageMenu;
-(void)imagePicker:(id)picker presentActionSheet:(id)sheet;
-(void)imagePicker:(id)picker didDismissActionSheet:(id)sheet;
-(id)viewControllerToPresentModal;
-(id)viewControllerToPresentUnknownModal;
-(id)ab_viewControllerToPresentCamera;
-(void)presentNewContactViewControllerForAddToContacts:(id)contacts;
-(void)newPersonViewController:(id)controller didCompleteWithNewPerson:(void*)newPerson informDelegate:(BOOL)delegate;
-(void)newPersonViewController:(id)controller didCompleteWithNewPerson:(void*)newPerson;
-(void)presentPeoplePickerNavigationControllerForAddToContacts:(id)contacts;
-(BOOL)copyInsertValue:(id*)value property:(int*)property forPerson:(void*)person;
-(BOOL)peoplePickerNavigationController:(id)controller shouldShowInsertEditorForPerson:(void*)person insertProperty:(int*)property copyInsertValue:(id*)value copyInsertLabel:(id*)label;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(void)peoplePickerNavigationController:(id)controller insertEditorDidConfirm:(BOOL)insertEditor forPerson:(void*)person;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(void)peoplePickerNavigationController:(id)controller requestedLinkForPerson:(void*)person;
-(BOOL)manuallyLinkPerson:(void*)person;
-(BOOL)manuallyUnlinkPerson:(void*)person;
-(void)setPeopleForUnifiedCard:(id)unifiedCard;
-(id)peopleForUnifiedCard;
-(BOOL)peoplePickerNavigationController:(id)controller shouldAllowSelectingPerson:(void*)person;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(BOOL)shouldShowAddToExistingContact;
-(void)presentAddToContactsSheetIfNeeded:(id)contactsSheetIfNeeded;
-(void)performAction:(int)action forPropertyAtIndex:(int)index inPropertyGroup:(id)propertyGroup withContext:(void*)context;
-(void)performAction:(int)action forPropertyAtIndex:(int)index inPropertyGroup:(id)propertyGroup;
-(void)performDefaultActionForPropertyAtIndex:(int)index inPropertyGroup:(id)propertyGroup;
-(void)personTableViewDataSource:(id)source selectedImageForEditing:(BOOL)editing;
-(BOOL)personTableViewDataSource:(id)source selectedPropertyAtIndex:(int)index inPropertyGroup:(id)propertyGroup withMemberCell:(id)memberCell forEditing:(BOOL)editing;
-(void)personTableViewDataSource:(id)source selectedSMSActionForPropertyAtIndex:(int)index inPropertyGroup:(id)propertyGroup;
-(void)personTableViewDataSource:(id)source selectedAddToFavoritesActionForPropertyAtIndex:(int)index inPropertyGroup:(id)propertyGroup entryType:(int)type;
-(void)personTableViewDataSourceSelectedDeletePerson:(id)person;
-(void)personTableViewDataSourceSelectedAddToContacts:(id)contacts;
-(BOOL)personTableViewDataSourceShouldPresentDatePickerViaDelegate:(id)personTableViewDataSource;
-(BOOL)shouldAnimateDatePickerInputView;
-(void)_presentDatePickerViewControllerAsInputView:(id)view andScrollToIndexPath:(id)indexPath;
-(void)_datePickerInputViewDismissAnimationDidStop:(id)_datePickerInputViewDismissAnimation finished:(id)finished context:(void*)context;
-(void)_dismissDatePickerInputViewAnimated:(BOOL)animated;
-(BOOL)isPresentingDatePickerViewControllerForPersonTableViewDataSource:(id)personTableViewDataSource;
-(void)personTableViewDataSourceWillPresentDatePickerViewController:(id)personTableViewDataSource;
-(void)personTableViewDataSource:(id)source presentDatePickerViewController:(id)controller fromView:(id)view passthroughViews:(id)views forIndexPath:(id)indexPath;
-(BOOL)personTableViewDataSourceShouldShowContactSources:(id)personTableViewDataSource;
-(BOOL)personTableViewDataSourceShouldShowLinkedPeople:(id)personTableViewDataSource;
-(void)personTableViewDataSource:(id)source shouldPushCardForPerson:(void*)person showingLinkedPeople:(BOOL)people;
-(void)personTableViewDataSourceAskedToPresentLinkingPeoplePicker:(id)presentLinkingPeoplePicker;
-(BOOL)personTableViewDataSource:(id)source shouldUnlinkPerson:(void*)person;
-(void)personTableViewDataSource:(id)source dismissDatePickerViewController:(id)controller;
-(void)personTableViewDataSource:(id)source presentPickerViewController:(id)controller fromView:(id)view forIndexPath:(id)indexPath;
-(BOOL)personTableViewDataSource:(id)source shouldShowAction:(id)action;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)personTableViewDataSource:(id)source didBeginEditingProperty:(int)property;
-(void)personTableViewDataSource:(id)source didUpdateValueForProperty:(int)property;
-(void)_attemptSave;
-(void)personTableViewDataSource:(id)source didFinishEditingProperty:(int)property;
-(void)personTableViewDataSourceDidSwipeToDelete:(id)personTableViewDataSource;
-(void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier person:(void*)person important:(BOOL)important;
-(void)personTableViewDataSource:(id)source presentActionSheet:(id)sheet fromView:(id)view;
-(void)personTableViewDataSource:(id)source didDismissActionSheet:(id)sheet;
-(BOOL)personTableViewDataSourceIsLocation:(id)location;
-(void)personTableViewDataSource:(id)source shareContact:(id)contact;
-(void)personTableViewDataSource:(id)source conference:(id)conference person:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)personTableViewDataSourceShouldIgnoreNextLocalChange:(id)personTableViewDataSource;
-(void)ignoreNextLocalChange;
-(void)addressBookChangedLocally:(CFDictionaryRef)locally;
-(void)dismissPickerViewController:(id)controller;
-(void)nameUpdatedForPerson:(void*)person;
-(void)personWasDeleted;
-(void)imageUpdatedForPerson:(void*)person;
-(void)preferredPersonDidChangeToPerson:(void*)preferredPerson;
-(void)personViewControllerIsGoingAway:(id)away;
-(BOOL)personViewController:(id)controller shouldPerformDefaultActionForPerson:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)popoverControllerShouldDismissPopover:(id)popoverController;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(id)viewToRepresentPopover:(id)representPopover;
@end
