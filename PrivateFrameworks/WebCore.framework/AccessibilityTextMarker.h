/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface AccessibilityTextMarker : XXUnknownSuperclass {
@private
	TextMarkerData _textMarkerData;
}
+(id)textMarkerWithVisiblePosition:(VisiblePosition*)visiblePosition;
-(id)initWithTextMarker:(TextMarkerData*)textMarker;
-(id)initWithData:(id)data;
-(id)dataRepresentation;
-(VisiblePosition)visiblePosition;
-(id)description;
@end

