/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SFUZipArchive, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CPBundleResourcePackage : XXUnknownSuperclass {
@private
	SFUZipArchive* mZipArchive;
	NSMutableDictionary* mEntryMap;
}
-(id)initWithZipArchive:(id)zipArchive;
-(void)dealloc;
-(id)entryWithName:(id)name;
@end
