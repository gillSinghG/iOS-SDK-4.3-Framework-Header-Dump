/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStoreUI-Structs.h"
#import "UITextFieldDelegate.h"

@class UITextField, NSString, SUComposeTextFieldConfiguration;

@interface SUComposeTextField : XXUnknownSuperclass <UITextFieldDelegate> {
	SUComposeTextFieldConfiguration* _configuration;
	int _currentTextLength;
	id _delegate;
	CGSize _labelSize;
	int _style;
	UITextField* _textField;
}
@property(readonly, assign, nonatomic) int composeReviewStyle;
@property(assign, nonatomic) id delegate;
@property(readonly, assign, nonatomic) UITextField* textField;
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;
@property(retain, nonatomic) NSString* text;
@property(readonly, assign, nonatomic) SUComposeTextFieldConfiguration* configuration;
+(id)labelFontForStyle:(int)style;
+(id)labelColorForStyle:(int)style;
-(id)initWithConfiguration:(id)configuration style:(int)style;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(void)layoutSubviews;
-(BOOL)textField:(id)field shouldInsertText:(id)text replacingRange:(NSRange)range;
-(void)_textChanged:(id)changed;
-(CGPoint)_textFieldOrigin;
@end

