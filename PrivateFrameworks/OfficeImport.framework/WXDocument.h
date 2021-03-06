/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WXDocument.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WXDocument : XXUnknownSuperclass {
}
+(void)initialize;
+(id)readFromArchive:(id)archive cancel:(id)cancel asThumbnail:(BOOL)thumbnail;
+(id)readFromData:(id)data cancel:(id)cancel asThumbnail:(BOOL)thumbnail;
+(id)documentFrom:(id)from reader:(id)reader cancel:(id)cancel asThumbnail:(BOOL)thumbnail;
@end

@interface WXDocument (Private)
+(void)mapFontTable:(id)table to:(id)to;
+(void)mapStyles:(id)styles to:(id)to state:(id)state;
+(void)mapLists:(id)lists to:(id)to state:(id)state;
+(void)mapDocument:(id)document to:(id)to state:(id)state;
+(void)readDocumentSettings:(id)settings to:(id)to state:(id)state;
@end

