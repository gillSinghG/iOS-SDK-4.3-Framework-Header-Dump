/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OABStroke.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABStroke : XXUnknownSuperclass {
}
+(id)readStrokeFromShapeBaseManager:(id)shapeBaseManager colorPalette:(id)palette;
+(id)readLineEndWithType:(int)type width:(int)width length:(int)length;
@end

@interface OABStroke (Private)
+(int)readCompoundType:(int)type;
+(int)readPresetDashStyle:(int)style;
+(int)readLineEndType:(int)type;
+(int)readLineEndWidth:(int)width;
+(int)readLineEndLength:(int)length;
+(int)readCapStyle:(int)style;
+(int)writeCompoundType:(int)type;
+(int)writePresetDashStyle:(int)style;
+(int)writeLineEndType:(int)type;
+(int)writeLineEndWidth:(int)width;
+(int)writeLineEndLength:(int)length;
+(int)writeCapStyle:(int)style;
@end
