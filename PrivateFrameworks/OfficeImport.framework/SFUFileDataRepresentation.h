/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"
#import "SFUFileDataRepresentation.h"

@class SFUCryptoKey, NSString;

__attribute__((visibility("hidden")))
@interface SFUFileDataRepresentation : SFUDataRepresentation {
@private
	NSString* mPath;
	int mSharedFd;
	long long mFileLength;
	unsigned mFileType;
	BOOL mHasFileAttributes;
	long long mPlaintextDataLength;
	SFUCryptoKey* mCryptoKey;
}
-(id)initWithPath:(id)path;
-(id)initWithPath:(id)path sharedFileDescriptor:(int)descriptor;
-(id)initWithPath:(id)path cryptoKey:(id)key dataLength:(long long)length;
-(id)initWithPath:(id)path sharedFileDescriptor:(int)descriptor cryptoKey:(id)key dataLength:(long long)length;
-(id)initWithCopyOfData:(id)data path:(id)path;
-(id)initWithCopyOfData:(id)data path:(id)path cryptoKey:(id)key;
-(void)dealloc;
-(id)description;
-(id)path;
-(unsigned long)fileType;
-(void)setFileType:(unsigned long)type;
-(BOOL)isReadable;
-(long long)dataLength;
-(long long)encodedLength;
-(BOOL)isEncrypted;
-(BOOL)isCryptoKeyIdenticalToKey:(id)key;
-(id)inputStream;
-(BOOL)hasSameLocationAs:(id)as;
@end

@interface SFUFileDataRepresentation (Private)
-(void)readFileAttributes;
@end

