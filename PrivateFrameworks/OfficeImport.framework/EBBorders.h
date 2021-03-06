/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EBBorders.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBBorders : XXUnknownSuperclass {
}
+(id)edBordersFromXlXf:(XlXf*)xlXf edResources:(id)resources;
+(id)edBordersFromXlDXf:(XlDXf*)xlDXf edResources:(id)resources;
@end

@interface EBBorders (Private)
+(int)convertXlBorderEnumToED:(int)ed;
+(int)convertXlDiagStyleEnumToED:(int)ed;
@end

