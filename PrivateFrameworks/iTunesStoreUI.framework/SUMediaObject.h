/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStoreUI-Structs.h"

@class NSURL, NSString, NSDictionary;

@interface SUMediaObject : XXUnknownSuperclass {
	dispatch_queue_s* _dispatchQueue;
	unsigned _imagePickerQualityType;
	NSDictionary* _pickerInfo;
}
@property(readonly, assign) NSURL* referenceURL;
@property(readonly, assign) NSURL* mediaURL;
@property(readonly, assign) NSString* mediaType;
@property(readonly, assign) NSString* inputSourceMIMEType;
@property(assign) unsigned imagePickerQualityType;
@property(readonly, assign) NSDictionary* imagePickerInfo;
+(id)newMediaObjectWithImagePickerInfo:(id)imagePickerInfo;
-(id)init;
-(id)initWithImagePickerInfo:(id)imagePickerInfo;
-(void)dealloc;
-(id)copyPreparationOperations;
-(void)loadLibraryThumbnailWithCompletionBlock:(id)completionBlock;
-(id)newInputSource;
-(id)newComposeImageWithMaximumSize:(float)maximumSize;
-(id)newThumbnailImageWithMaximumSize:(float)maximumSize;
-(void)saveToLibraryWithCompletionBlock:(id)completionBlock;
-(id)_fullSizeImage;
-(id)_newLibraryThumbnail;
@end
