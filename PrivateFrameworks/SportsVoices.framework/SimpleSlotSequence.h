/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import "SlotSequence.h"


@interface SimpleSlotSequence : SlotSequence {
}
+(id)slotArrayWithStrings:(id)strings;
+(id)slotSequenceWithStrings:(id)strings;
+(id)blankBufferedSlotSequenceWithStrings:(id)strings;
+(id)slotSequenceWithArray:(id)array;
-(id)sequenceByReplacingOccurencesOfSequence:(id)sequence withSequence:(id)sequence2;
-(id)sequenceByReplacingOccurencesOfSlotsInContext:(id)context withProduction:(id)production;
-(id)pad;
-(id)stringArray;
-(id)initWithArray:(id)array;
-(id)valueForAttributeKey:(id)attributeKey;
-(id)overlayedOn:(id)on;
-(id)first;
-(id)rest;
@end
