/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface EKEventDetailAttendeesListView : XXUnknownSuperclass {
@private
	NSArray* _acceptedNames;
	NSArray* _maybeNames;
	NSArray* _declinedNames;
	NSArray* _noReplyNames;
	NSArray* _ungroupedNames;
	UIColor* textColor;
	UIColor* highlightedTextColor;
	BOOL highlighted;
	BOOL _groupsNames;
}
@property(retain, nonatomic) NSArray* acceptedNames;
@property(retain, nonatomic) NSArray* maybeNames;
@property(retain, nonatomic) NSArray* declinedNames;
@property(retain, nonatomic) NSArray* noReplyNames;
@property(retain, nonatomic) NSArray* ungroupedNames;
@property(retain, nonatomic) UIColor* textColor;
@property(retain, nonatomic) UIColor* highlightedTextColor;
@property(assign, nonatomic) BOOL highlighted;
@property(assign, nonatomic) BOOL groupsNames;
-(BOOL)isHighlighted;
-(CGSize)sizeThatFits:(CGSize)fits;
-(float)_heightForGroupOfAttendeeNames:(id)attendeeNames;
-(void)drawRect:(CGRect)rect;
-(void)drawInvitees:(id)invitees withStatus:(id)status startingAtPoint:(CGPoint)point givenWidth:(float)width;
-(void)_drawColumnOfStrings:(id)strings inRange:(NSRange)range startingAtPoint:(CGPoint)point givenWidth:(float)width;
-(void)dealloc;
@end

