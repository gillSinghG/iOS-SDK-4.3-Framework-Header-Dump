/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MPAudioDeviceController, MPAVDestinationBrowser, UIViewController, UIWindow;

@interface MPAudioVideoRoutingActionSheet : XXUnknownSuperclass {
@private
	MPAudioDeviceController* _audioDeviceController;
	MPAVDestinationBrowser* _videoDestinationBrowser;
	UIWindow* _windowForActionSheet;
	UIViewController* _viewControllerForActionSheet;
	id _completionHandler;
	int _airPlayPasswordAlertDidAppearToken;
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
}
-(id)initWithType:(unsigned)type;
-(id)_initWithAudioDeviceController:(id)audioDeviceController videoDestinationBrowser:(id)browser;
-(void)dealloc;
-(void)layoutSubviews;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(void)showWithValidInterfaceOrientationsBlock:(id)validInterfaceOrientationsBlock completionHandler:(id)handler;
-(void)showInPopoverFromRect:(CGRect)rect inView:(id)view backgroundStyle:(int)style animated:(BOOL)animated completionHandler:(id)handler;
-(BOOL)_isDeviceVideoRoute:(id)route;
-(BOOL)_isPotentialDeviceVideoRoute:(id)route;
-(BOOL)_routeIsPicked:(id)picked;
-(id)_routes;
@end
