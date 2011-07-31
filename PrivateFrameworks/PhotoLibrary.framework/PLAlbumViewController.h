/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"
#import "PLAlbumViewDelegate.h"
#import "PLAlbumViewDataSource.h"

@class NSArray, PLEmptyAlbumView, PLAlbumView, MLAlbum;

@interface PLAlbumViewController : XXUnknownSuperclass <PLAlbumViewDataSource, PLAlbumViewDelegate> {
	MLAlbum* _album;
	PLEmptyAlbumView* _emptyAlbumView;
	int _currentFilter;
	NSArray* _filteredItems;
	BOOL _shouldReloadWhenBecomingVisible;
}
@property(assign, nonatomic) int currentFilter;
@property(readonly, assign, nonatomic) PLAlbumView* albumView;
@property(readonly, assign, nonatomic) MLAlbum* album;
-(id)init;
-(id)initWithAlbum:(id)album;
-(void)dealloc;
-(void)invalidateFilteredItems;
-(void)reloadData;
-(void)loadView;
-(void)viewWillAppear:(BOOL)view;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)setAlbum:(id)album;
-(void)showEmptyAlbumView:(BOOL)view;
-(id)contentScrollView;
-(id)filteredItems;
-(unsigned)filteredCount;
-(void)libraryDidChange:(id)library;
-(void)albumDidChange:(id)album;
-(unsigned)numberOfPhotosForAlbumView:(id)albumView;
-(id)albumView:(id)view imageDataForPhotoAtIndex:(unsigned)index imageWidth:(int*)width imageHeight:(int*)height bytesPerRow:(int*)row dataWidth:(int*)width6 dataHeight:(int*)height7 imageDataOffset:(int*)offset;
-(void)albumView:(id)view imageCount:(unsigned*)count videoCount:(unsigned*)count3 otherCount:(unsigned*)count4;
-(id)albumView:(id)view textBadgeForPhotoAtIndex:(unsigned)index;
-(void)albumViewPreheatImageData:(id)data forImagesInRange:(NSRange)range;
@end
