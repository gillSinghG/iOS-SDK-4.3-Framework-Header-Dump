/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EventKitUI-Structs.h"

@class EKEventStore, NSPredicate, NSMutableArray;
@protocol CalendarEventLoaderDelegate;

@interface CalendarEventLoader : XXUnknownSuperclass {
	EKEventStore* _store;
	CalFilter* _filter;
	NSPredicate* _predicate;
	id<CalendarEventLoaderDelegate> _delegate;
	NSMutableArray* _occurrences;
	NSMutableArray* _selectedDateOccurrences;
	dispatch_queue_s* _queue;
	dispatch_queue_s* _lock;
	dispatch_group_s* _group;
	int _seed;
	int _backgroundSeed;
	NSMutableArray* _backgroundResults;
	unsigned _paddingMonthsToLoad;
	BOOL _loadsBlocked;
	BOOL _processingReload;
	NSPredicate* _backgroundPredicate;
	double _selectedDate;
	XXStruct_lQVxyC _selectedDateGr;
	XXStruct_lQVxyC _selectedDateTimeGr;
	double _start;
	double _end;
	XXStruct_lQVxyC _startGr;
	XXStruct_lQVxyC _endGr;
}
@property(assign, nonatomic) id<CalendarEventLoaderDelegate> delegate;
@property(assign, nonatomic) BOOL loadsBlocked;
@property(assign, nonatomic) unsigned paddingMonthsToLoad;
@property(retain, nonatomic) CalFilter* filter;
-(id)initWithEventStore:(id)eventStore;
-(void)dealloc;
-(void)_updatePredicate;
-(void)_eventStoreChanged:(id)changed;
-(id)selectedDateOccurrences:(BOOL)occurrences loadIsComplete:(BOOL*)complete;
-(id)selectedDateOccurrences:(BOOL)occurrences;
-(void)_reloadOccurrences;
-(void)_setDisplayedDateRange:(XXStruct_lQVxyC)range end:(XXStruct_lQVxyC)end loadMethod:(int)method;
-(void)displayedDateRange:(XXStruct_lQVxyC*)range end:(XXStruct_lQVxyC*)end;
-(void)setSelectedDate:(XXStruct_lQVxyC)date loadMethod:(int)method;
-(XXStruct_lQVxyC)selectedDate;
-(void)timeZoneChanged;
-(void)_clearOccurrences;
-(void)_reload:(BOOL)reload;
-(void)_notifyDelegateThatOccurrencesDidUpdate;
-(id)displayedOccurrences:(BOOL)occurrences;
-(id)occurrencesForStartDate:(XXStruct_lQVxyC)startDate endDate:(XXStruct_lQVxyC)date waitForLoad:(BOOL)load;
-(id)occurrencesForDay:(XXStruct_lQVxyC)day waitForLoad:(BOOL)load;
-(void)_beginBackgroundLoadForPredicate:(id)predicate;
-(void)cancelBackgroundLoad;
-(BOOL)_backgroundLoadCompleted:(id)completed;
-(BOOL)waitForBackgroundLoad;
@end
