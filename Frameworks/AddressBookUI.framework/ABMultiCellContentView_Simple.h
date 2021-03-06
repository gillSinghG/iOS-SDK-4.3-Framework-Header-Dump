/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABMultiCellContentView.h"
#import "UITextFieldDelegate.h"

@class NSString, ABHighlightingTextField;

@interface ABMultiCellContentView_Simple : ABMultiCellContentView <UITextFieldDelegate> {
	ABHighlightingTextField* _textField;
	NSString* _previousValue;
}
@property(readonly, assign, nonatomic) NSString* text;
+(CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;
-(void)dealloc;
-(BOOL)canHandleProperty:(int)property;
-(void)setPropertyGroup:(id)group andInfo:(id)info;
-(id)pickerView;
-(void)reload;
-(void)reloadFromModel;
-(void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;
-(BOOL)wantsLabelDivider;
-(BOOL)tabToNextResponder:(BOOL)nextResponder fromView:(id)view;
-(id)viewForFirstResponder;
-(void)setAbCellStyle:(int)style;
-(id)hitTestForTouches:(id)touches withEvent:(id)event;
-(BOOL)shouldSendTouchesToSuperviewForHitView:(id)hitView;
-(BOOL)isValidValue:(id)value;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)textFieldTextDidChange:(id)textFieldText;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(BOOL)textFieldShouldEndEditing:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(BOOL)textFieldShouldClear:(id)textField;
-(XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;
@end

