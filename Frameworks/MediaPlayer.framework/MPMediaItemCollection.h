/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaEntity.h"

@class MPMediaItem, NSArray;

@interface MPMediaItemCollection : MPMediaEntity {
	MPMediaItemCollectionInternal _internal;
}
@property(assign, nonatomic) MPMediaItemCollectionInternal _internal;
@property(readonly, assign, nonatomic) int mediaTypes;
@property(readonly, assign, nonatomic) unsigned count;
@property(readonly, assign, nonatomic) MPMediaItem* representativeItem;
@property(readonly, assign, nonatomic) NSArray* items;
+(id)collectionWithItems:(id)items;
+(id)titlePropertyForGroupingType:(int)groupingType;
+(id)representativePersistentIDPropertyForGroupingType:(int)groupingType;
-(id)init;
-(id)initWithItems:(id)items;
-(id)_init;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)itemsQuery;
@end
