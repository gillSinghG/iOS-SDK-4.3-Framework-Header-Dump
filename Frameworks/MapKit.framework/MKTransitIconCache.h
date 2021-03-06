/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableSet, NSMutableDictionary, NSArray;

@interface MKTransitIconCache : XXUnknownSuperclass {
@private
	NSMutableSet* _iconIDs;
	NSMutableDictionary* _IDToImage;
	NSString* _cacheFolderPath;
	unsigned _iconSize;
	int _iconVersion;
	float _iconScale;
	BOOL _isEnabled;
}
@property(retain, nonatomic) NSString* cacheFolderPath;
@property(assign, nonatomic) int iconVersion;
@property(assign, nonatomic) unsigned iconSize;
@property(assign, nonatomic) float iconScale;
@property(assign, nonatomic) BOOL isEnabled;
@property(readonly, assign, nonatomic) NSArray* iconIDs;
+(id)sharedTransitIconCache;
-(id)init;
-(id)_infoPath;
-(void)_resetCache;
-(id)_iconPathForID:(long long)anId;
-(void)_addImage:(id)image withID:(long long)anId;
-(id)iconForID:(long long)anId;
-(void)setIconData:(id)data forID:(long long)anId;
@end

