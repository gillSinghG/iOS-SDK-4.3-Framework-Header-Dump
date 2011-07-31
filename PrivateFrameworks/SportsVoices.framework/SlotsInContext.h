/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SimpleSlotSequence, SlotSequence;

@interface SlotsInContext : XXUnknownSuperclass {
	SlotSequence* _preContext;
	SlotSequence* _preContextReversed;
	SimpleSlotSequence* _significantSlots;
	SlotSequence* _postContext;
}
@property(readonly, assign) SimpleSlotSequence* significantSlots;
+(id)test;
+(id)slotsInContextWithSignificantSlotSequence:(id)significantSlotSequence;
+(id)instanceFromPlist:(id)plist;
-(id)initFromPlist:(id)plist;
-(id)initWithArraysForSignificantSlots:(id)significantSlots preContext:(id)context postContext:(id)context3;
-(void)dealloc;
-(id)indicesOfOccurrencesInTarget:(id)target;
-(id)description;
@end
