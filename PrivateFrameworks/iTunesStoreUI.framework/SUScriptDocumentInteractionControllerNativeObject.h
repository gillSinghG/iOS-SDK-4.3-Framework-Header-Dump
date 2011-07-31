/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptNativeObject.h"
#import "iTunesStoreUI-Structs.h"
#import "UIDocumentInteractionControllerDelegate.h"


@interface SUScriptDocumentInteractionControllerNativeObject : SUScriptNativeObject <UIDocumentInteractionControllerDelegate> {
	BOOL _didPickApplication;
	BOOL _isVisible;
	id _presentationBlock;
	BOOL _redisplayAfterRotation;
}
-(void)dealloc;
-(void)presentUsingBlock:(id)block;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)documentInteractionController;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)documentInteractionController;
-(void)documentInteractionController:(id)controller willBeginSendingToApplication:(id)application;
-(void)_windowDidRotateNotification:(id)_window;
-(void)_windowWillRotateNotification:(id)_window;
-(BOOL)_isAffectedByWindowNotification:(id)notification;
@end
