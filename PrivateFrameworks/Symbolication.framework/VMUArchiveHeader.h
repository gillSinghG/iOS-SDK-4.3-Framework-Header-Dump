/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUHeader.h"

@class NSMutableArray, NSString;

@interface VMUArchiveHeader : VMUHeader {
	NSMutableArray* _headers;
	NSString* _path;
}
+(id)archiveHeaderWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;
-(id)initWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;
-(void)dealloc;
-(BOOL)isArchive;
-(id)headers;
-(id)architecture;
-(id)description;
@end
