/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import "NSCopying.h"
#import "ISDataProvider.h"

@class NSArray, NSString;

@interface ISHashedDownloadProvider : ISDataProvider <NSCopying> {
	int _fileDescriptor;
	NSArray* _hashes;
	NSString* _localFilePath;
	CC_MD5state_st _md5Context;
	long long _numberOfBytesToHash;
	long long _totalBytesWritten;
	long long _validatedBytes;
}
@property(retain) NSArray* hashes;
@property(retain) NSString* localFilePath;
@property(assign) long long numberOfBytesToHash;
@property(assign) long long streamedBytes;
@property(assign) long long validatedBytes;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)canStreamContentLength:(long long)length error:(id*)error;
-(void)closeStream;
-(BOOL)isStream;
-(BOOL)parseData:(id)data returningError:(id*)error;
-(void)resetStream;
-(void)setup;
-(BOOL)_checkHashForByteCount:(long long)byteCount;
-(void)_closeFile;
-(BOOL)_openFile;
-(BOOL)_truncateToSize:(long long)size;
-(long long)_verifiedBytesByInitializingHashForFileSize:(long long)fileSize;
-(BOOL)_writeDataWithHashing:(id)hashing returningError:(id*)error;
-(BOOL)_writeDataWithoutHashing:(id)hashing returningError:(id*)error;
@end

