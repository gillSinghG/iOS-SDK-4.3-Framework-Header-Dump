/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

#import "UIActionSheetDelegate.h"
#import "AccountSettingsUIDetailController.h"
#import "AccountSettingsUISyncController.h"

@class NSMutableDictionary, UIProgressHUD, NSArray, NSString, DeviceLocalAccount, UIView;

@interface AccountSettingsUISyncController : AccountSettingsUIDetailController <UIActionSheetDelegate> {
	id _account;
	id _syncActionsAccount;
	DeviceLocalAccount* _deviceLocalAccount;
	BOOL _shouldSaveDeviceLocalAccount;
	BOOL _isFirstSetup;
	BOOL _isUpdateSetup;
	UIView* _confirmEnableSyncSheet;
	UIView* _reallyConfirmEnableSyncSheet;
	UIView* _reallyConfirmKeepLocalDataSheet;
	NSArray* _dataclassesToEnable;
	BOOL _didFinishFirstSetup;
	NSMutableDictionary* _syncSaveOperationsByDataclass;
	BOOL _isSavingSyncSettingsInBackground;
	UIProgressHUD* _hud;
	NSString* _hudText;
	BOOL _displayingHUD;
	UIView* _confirmDisableSyncSheet;
	BOOL _showsDeleteAccountButton;
	UIView* _confirmDeleteAccountSheet;
	BOOL _didDeleteAccount;
	BOOL _mergedDataOnAccountDelete;
	BOOL _creatingTheAccounts;
	BOOL _forceMailSetup;
	NSArray* _preEnabledDataclasses;
}
@property(retain, nonatomic) NSArray* preEnabledDataclasses;
@property(retain) id account;
@property(assign, getter=isFirstSetup) BOOL firstSetup;
@property(assign, getter=isUpdateSetup) BOOL updateSetup;
@property(assign) BOOL didFinishFirstSetup;
@property(assign) BOOL didDeleteAccount;
@property(assign) BOOL showsDeleteAccountButton;
+(BOOL)shouldPresentAsModalSheet;
+(BOOL)_doesSyncedDataExistForDataclass:(id)dataclass;
-(id)newAccount;
-(void)createAccounts;
-(void)cancelAccountsCreation;
-(void)setSwitchForDataclass:(id)dataclass to:(id)to;
-(id)init;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)view;
-(void)dealloc;
-(void)forceMailSetup;
-(BOOL)mergedDataOnAccountDelete;
-(id)accountInfoUsername:(id)username;
-(BOOL)accountInfoSpecifierEnabled;
-(id)_accountInfoSpecifier;
-(id)deleteButtonSpecifier;
-(id)_localizationKeyForDataclass:(id)dataclass withSuffix:(id)suffix;
-(id)iconForDataclass:(id)dataclass;
-(id)specifiersForDataclasses:(id)dataclasses;
-(id)specifiers;
-(id)_navigationTitle;
-(void)loadView;
-(void)syncDataclass:(id)dataclass withAction:(id)action;
-(BOOL)syncSaveOperationsHasDataclass:(id)dataclass;
-(void)removeActionForSyncDataclass:(id)syncDataclass;
-(void)saveSyncSettings;
-(Class)accountInfoControllerClass;
-(id)otherSpecifiers;
-(id)otherSetupSpecifiers;
-(id)_viewForSheet;
-(void)_showModalProgress;
-(void)_showModalProgressWithText:(id)text afterDelay:(double)delay;
-(void)_hideModalProgressAfterDelay:(double)delay;
-(void)_hideHUD;
-(void)showModalProgressWithText:(id)text;
-(void)hideModalProgress;
-(BOOL)showingModalProgress;
-(void)didConfirmSaveSyncSettings:(BOOL)settings;
-(id)_modalProgressTextForDataclass:(id)dataclass enabled:(BOOL)enabled;
-(void)beginSaveSyncSettings;
-(void)_backgroundSaveSyncSettings:(id)settings;
-(void)_setSyncActionsAccount:(id)account;
-(id)_syncActionsAccount;
-(void)saveSyncSettings:(id)settings forAccount:(id)account;
-(void)_mainThreadFinishedSaveSyncSettings;
-(id)titleForAccountSettingsAction:(id)accountSettingsAction;
-(id)shortTitleForAccountSettingsAction:(id)accountSettingsAction;
-(id)titleForAccountDeleteAction:(id)accountDeleteAction hasSyncDataclassesEnabled:(BOOL)enabled supportsMerge:(BOOL)merge;
-(void)doneButtonClicked:(id)clicked;
-(void)cancelButtonClicked:(id)clicked;
-(void)_reallyFinishedFirstSetup;
-(BOOL)shouldInitiallyEnableDataclass:(id)dataclass;
-(id)firstSetupInitialSettings;
-(BOOL)_carrierBundleSaysHideFindMyiPhone;
-(void)confirmationView:(id)view clickedButtonAtIndex:(int)index;
-(id)isDataclassEnabled:(id)enabled;
-(BOOL)shouldAskForUserConfirmationToEnableDataclass:(id)enableDataclass;
-(BOOL)shouldAskForUserConfirmationToDisableDataclass:(id)disableDataclass;
-(void)setDataclassEnabled:(id)enabled specifier:(id)specifier;
-(void)_enableDataclass:(id)dataclass;
-(void)_disableDataclass:(id)dataclass;
-(BOOL)preconditionNeedsToBeMetToEnableDataclass:(id)enableDataclass;
-(void)ensurePreconditionIsMetToEnableDataclass:(id)enableDataclass;
-(void)preconditionMetToEnableDataclass:(id)enableDataclass;
-(void)preconditionNotMetToEnableDataclass:(id)enableDataclass;
-(BOOL)preconditionNeedsToBeMetToDisableDataclass:(id)disableDataclass;
-(void)ensurePreconditionIsMetToDisableDataclass:(id)disableDataclass;
-(void)preconditionMetToDisableDataclass:(id)disableDataclass;
-(id)confirmationTitleForDataclassToEnable:(id)enable;
-(id)confirmationTextForDataclassToEnable:(id)enable userCanKeepCurrentData:(BOOL)data localDataExists:(BOOL)exists;
-(id)userActionsToEnableDataclass:(id)enableDataclass;
-(void)confirmStartSyncingDataclass:(id)dataclass;
-(id)confirmationTitleForDataclassToReallyEnable:(id)reallyEnable;
-(id)confirmationTextForDataclassToReallyEnable:(id)reallyEnable;
-(id)confirmationTitleForDataclassToReallyKeepLocalData:(id)reallyKeepLocalData;
-(id)confirmationTextForDataclassToReallyKeepLocalData:(id)reallyKeepLocalData;
-(void)reallyConfirmStartSyncingWithText:(id)text title:(id)title dataclass:(id)dataclass;
-(void)reallyConfirmKeepLocalDataWithText:(id)text title:(id)title dataclass:(id)dataclass;
-(void)didConfirmEnableSyncSettings:(id)settings;
-(void)didReallyConfirmEnableSyncSettings:(id)settings;
-(void)didReallyConfirmKeepLocalData:(id)data;
-(id)confirmationTitleForDataclassToDisable:(id)disable;
-(id)confirmationTextForDataclassToDisable:(id)disable userCanKeepCurrentData:(BOOL)data;
-(id)userActionsToDisableDataclass:(id)disableDataclass;
-(void)confirmStopSyncingData:(id)data;
-(void)didConfirmDisableSyncSettings:(id)settings;
-(BOOL)isEnabledForDataclass:(id)dataclass;
-(void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;
-(void*)_createDeviceLocalSyncDataSourceForDataclass:(id)dataclass;
-(id)_deviceLocalAccount;
-(void)_saveDeviceLocalAccount;
-(void)_mergeLocalDataForDataclass:(id)dataclass;
-(void)_removeLocalDataStoreForDataclass:(id)dataclass;
-(void)_removeDataStoreForDataclass:(id)dataclass;
-(void)_mergeSyncDataForDataclass:(id)dataclass;
-(void)_createLocalDataSourceForDataclass:(id)dataclass;
-(void)_enableTetheredSyncingForDataclass:(id)dataclass;
-(void)_clearAnchorsForDataclass:(id)dataclass;
-(void)_clearAnchorsForLocalDataclass:(id)localDataclass;
-(id)syncableDataclasses:(id)dataclasses;
-(id)_dataclassesTextForDeleteConfirmationIncludingMail:(BOOL)deleteConfirmationIncludingMail;
-(BOOL)hasSyncDataclassesEnabled;
-(id)deleteActionsWithSyncDataclassesEnabled:(BOOL)syncDataclassesEnabled;
-(void)confirmDeleteAccount:(id)account;
-(void)didConfirmDeleteAccount:(id)account;
-(void)deleteAccountAndData:(id)data;
-(void)_backgroundDeleteAccountData:(id)data;
-(void)_mainThreadFinishedDeleteAccountDataWithSuccess:(id)success;
-(void)deleteAccount;
-(BOOL)backgroundDeleteAccountData;
-(void)updateLocalStoresAfterRemovingAccountInformation;
-(void)_hideLocalStoreForDataclass:(id)dataclass;
-(void)_showLocalStoreIfAppropriateForDataclass:(id)dataclass;
@end

@interface AccountSettingsUISyncController (LocalizedStrings)
-(id)localizedTextForDataclasses:(id)dataclasses willBeUsedAtBeginningOfSentence:(BOOL)sentence includeMailDataclass:(BOOL)dataclass;
-(id)localizedTextForDataclasses:(id)dataclasses willBeUsedAtBeginningOfSentence:(BOOL)sentence;
-(id)titleStyleTextForDataclass:(id)dataclass;
@end

