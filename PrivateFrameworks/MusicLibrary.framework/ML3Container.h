/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Entity.h"
#import "MusicLibrary-Structs.h"

@class NSArray, NSString, ML3Predicate;

@interface ML3Container : ML3Entity {
}
@property(readonly, assign) long long limitValue;
@property(readonly, assign) NSArray* limitOrderingProperties;
@property(readonly, assign) NSArray* limitOrderingDirectionality;
@property(readonly, assign) NSString* limitingProperty;
@property(readonly, assign, getter=isLimitOrderingDescending) BOOL limitOrderingDescending;
@property(readonly, assign, getter=isLimitedByCount) BOOL limitedByCount;
@property(readonly, assign) ML3Predicate* dynamicPredicate;
@property(readonly, assign) ML3Predicate* staticPredicate;
+(void)initialize;
+(id)databaseTable;
+(id)defaultOrderingProperties;
+(id)joinClauseForProperty:(id)property;
+(id)sectionPropertyForProperty:(id)property;
+(id)foreignDatabaseTableForProperty:(id)property;
+(id)foreignColumnForProperty:(id)property;
+(id)extraTablesToDelete;
+(id)persistentIDColumnForTable:(id)table;
+(id)nextFilepathForPlaylistType:(int)playlistType withPersistentID:(unsigned long long)persistentID inLibrary:(id)library;
+(BOOL)hasCriterionInCriteriaList:(OpaqueSearchCriteriaList*)criteriaList forITDBTrackField:(int)itdbtrackField;
+(id)predicateForCriteriaList:(OpaqueSearchCriteriaList*)criteriaList dynamicCriteria:(BOOL)criteria;
+(void)populateStaticItemsOfDynamicContainersOnHandle:(sqlite3*)dynamicContainersOnHandle;
+(void)populateDynamicContainersWithTrackPersistentID:(id)trackPersistentID inLibrary:(id)library;
-(BOOL)deleteFromLibrary;
-(id)initWithDictionary:(id)dictionary inLibrary:(id)library;
-(void)setValue:(id)value forProperty:(id)property;
-(OpaqueSearchCriteriaList*)importedCriteriaList;
-(BOOL)_isDescendingForTrackOrderProperty:(id)trackOrderProperty reverseOrderProperty:(id)property;
-(BOOL)isCustomContainerOrderingDescending;
-(void)getDisplayOrderingProperties:(id*)properties isDescending:(BOOL*)descending;
-(id)populateSQLWithStaticTrackPersistentID:(id)staticTrackPersistentID;
-(void)bindPopulateStatement:(sqlite3_stmt*)statement withStaticTrackPersistentID:(id)staticTrackPersistentID;
-(void)setNeedsSave;
-(void)removeAllTracks;
-(BOOL)addTrackWithPersistentID:(long long)persistentID;
-(BOOL)addTrackWithPersistentID:(long long)persistentID insertedPhysicalOrderOut:(long long*)anOut fullReorderOccurredOut:(BOOL*)anOut3;
-(BOOL)insertTrackWithPersistentID:(long long)persistentID afterPhysicalOrder:(long long)order;
-(long long)nextPhysicalOrderAfterPhysicalOrder:(long long)order;
-(BOOL)insertTrackWithPersistentID:(long long)persistentID afterPhysicalOrder:(long long)order insertedPhysicalOrderOut:(long long*)anOut fullReorderOccurredOut:(BOOL*)anOut4;
-(BOOL)insertTracksWithPersistentIDs:(long long*)persistentIDs count:(unsigned)count afterPhysicalOrder:(long long)order insertedPhysicalOrdersOut:(long long*)anOut fullReorderOccurredOut:(BOOL*)anOut5;
-(BOOL)_computeBeginPhysicalOrder:(long long*)order andIncrement:(long long*)increment forCount:(unsigned)count afterPhysicalOrder:(long long)order4 forceReorder:(BOOL)reorder;
-(BOOL)_insertTracksWithPersistentIDs:(long long*)persistentIDs count:(unsigned)count afterPhysicalOrder:(long long)order insertedPhysicalOrdersOut:(long long*)anOut fullReorderOccurredOut:(BOOL*)anOut5 forceReorder:(BOOL)reorder;
-(BOOL)_removeTrackAtPhysicalOrderNoSave:(long long)physicalOrderNoSave;
-(void)removeTrackAtPhysicalOrder:(long long)physicalOrder;
-(BOOL)moveTrackFromPhysicalOrder:(long long)physicalOrder toAfterPhysicalOrder:(long long)afterPhysicalOrder;
-(BOOL)moveTrackFromPhysicalOrder:(long long)physicalOrder toAfterPhysicalOrder:(long long)afterPhysicalOrder insertedPhysicalOrderOut:(long long*)anOut fullReorderOccurredOut:(BOOL*)anOut4;
@end
