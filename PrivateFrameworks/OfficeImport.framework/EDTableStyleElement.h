/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "EDKeyedObject.h"
#import "NSCopying.h"

@class EDDifferentialStyle, EDCollection;

__attribute__((visibility("hidden")))
@interface EDTableStyleElement : XXUnknownSuperclass <EDKeyedObject, NSCopying> {
@private
	EDCollection* mDifferentialStyles;
	int mType;
	unsigned mBandSize;
	EDDifferentialStyle* mDifferentialStyle;
}
+(id)tableStyleElementWithResources:(id)resources;
-(id)initWithResources:(id)resources;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)key;
-(int)type;
-(void)setType:(int)type;
-(unsigned)bandSize;
-(void)setBandSize:(unsigned)size;
-(id)differentialStyle;
-(void)setDifferentialStyle:(id)style;
-(void)setDifferentialStyleWithIndex:(unsigned)index;
@end

