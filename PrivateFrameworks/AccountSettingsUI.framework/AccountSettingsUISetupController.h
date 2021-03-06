/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface AccountSettingsUISetupController : XXUnknownSuperclass {
	unsigned _didAlreadyPopController : 1;
	unsigned _didAttemptFirstSyncSetup : 1;
	unsigned _forceMailSetup : 1;
}
-(id)syncControllerSpecifierNamed:(id)named account:(id)account;
-(void)forceMailSetup;
-(void)controller:(id)controller finishedSetupWithAccount:(id)account;
-(void)finishedAccountSetup;
-(void)_reallyFinishedAccountSetup;
-(void)didFinishTransition;
@end

