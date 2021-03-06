/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EKDayOccurrenceView, NSDate;

@interface EKDayViewContentItem : XXUnknownSuperclass {
@private
	unsigned _eventIndex;
	EKDayOccurrenceView* _view;
	NSDate* _startDate;
	NSDate* _endDate;
	double _duration;
}
@property(retain, nonatomic) EKDayOccurrenceView* view;
@property(readonly, assign, nonatomic) unsigned eventIndex;
@property(copy, nonatomic) NSDate* startDate;
@property(copy, nonatomic) NSDate* endDate;
@property(assign, nonatomic) double duration;
-(id)initWithEventIndex:(unsigned)eventIndex;
-(void)dealloc;
-(BOOL)isEqual:(id)equal;
@end

