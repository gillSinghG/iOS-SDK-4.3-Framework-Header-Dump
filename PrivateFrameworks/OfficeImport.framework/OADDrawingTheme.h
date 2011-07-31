/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OADColorMap, OADDefaultProperties, OADColorScheme, OADStyleMatrix, OADFontScheme;
@protocol OADColorPalette;

__attribute__((visibility("hidden")))
@interface OADDrawingTheme : XXUnknownSuperclass {
@private
	OADDefaultProperties* mShapeDefaults;
	OADDefaultProperties* mLineDefaults;
	OADDefaultProperties* mTextDefaults;
	OADStyleMatrix* mStyleMatrix;
	OADFontScheme* mFontScheme;
	OADColorScheme* mColorScheme;
	OADColorMap* mColorMap;
	id<OADColorPalette> mColorPalette;
}
@property(readonly, assign, nonatomic) OADDefaultProperties* shapeDefaults;
@property(readonly, assign, nonatomic) OADDefaultProperties* lineDefaults;
@property(readonly, assign, nonatomic) OADDefaultProperties* textDefaults;
@property(readonly, assign, nonatomic) OADStyleMatrix* styleMatrix;
@property(readonly, assign, nonatomic) OADFontScheme* fontScheme;
@property(readonly, assign, nonatomic) OADColorScheme* colorScheme;
@property(readonly, assign, nonatomic) OADColorMap* colorMap;
@property(retain, nonatomic) id<OADColorPalette> colorPalette;
-(id)initWithTheme:(id)theme colorMap:(id)map colorPalette:(id)palette;
-(void)applyThemeOverrides:(id)overrides colorMapOverride:(id)override;
-(void)dealloc;
@end
