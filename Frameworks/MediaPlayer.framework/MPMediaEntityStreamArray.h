/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, MPMediaQueryCriteria, MPMediaQuerySectionInfo, MPMediaLibrary;

@interface MPMediaEntityStreamArray : XXUnknownSuperclass <NSCopying> {
	int _entityType;
	dispatch_queue_s* _queue;
	MPMediaQueryCriteria* _queryCriteria;
	MPMediaLibrary* _library;
	int _containedMediaTypes;
	NSMutableArray* _entities;
	CFArrayRef _entitiesSemaphores;
	unsigned _entitiesSemaphoreIndex;
	unsigned _count;
	MPMediaQuerySectionInfo* _sectionInfo;
	CFArrayRef _countAndSectionInfoSemaphores;
	unsigned _hasCountAndSectionInfo : 1;
	CFArrayRef _isEmptySemaphores;
	int _retainCount;
	unsigned _isEmpty : 1;
	unsigned _hasIsEmpty : 1;
	unsigned _hasStartedLoadingIsEmpty : 1;
	unsigned _hasStartedLoadingEntities : 1;
}
@property(assign, nonatomic) int containedMediaTypes;
@property(readonly, assign, nonatomic) MPMediaQueryCriteria* queryCriteria;
@property(readonly, assign, nonatomic) MPMediaLibrary* library;
@property(readonly, copy, nonatomic) MPMediaQuerySectionInfo* sectionInfo;
-(id)init;
-(void)_commonInitMPMediaEntityStreamArray;
-(id)initWithEntityType:(int)entityType queryCriteria:(id)criteria library:(id)library;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)MPIsEmpty;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)index;
-(id)propertiesToFetch;
-(void)setIsEmpty:(BOOL)empty;
-(void)setCount:(unsigned)count sectionInfo:(id)info;
-(void)_onQueueAddObject:(id)object;
-(void)addItemWithIdentifier:(long long)identifier valuesForProperties:(id)properties;
-(void)addCollectionWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQueryCriteria:(id)criteria grouping:(int)grouping;
-(void)_onQueueStartLoadingIsEmpty;
-(void)_onQueueStartLoadingEntities;
@end
