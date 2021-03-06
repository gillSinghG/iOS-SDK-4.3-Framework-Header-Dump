/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet, NSRecursiveLock, NSMutableDictionary;

@interface DAAccountManager : XXUnknownSuperclass {
	NSMutableDictionary* _accounts;
	NSMutableDictionary* _accountsToAdd;
	NSMutableDictionary* _accountsToRemove;
	NSMutableSet* _setAsideAccounts;
	NSRecursiveLock* _accountLock;
	BOOL _accountSaveInProgress;
	int _pendingAccountSetupCount;
}
+(id)oneshotListOfAccountPersistentUUIDs;
+(void)reacquireClientRestrictions:(id)restrictions;
+(void)vendDaemonManagers:(Class)managers;
+(id)sharedInstance;
-(BOOL)hasActiveAccounts;
-(void)enableDaemon;
-(void)disableDaemon;
-(void)cleanupLaunchdSemaphore;
-(void)_stopAgentMonitoring;
-(void)_startAgentMonitoring;
-(void)_removeStoresForAccountWithID:(id)anId;
-(id)_accountSettingsAccountTypes;
-(void)_setExternalSource:(id)source statusForDataTypes:(int)dataTypes;
-(void)_setAccountName:(id)name forDataTypes:(int)dataTypes;
-(void)_updateExternalSourcesAndAccountNamesForAccounts:(id)accounts;
-(BOOL)_saveAllAccountSettings:(BOOL)settings;
-(BOOL)saveAllAccountSettings;
-(BOOL)_addAccount:(id)account checkUniqueness:(BOOL)uniqueness;
-(BOOL)addAccount:(id)account;
-(BOOL)removeAccount:(id)account;
-(void)setAsideAccountWithID:(id)anId;
-(void)unsetAsideAccountWithID:(id)anId;
-(id)accountWithID:(id)anId;
-(id)accountWithPersistentUUID:(id)persistentUUID;
-(id)getStatusReports;
-(id)accounts;
-(id)accountsOfClass:(Class)aClass;
-(id)pendingAccounts;
-(void)addPendingAccountSetup;
-(void)removePendingAccountSetup;
-(BOOL)hasPendingAccountSetup;
-(void)reloadAccounts;
-(void)_respondToAccountsChangedNotification;
-(void)dealloc;
-(id)init;
-(void)checkValidityForAccount:(id)account consumer:(id)consumer;
@end

