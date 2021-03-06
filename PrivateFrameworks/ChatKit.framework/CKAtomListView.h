/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MFLabelledAtomListDelegate.h"

@class MFLabelledAtomList, UITextLabel, UIPushButton;

@interface CKAtomListView : XXUnknownSuperclass <MFLabelledAtomListDelegate> {
	MFLabelledAtomList* _atomList;
	UITextLabel* _recipientListLabel;
	UIPushButton* _detailsButton;
	UIPushButton* _hideDetailsButton;
	id _delegate;
	unsigned _expanded : 1;
}
-(id)initWithLabel:(id)label totalWidth:(float)width addresses:(id)addresses arePhoneNumbers:(id)numbers;
-(void)dealloc;
-(id)_newButtonWithTitle:(id)title;
-(void)_buttonTouchUpEvent:(id)event;
-(void)setDelegate:(id)delegate;
-(void)setAddressAtomTarget:(id)target action:(SEL)action;
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)expanded animate:(BOOL)animate;
-(void)_setSizeAndAlphasAnimating:(BOOL)animating;
-(void)_updateInactiveModeText;
-(void)displayStringsDidChangeForLabelledAtomList:(id)displayStrings;
@end

