/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ESDObjectFactory : XXUnknownSuperclass {
}
+(EshObject*)createObjectWithType:(unsigned short)type;
+(EshObject*)createObjectWithType:(unsigned short)type version:(unsigned short)version;
+(void)replaceHostEshFactoryWith:(EshObjectFactory*)with;
+(void)restoreHostEshFactory;
+(void)setEshFactory:(EshObjectFactory*)factory;
@end
