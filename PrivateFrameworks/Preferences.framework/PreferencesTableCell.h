/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIImageView;

@interface PreferencesTableCell : XXUnknownSuperclass {
	id _value;
	UIImageView* _checkedImageView;
	BOOL _checked;
	BOOL _shouldHideTitle;
	NSString* _hiddenTitle;
	int _alignment;
	SEL _pAction;
	id _pTarget;
	BOOL _cellEnabled;
}
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(void)dealloc;
-(id)title;
-(void)setTitle:(id)title;
-(void)setShouldHideTitle:(BOOL)hideTitle;
-(void)setChecked:(BOOL)checked;
-(BOOL)isChecked;
-(void)setIcon:(id)icon;
-(void)setValue:(id)value;
-(id)value;
-(id)titleLabel;
-(id)valueLabel;
-(id)iconImageView;
-(void)setAlignment:(int)alignment;
-(void)layoutSubviews;
-(void)setTarget:(id)target;
-(id)target;
-(void)setAction:(SEL)action;
-(SEL)action;
-(void)setCellEnabled:(BOOL)enabled;
-(BOOL)cellEnabled;
-(BOOL)canReload;
-(void)reloadWithSpecifier:(id)specifier;
-(void)refreshCellContentsWithSpecifier:(id)specifier;
@end
