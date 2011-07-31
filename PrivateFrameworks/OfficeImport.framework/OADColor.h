/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OADColor.h"
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADColor : XXUnknownSuperclass <NSCopying> {
@private
	NSMutableArray* mTransforms;
}
+(id)nsColorWithOADColor:(id)oadcolor colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;
+(id)nsColorWithRed:(float)red green:(float)green blue:(float)blue;
+(id)nsColorWithOADColor:(id)oadcolor;
-(id)copyWithZone:(NSZone*)zone;
-(void)addTransform:(id)transform;
-(void)dealloc;
-(id)transforms;
-(void)setTransforms:(id)transforms;
-(void)addTransformOfType:(int)type;
-(void)addTransformOfType:(int)type value:(float)value;
-(id)colorForStyleColor:(id)styleColor;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end

@interface OADColor (Private)
+(id)colorWithRedByte:(unsigned char)redByte greenByte:(unsigned char)byte blueByte:(unsigned char)byte3;
+(id)basicMapOfColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;
+(int)mapSchemeColorID:(int)anId colorMap:(id)map;
+(id)mapAdjustedColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;
@end
