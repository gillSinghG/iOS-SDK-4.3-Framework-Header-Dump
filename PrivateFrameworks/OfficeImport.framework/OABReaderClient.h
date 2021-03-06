/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library


@protocol OABReaderClient
+(void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;
+(void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;
+(void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;
+(BOOL)escherIsFullySupported;
+(BOOL)tablesAreAllowed;
@end

__attribute__((visibility("hidden")))
@interface OABReaderClient : XXUnknownSuperclass {
}
+(BOOL)sourceDrawableIsTopLevel:(id)level;
@end

