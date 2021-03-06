/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MLPhotoBakedThumbnailsDelegate.h"


@interface MLPhoto : XXUnknownSuperclass <MLPhotoBakedThumbnailsDelegate> {
}
+(int)fullSizeImageFormat;
-(void)dealloc;
-(void)deleteFiles;
-(int)imageID;
-(void)setDurationInMilliseconds:(double)milliseconds;
-(double)durationInMilliseconds;
-(double)duration;
-(int)photoType;
-(void)setType:(int)type;
-(double)latitude;
-(void)setLatitude:(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)longitude;
-(BOOL)hasGPS;
-(CGRect)faceRectangles:(id)rectangles;
-(id)pathForImageFormat:(int)imageFormat;
-(int)sortByImageIDComparison:(id)comparison;
-(int)sortByDateComparison:(id)comparison;
-(double)captureTime;
-(void)setCaptureTime:(double)time;
-(void)setCaptureDateFromITunes:(unsigned long)itunes;
-(BOOL)isImage;
-(BOOL)isVideo;
-(BOOL)isAudio;
-(BOOL)allowsRotation;
-(BOOL)isEditable;
-(BOOL)didSetPhotoData;
-(id)pathForLargeDisplayableImageFile;
-(id)pathForOriginalFile;
-(id)pathForLargeThumbnailFile;
-(BOOL)hasFullSizeImageData;
-(id)pathForImageFile;
-(id)fileExtensions;
-(void)_setFilenameFromFullSizeVideoPath:(id)fullSizeVideoPath;
-(id)filenameWithoutExtension;
-(void)_setMetadataPathFromFullSizeVideoPath:(id)fullSizeVideoPath;
-(id)_metadataPath;
-(void)setPathForVideoFile:(id)videoFile;
-(id)pathForVideoFile;
-(BOOL)_isValidMimeType:(id)type forService:(id)service;
-(id)mimeTypeForService:(id)service;
-(id)utiType;
-(id)mimeType;
-(id)fileExtension;
-(BOOL)_isValidFileExtension:(id)extension forService:(id)service;
-(id)fileExtensionForService:(id)service;
-(int)orientation;
-(BOOL)isWritePending;
-(void)setWriteIsPending:(BOOL)pending;
-(void)addExtension:(id)extension;
-(void)setDate:(id)date;
-(id)thumbnailFilename;
-(id)prebakedThumbnailFilename;
-(id)prebakedLandscapeScrubberThumbnailsFilename;
-(id)prebakedPortraitScrubberThumbnailsFilename;
-(id)videoPreviewFilename;
-(id)pathForVideoPreviewFile;
-(id)pathForPrebakedLandscapeScrubberThumbnails;
-(id)pathForPrebakedPortraitScrubberThumbnails;
-(id)title;
-(id)pathForTrimmedVideoFile;
-(id)pathForThumbnailFile;
-(id)pathForPrebakedThumbnail;
-(void)decorateThumbnail:(id)thumbnail inContext:(CGContextRef)context;
@end

