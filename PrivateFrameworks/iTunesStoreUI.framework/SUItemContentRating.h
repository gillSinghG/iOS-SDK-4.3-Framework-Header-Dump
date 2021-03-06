/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStoreUI-Structs.h"

@class NSString, SSItemArtworkImage, NSDictionary;

@interface SUItemContentRating : XXUnknownSuperclass <NSCopying> {
@private
	NSDictionary* _dictionary;
	int _rank;
	NSString* _ratingDescription;
	NSString* _ratingLabel;
	int _ratingSystem;
	SSItemArtworkImage* _ratingSystemLogo;
	BOOL _shouldHideWhenRestricted;
}
@property(assign, nonatomic) int rank;
@property(copy, nonatomic) NSString* ratingDescription;
@property(copy, nonatomic) NSString* ratingLabel;
@property(assign, nonatomic) int ratingSystem;
@property(copy, nonatomic) SSItemArtworkImage* ratingSystemLogo;
@property(assign, nonatomic) BOOL shouldHideWhenRestricted;
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;
@property(readonly, assign, nonatomic, getter=isExplicitContent) BOOL explicitContent;
+(int)ratingSystemFromString:(id)string;
-(id)initWithDictionary:(id)dictionary;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)valueForProperty:(id)property;
-(BOOL)_isRatingSystemForApps:(int)apps;
-(BOOL)_isRatingSystemForMovies:(int)movies;
-(BOOL)_isRatingSystemForMusic:(int)music;
-(BOOL)_isRatingSystemForTV:(int)tv;
@end

