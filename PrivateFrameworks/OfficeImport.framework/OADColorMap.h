/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADColorMap : XXUnknownSuperclass {
@private
	NSMutableDictionary* mMappings;
}
-(id)init;
-(void)dealloc;
-(int)mappingForIndex:(int)index;
-(void)addMapping:(int)mapping index:(int)index;
@end
