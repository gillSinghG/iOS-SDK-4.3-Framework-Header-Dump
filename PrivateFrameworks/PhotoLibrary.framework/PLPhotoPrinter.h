/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "UIPrintInteractionControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIBarButtonItem;

@interface PLPhotoPrinter : XXUnknownSuperclass <UIPrintInteractionControllerDelegate> {
	id _delegate;
	UIBarButtonItem* _barButtonItem;
	struct {
		unsigned printOptionsVisible : 1;
		unsigned delegateDidPrint : 1;
		unsigned delegatePresentPrintOptions : 1;
		unsigned delegateDismissPrintOptions : 1;
	} _printerFlags;
}
@property(assign, nonatomic) id delegate;
-(void)_setBarButtonItem:(id)item;
-(id)_barButtonItem;
-(void)dealloc;
-(void)printPhoto:(id)photo;
-(void)printPhoto:(id)photo fromBarButtonItem:(id)barButtonItem;
-(void)printPhotos:(id)photos;
-(void)printPhotos:(id)photos fromBarButtonItem:(id)barButtonItem;
-(void)dismissPhotoPrinterAnimated:(BOOL)animated;
-(void)dismissAndRepositionPopover;
-(void)printInteractionControllerWillPresentPrinterOptions:(id)printInteractionController;
-(void)printInteractionControllerWillDismissPrinterOptions:(id)printInteractionController;
-(void)printInteractionControllerDidDismissPrinterOptions:(id)printInteractionController;
-(BOOL)printOptionsVisible;
@end

