/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WBTextBox.h"
#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WBTextBox : XXUnknownSuperclass {
}
+(void)readFrom:(WrdEshShape*)from parent:(id)parent reader:(id)reader;
+(void)readTextFrom:(id)from to:(id)to chain:(unsigned short)chain;
@end

@interface WBTextBox (Private)
+(void)checkForOleObject:(id)oleObject;
@end

