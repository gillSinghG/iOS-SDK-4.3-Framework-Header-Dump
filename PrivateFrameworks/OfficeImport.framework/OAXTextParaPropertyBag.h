/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAXTextParaPropertyBag.h"
#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXTextParaPropertyBag : XXUnknownSuperclass {
}
+(void)readParagraphProperties:(xmlNode*)properties paragraphProperties:(id)properties2 drawingState:(id)state;
@end

@interface OAXTextParaPropertyBag (Private)
+(id)readSpacing:(xmlNode*)spacing;
+(void)readTabList:(xmlNode*)list paragraphProperties:(id)properties;
+(void)readAlign:(id)align paragraphProperties:(id)properties;
+(void)readFontAlign:(id)align paragraphProperties:(id)properties;
+(int)readBulletScheme:(id)scheme;
@end

