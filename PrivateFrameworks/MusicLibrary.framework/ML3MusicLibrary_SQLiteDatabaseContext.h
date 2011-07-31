/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MusicLibrary-Structs.h"


__attribute__((visibility("hidden")))
@interface ML3MusicLibrary_SQLiteDatabaseContext : XXUnknownSuperclass {
@private
	sqlite3** _dbStack;
	unsigned _dbStackCurrentIndex;
	void* _iTunesExtensions;
	iPhoneSortKeyBuilder* _sortKeyBuilder;
	CFDictionaryRef _statementCache;
	unsigned _isInTransaction : 1;
	unsigned _transactionHasChanges : 1;
	unsigned _transactionHasNonContentsChanges : 1;
}
@property(readonly, assign, nonatomic) iPhoneSortKeyBuilder* sortKeyBuilder;
@property(assign, nonatomic) BOOL transactionHasNonContentsChanges;
@property(assign, nonatomic) BOOL transactionHasChanges;
@property(assign, nonatomic) BOOL isInTransaction;
@property(readonly, assign, nonatomic) sqlite3* db;
-(id)initWithDB:(sqlite3*)db;
-(void)dealloc;
-(BOOL)executeSQL:(id)sql;
-(sqlite3_stmt*)statementForSQL:(id)sql;
-(void)pushDB:(sqlite3*)db;
-(void)popDB;
@end
