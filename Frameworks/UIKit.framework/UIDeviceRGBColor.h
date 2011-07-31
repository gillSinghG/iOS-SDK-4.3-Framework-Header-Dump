/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIColor.h"


__attribute__((visibility("hidden")))
@interface UIDeviceRGBColor : UIColor {
@private
	float redComponent;
	float greenComponent;
	float blueComponent;
	float alphaComponent;
	CGColorRef cachedColor;
}
-(id)initWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;
-(id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;
-(id)initWithCGColor:(CGColorRef)cgcolor;
-(void)dealloc;
-(id)colorWithAlphaComponent:(float)alphaComponent;
-(CGColorRef)_createCGColorWithAlpha:(float)alpha;
-(void)set;
-(void)setFill;
-(void)setStroke;
-(id)colorSpaceName;
-(id)description;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(CGColorRef)CGColor;
-(float)alphaComponent;
@end
