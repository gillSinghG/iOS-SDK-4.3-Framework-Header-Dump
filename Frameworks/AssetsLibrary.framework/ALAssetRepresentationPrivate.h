/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

#import "ALAssetsLibraryAsset.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MLPhoto, NSString, ALAssetsLibrary;

__attribute__((visibility("hidden")))
@interface ALAssetRepresentationPrivate : XXUnknownSuperclass <ALAssetsLibraryAsset> {
@private
	MLPhoto* _photo;
	NSString* _extension;
	ALAssetsLibrary* _library;
	BOOL _isValid;
}
@property(retain, nonatomic) MLPhoto* photo;
@property(copy, nonatomic) NSString* extension;
@property(assign, nonatomic) ALAssetsLibrary* library;
@property(assign, nonatomic) BOOL isValid;
+(void)_setupFileDescriptorQueue;
+(int)_fileDescriptorForPersistentURL:(id)persistentURL;
+(void)_setFileDescriptor:(int)descriptor forPersistentURL:(id)persistentURL;
+(void)_clearFileDescriptorQueue;
-(id)initWithMLPhoto:(id)mlphoto extension:(id)extension library:(id)library;
-(void)dealloc;
-(void)libraryDidChange;
-(void)libraryWillDisappear;
-(BOOL)_isImage;
-(BOOL)_isVideo;
@end
