/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSFilesystemItemCopyOperation.h"


__attribute__((visibility("hidden")))
@interface NSFilesystemItemLinkOperation : NSFilesystemItemCopyOperation {
}
+(id)filesystemItemLinkOperationWithSourcePath:(id)sourcePath destinationPath:(id)path;
-(BOOL)_shouldProceedAfterErrno:(int)errno linkingItemAtPath:(const char*)path toPath:(const char*)path3;
-(BOOL)shouldLinkItemAtPath:(id)path toPath:(id)path2;
-(BOOL)_shouldLinkItemAtPath:(const char*)path toPath:(const char*)path2;
-(BOOL)_validatePaths:(id*)paths;
-(void)_handleFTSEntry:(ftsent*)entry;
@end

