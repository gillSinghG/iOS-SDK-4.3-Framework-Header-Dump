/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSError, YTSearchRequest, NSMutableArray;

@interface YTVideoDataSource : XXUnknownSuperclass {
	BOOL _hasLoaded;
	NSMutableArray* _videos;
	YTSearchRequest* _searchRequest;
	unsigned _startIndex;
	unsigned _videosRemaining;
	NSError* _lastError;
}
+(void)saveDataSources;
+(id)sharedDataSource;
+(void)setShouldRemoveOldDefaults;
+(BOOL)shouldRemoveOldDefaults;
-(id)init;
-(void)dealloc;
-(id)videos;
-(void)reloadData;
-(BOOL)isLoading;
-(BOOL)hasLoaded;
-(void)loadFromDefaults;
-(id)lastError;
-(unsigned)videosRemaining;
-(void)loadMore;
-(unsigned)maxVideosToSave;
-(void)searchRequest:(id)request receivedVideos:(id)videos startIndex:(unsigned)index videosRemaining:(unsigned)remaining;
-(void)searchRequest:(id)request didFailWithError:(id)error;
-(void)removeVideoAtIndex:(int)index;
-(void)removeAllVideos;
-(id)_deprecatedVideosDefaultsKey;
-(void)_saveToDefaults;
-(void)_searchRequestLoadingStatusDidChange;
-(void)_didChange;
-(void)_setLastError:(id)error;
-(void)_setVideos:(id)videos;
-(void)addVideos:(id)videos toTop:(BOOL)top;
-(void)_clearVideos;
@end

