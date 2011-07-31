/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiGraphics : XXUnknownSuperclass {
@private
	CGRect _imageRect;
	UIKBThemeRef _categoryTheme;
	UIKBThemeRef _categorySelectedTheme;
	UIKBThemeRef _controlTheme;
	UIKBThemeRef _controlPressedTheme;
	UIKBThemeRef _dividerTheme;
	UIKBThemeRef _darkDividerTheme;
	UIKBThemeRef _selectedDividerTheme;
	UIKBThemeRef _backgroundTheme;
	CGColorRef _selectedDividerStart;
	CGGradientRef _darkDividerGradient;
	CGGradientRef _selectedGradient;
	CGGradientRef _selectedDividerGradient;
	CGGradientRef _backgroundGradient;
}
+(id)sharedInstance;
+(id)imageWithRect:(CGRect)rect name:(id)name pressed:(BOOL)pressed;
+(void)mapImagesIfNecessary;
+(id)emojiWithName:(id)name;
-(id)init;
-(void)dealloc;
-(void)releaseThemes;
-(void)initializeThemes;
-(id)generateImageWithRect:(CGRect)rect name:(id)name pressed:(BOOL)pressed;
-(void)drawTopEdgeInContext:(CGContextRef)context withTheme:(UIKBThemeRef)theme;
-(id)dividerWithTheme:(UIKBThemeRef)theme;
-(id)dividerGenerator:(id)generator;
-(id)darkDividerGenerator:(id)generator;
-(id)selectedDividerGenerator:(id)generator;
-(id)categoryWithSymbol:(id)symbol pressed:(id)pressed;
-(id)categoryRecentsGenerator:(id)generator;
-(id)categoryPeopleGenerator:(id)generator;
-(id)categoryNatureGenerator:(id)generator;
-(id)categoryObjectsGenerator:(id)generator;
-(id)categoryPlacesGenerator:(id)generator;
-(id)categorySymbolsGenerator:(id)generator;
-(id)controlWithSymbol:(id)symbol corners:(int)corners padding:(CGSize)padding generator:(id)generator;
-(id)controlInternationalGenerator:(id)generator;
-(id)controlDeleteGenerator:(id)generator;
-(id)pageIndicatorGenerator:(id)generator;
-(id)pageIndicatorCurrentGenerator:(id)generator;
-(id)backgroundGradientGenerator:(id)generator;
-(id)emojiPressedGenerator:(id)generator rect:(CGRect)rect;
-(UIKBThemeRef)createProtoThemeForKey:(id)key keyboard:(id)keyboard state:(int)state;
-(id)protoKeyWithDisplayString:(id)displayString;
-(id)protoKeyboard;
-(id)keyImageWithDisplayString:(id)displayString state:(int)state key:(id)key keyboard:(id)keyboard theme:(UIKBThemeRef)theme;
-(id)keyImageWithDisplayString:(id)displayString state:(int)state rect:(CGRect)rect fontSize:(float)size;
-(id)controlInternationalKeyGenerator:(BOOL)generator rect:(CGRect)rect;
-(id)controlDismissKeyGenerator:(BOOL)generator rect:(CGRect)rect;
-(id)controlDeleteKeyGenerator:(BOOL)generator rect:(CGRect)rect;
-(id)controlSpaceKeyGenerator:(BOOL)generator rect:(CGRect)rect;
-(id)categoryKeyGenerator:(BOOL)generator rect:(CGRect)rect;
@end
