/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface EKPreviewSection : XXUnknownSuperclass {
@private
	NSArray* _events;
	XXStruct_lQVxyC _date;
}
@property(readonly, assign, nonatomic) NSArray* events;
@property(assign, nonatomic) XXStruct_lQVxyC date;
+(id)sectionWithDate:(XXStruct_lQVxyC)date;
-(id)initWithDate:(XXStruct_lQVxyC)date;
-(void)dealloc;
-(void)addEvent:(id)event;
@end

